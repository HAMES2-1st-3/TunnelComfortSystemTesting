/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1387_ERAY_STRUCTS_H_
#define _TC1387_ERAY_STRUCTS_H_
/*
   TriCore TC1387
   Some struct definitions for conveniance
*/

#include <tc1387/eray.h>
#ifndef ERAY_BASE
#define ERAY_BASE 0xf0010000
#endif /* ERAY_BASE */


typedef struct
{
    ERAY_CLC_t      CLC;                /* 0x0 */
    ERAY_CUST1_t    CUST1;              /* 0x4 */
    ERAY_ID_t       ID;                 /* 0x8 */
    ERAY_CUST3_t    CUST3;              /* 0xc */
    ERAY_TEST1_t    TEST1;              /* 0x10 */
    ERAY_TEST2_t    TEST2;              /* 0x14 */
    unsigned int    reserved6[0x1];     /* 0x18 */
    ERAY_LCK_t      LCK;                /* 0x1c */
    ERAY_EIR_t      EIR;                /* 0x20 */
    ERAY_SIR_t      SIR;                /* 0x24 */
    ERAY_EILS_t     EILS;               /* 0x28 */
    ERAY_SILS_t     SILS;               /* 0x2c */
    ERAY_EIES_t     EIES;               /* 0x30 */
    ERAY_EIER_t     EIER;               /* 0x34 */
    ERAY_SIES_t     SIES;               /* 0x38 */
    ERAY_SIER_t     SIER;               /* 0x3c */
    ERAY_ILE_t      ILE;                /* 0x40 */
    ERAY_T0C_t      T0C;                /* 0x44 */
    ERAY_T1C_t      T1C;                /* 0x48 */
    ERAY_STPW1_t    STPW1;              /* 0x4c */
    ERAY_STPW2_t    STPW2;              /* 0x50 */
    unsigned int    reserved21[0xb];    /* 0x54 */
    ERAY_SUCC1_t    SUCC1;              /* 0x80 */
    ERAY_SUCC2_t    SUCC2;              /* 0x84 */
    ERAY_SUCC3_t    SUCC3;              /* 0x88 */
    ERAY_NEMC_t     NEMC;               /* 0x8c */
    ERAY_PRTC1_t    PRTC1;              /* 0x90 */
    ERAY_PRTC2_t    PRTC2;              /* 0x94 */
    ERAY_MHDC_t     MHDC;               /* 0x98 */
    unsigned int    reserved29[0x1];    /* 0x9c */
    ERAY_GTUC01_t   GTUC01;             /* 0xa0 */
    ERAY_GTUC02_t   GTUC02;             /* 0xa4 */
    ERAY_GTUC03_t   GTUC03;             /* 0xa8 */
    ERAY_GTUC04_t   GTUC04;             /* 0xac */
    ERAY_GTUC05_t   GTUC05;             /* 0xb0 */
    ERAY_GTUC06_t   GTUC06;             /* 0xb4 */
    ERAY_GTUC07_t   GTUC07;             /* 0xb8 */
    ERAY_GTUC08_t   GTUC08;             /* 0xbc */
    ERAY_GTUC09_t   GTUC09;             /* 0xc0 */
    ERAY_GTUC10_t   GTUC10;             /* 0xc4 */
    ERAY_GTUC11_t   GTUC11;             /* 0xc8 */
    unsigned int    reserved41[0xd];    /* 0xcc */
    ERAY_CCSV_t     CCSV;               /* 0x100 */
    ERAY_CCEV_t     CCEV;               /* 0x104 */
    unsigned int    reserved44[0x2];    /* 0x108 */
    ERAY_SCV_t      SCV;                /* 0x110 */
    ERAY_MTCCV_t    MTCCV;              /* 0x114 */
    ERAY_RCV_t      RCV;                /* 0x118 */
    ERAY_OCV_t      OCV;                /* 0x11c */
    ERAY_SFS_t      SFS;                /* 0x120 */
    ERAY_SWNIT_t    SWNIT;              /* 0x124 */
    ERAY_ACS_t      ACS;                /* 0x128 */
    unsigned int    reserved52[0x1];    /* 0x12c */
    ERAY_ESIDm_t    ESID01;             /* 0x130 */
    ERAY_ESIDm_t    ESID02;             /* 0x134 */
    ERAY_ESIDm_t    ESID03;             /* 0x138 */
    ERAY_ESIDm_t    ESID04;             /* 0x13c */
    ERAY_ESIDm_t    ESID05;             /* 0x140 */
    ERAY_ESIDm_t    ESID06;             /* 0x144 */
    ERAY_ESIDm_t    ESID07;             /* 0x148 */
    ERAY_ESIDm_t    ESID08;             /* 0x14c */
    ERAY_ESIDm_t    ESID09;             /* 0x150 */
    ERAY_ESIDm_t    ESID10;             /* 0x154 */
    ERAY_ESIDm_t    ESID11;             /* 0x158 */
    ERAY_ESIDm_t    ESID12;             /* 0x15c */
    ERAY_ESIDm_t    ESID13;             /* 0x160 */
    ERAY_ESIDm_t    ESID14;             /* 0x164 */
    ERAY_ESIDm_t    ESID15;             /* 0x168 */
    unsigned int    reserved68[0x1];    /* 0x16c */
    ERAY_OSIDm_t    OSID01;             /* 0x170 */
    ERAY_OSIDm_t    OSID02;             /* 0x174 */
    ERAY_OSIDm_t    OSID03;             /* 0x178 */
    ERAY_OSIDm_t    OSID04;             /* 0x17c */
    ERAY_OSIDm_t    OSID05;             /* 0x180 */
    ERAY_OSIDm_t    OSID06;             /* 0x184 */
    ERAY_OSIDm_t    OSID07;             /* 0x188 */
    ERAY_OSIDm_t    OSID08;             /* 0x18c */
    ERAY_OSIDm_t    OSID09;             /* 0x190 */
    ERAY_OSIDm_t    OSID10;             /* 0x194 */
    ERAY_OSIDm_t    OSID11;             /* 0x198 */
    ERAY_OSIDm_t    OSID12;             /* 0x19c */
    ERAY_OSIDm_t    OSID13;             /* 0x1a0 */
    ERAY_OSIDm_t    OSID14;             /* 0x1a4 */
    ERAY_OSIDm_t    OSID15;             /* 0x1a8 */
    unsigned int    reserved84[0x1];    /* 0x1ac */
    ERAY_NMVm_t     NMV1;               /* 0x1b0 */
    ERAY_NMVm_t     NMV2;               /* 0x1b4 */
    ERAY_NMVm_t     NMV3;               /* 0x1b8 */
    unsigned int    reserved88[0x51];   /* 0x1bc */
    ERAY_MRC_t      MRC;                /* 0x300 */
    ERAY_FRF_t      FRF;                /* 0x304 */
    ERAY_FRFM_t     FRFM;               /* 0x308 */
    ERAY_FCL_t      FCL;                /* 0x30c */
    ERAY_MHDS_t     MHDS;               /* 0x310 */
    ERAY_LDTS_t     LDTS;               /* 0x314 */
    ERAY_FSR_t      FSR;                /* 0x318 */
    ERAY_MHDF_t     MHDF;               /* 0x31c */
    ERAY_TXRQm_t    TXRQ1;              /* 0x320 */
    ERAY_TXRQm_t    TXRQ2;              /* 0x324 */
    ERAY_TXRQm_t    TXRQ3;              /* 0x328 */
    ERAY_TXRQm_t    TXRQ4;              /* 0x32c */
    ERAY_NDATm_t    NDAT1;              /* 0x330 */
    ERAY_NDATm_t    NDAT2;              /* 0x334 */
    ERAY_NDATm_t    NDAT3;              /* 0x338 */
    ERAY_NDATm_t    NDAT4;              /* 0x33c */
    ERAY_MBSCm_t    MBSC1;              /* 0x340 */
    ERAY_MBSCm_t    MBSC2;              /* 0x344 */
    ERAY_MBSCm_t    MBSC3;              /* 0x348 */
    ERAY_MBSCm_t    MBSC4;              /* 0x34c */
    unsigned int    reserved109[0x16];  /* 0x350 */
    ERAY_NDICm_t    NDIC1;              /* 0x3a8 */
    ERAY_NDICm_t    NDIC2;              /* 0x3ac */
    ERAY_NDICm_t    NDIC3;              /* 0x3b0 */
    ERAY_NDICm_t    NDIC4;              /* 0x3b4 */
    ERAY_MSICm_t    MSIC1;              /* 0x3b8 */
    ERAY_MSICm_t    MSIC2;              /* 0x3bc */
    ERAY_MSICm_t    MSIC3;              /* 0x3c0 */
    ERAY_MSICm_t    MSIC4;              /* 0x3c4 */
    ERAY_IBUSYSRC_t IBUSYSRC;           /* 0x3c8 */
    ERAY_OBUSYSRC_t OBUSYSRC;           /* 0x3cc */
    ERAY_MBSCmSRC_t MBSC1SRC;           /* 0x3d0 */
    ERAY_MBSCmSRC_t MBSC0SRC;           /* 0x3d4 */
    ERAY_NDATmSRC_t NDAT1SRC;           /* 0x3d8 */
    ERAY_NDATmSRC_t NDAT0SRC;           /* 0x3dc */
    ERAY_TINTmSRC_t TINT1SRC;           /* 0x3e0 */
    ERAY_TINTmSRC_t TINT0SRC;           /* 0x3e4 */
    ERAY_INTmSRC_t  INT1SRC;            /* 0x3e8 */
    ERAY_INTmSRC_t  INT0SRC;            /* 0x3ec */
    ERAY_CREL_t     CREL;               /* 0x3f0 */
    ERAY_ENDN_t     ENDN;               /* 0x3f4 */
    unsigned int    reserved130[0x2];   /* 0x3f8 */
    ERAY_WRDSm_t    WRDS01;             /* 0x400 */
    ERAY_WRDSm_t    WRDS02;             /* 0x404 */
    ERAY_WRDSm_t    WRDS03;             /* 0x408 */
    ERAY_WRDSm_t    WRDS04;             /* 0x40c */
    ERAY_WRDSm_t    WRDS05;             /* 0x410 */
    ERAY_WRDSm_t    WRDS06;             /* 0x414 */
    ERAY_WRDSm_t    WRDS07;             /* 0x418 */
    ERAY_WRDSm_t    WRDS08;             /* 0x41c */
    ERAY_WRDSm_t    WRDS09;             /* 0x420 */
    ERAY_WRDSm_t    WRDS10;             /* 0x424 */
    ERAY_WRDSm_t    WRDS11;             /* 0x428 */
    ERAY_WRDSm_t    WRDS12;             /* 0x42c */
    ERAY_WRDSm_t    WRDS13;             /* 0x430 */
    ERAY_WRDSm_t    WRDS14;             /* 0x434 */
    ERAY_WRDSm_t    WRDS15;             /* 0x438 */
    ERAY_WRDSm_t    WRDS16;             /* 0x43c */
    ERAY_WRDSm_t    WRDS17;             /* 0x440 */
    ERAY_WRDSm_t    WRDS18;             /* 0x444 */
    ERAY_WRDSm_t    WRDS19;             /* 0x448 */
    ERAY_WRDSm_t    WRDS20;             /* 0x44c */
    ERAY_WRDSm_t    WRDS21;             /* 0x450 */
    ERAY_WRDSm_t    WRDS22;             /* 0x454 */
    ERAY_WRDSm_t    WRDS23;             /* 0x458 */
    ERAY_WRDSm_t    WRDS24;             /* 0x45c */
    ERAY_WRDSm_t    WRDS25;             /* 0x460 */
    ERAY_WRDSm_t    WRDS26;             /* 0x464 */
    ERAY_WRDSm_t    WRDS27;             /* 0x468 */
    ERAY_WRDSm_t    WRDS28;             /* 0x46c */
    ERAY_WRDSm_t    WRDS29;             /* 0x470 */
    ERAY_WRDSm_t    WRDS30;             /* 0x474 */
    ERAY_WRDSm_t    WRDS31;             /* 0x478 */
    ERAY_WRDSm_t    WRDS32;             /* 0x47c */
    ERAY_WRDSm_t    WRDS33;             /* 0x480 */
    ERAY_WRDSm_t    WRDS34;             /* 0x484 */
    ERAY_WRDSm_t    WRDS35;             /* 0x488 */
    ERAY_WRDSm_t    WRDS36;             /* 0x48c */
    ERAY_WRDSm_t    WRDS37;             /* 0x490 */
    ERAY_WRDSm_t    WRDS38;             /* 0x494 */
    ERAY_WRDSm_t    WRDS39;             /* 0x498 */
    ERAY_WRDSm_t    WRDS40;             /* 0x49c */
    ERAY_WRDSm_t    WRDS41;             /* 0x4a0 */
    ERAY_WRDSm_t    WRDS42;             /* 0x4a4 */
    ERAY_WRDSm_t    WRDS43;             /* 0x4a8 */
    ERAY_WRDSm_t    WRDS44;             /* 0x4ac */
    ERAY_WRDSm_t    WRDS45;             /* 0x4b0 */
    ERAY_WRDSm_t    WRDS46;             /* 0x4b4 */
    ERAY_WRDSm_t    WRDS47;             /* 0x4b8 */
    ERAY_WRDSm_t    WRDS48;             /* 0x4bc */
    ERAY_WRDSm_t    WRDS49;             /* 0x4c0 */
    ERAY_WRDSm_t    WRDS50;             /* 0x4c4 */
    ERAY_WRDSm_t    WRDS51;             /* 0x4c8 */
    ERAY_WRDSm_t    WRDS52;             /* 0x4cc */
    ERAY_WRDSm_t    WRDS53;             /* 0x4d0 */
    ERAY_WRDSm_t    WRDS54;             /* 0x4d4 */
    ERAY_WRDSm_t    WRDS55;             /* 0x4d8 */
    ERAY_WRDSm_t    WRDS56;             /* 0x4dc */
    ERAY_WRDSm_t    WRDS57;             /* 0x4e0 */
    ERAY_WRDSm_t    WRDS58;             /* 0x4e4 */
    ERAY_WRDSm_t    WRDS59;             /* 0x4e8 */
    ERAY_WRDSm_t    WRDS60;             /* 0x4ec */
    ERAY_WRDSm_t    WRDS61;             /* 0x4f0 */
    ERAY_WRDSm_t    WRDS62;             /* 0x4f4 */
    ERAY_WRDSm_t    WRDS63;             /* 0x4f8 */
    ERAY_WRDSm_t    WRDS64;             /* 0x4fc */
    ERAY_WRHS1_t    WRHS1;              /* 0x500 */
    ERAY_WRHS2_t    WRHS2;              /* 0x504 */
    ERAY_WRHS3_t    WRHS3;              /* 0x508 */
    unsigned int    reserved198[0x1];   /* 0x50c */
    ERAY_IBCM_t     IBCM;               /* 0x510 */
    ERAY_IBCR_t     IBCR;               /* 0x514 */
    unsigned int    reserved201[0x3a];  /* 0x518 */
    ERAY_RDDSm_t    RDDS01;             /* 0x600 */
    ERAY_RDDSm_t    RDDS02;             /* 0x604 */
    ERAY_RDDSm_t    RDDS03;             /* 0x608 */
    ERAY_RDDSm_t    RDDS04;             /* 0x60c */
    ERAY_RDDSm_t    RDDS05;             /* 0x610 */
    ERAY_RDDSm_t    RDDS06;             /* 0x614 */
    ERAY_RDDSm_t    RDDS07;             /* 0x618 */
    ERAY_RDDSm_t    RDDS08;             /* 0x61c */
    ERAY_RDDSm_t    RDDS09;             /* 0x620 */
    ERAY_RDDSm_t    RDDS10;             /* 0x624 */
    ERAY_RDDSm_t    RDDS11;             /* 0x628 */
    ERAY_RDDSm_t    RDDS12;             /* 0x62c */
    ERAY_RDDSm_t    RDDS13;             /* 0x630 */
    ERAY_RDDSm_t    RDDS14;             /* 0x634 */
    ERAY_RDDSm_t    RDDS15;             /* 0x638 */
    ERAY_RDDSm_t    RDDS16;             /* 0x63c */
    ERAY_RDDSm_t    RDDS17;             /* 0x640 */
    ERAY_RDDSm_t    RDDS18;             /* 0x644 */
    ERAY_RDDSm_t    RDDS19;             /* 0x648 */
    ERAY_RDDSm_t    RDDS20;             /* 0x64c */
    ERAY_RDDSm_t    RDDS21;             /* 0x650 */
    ERAY_RDDSm_t    RDDS22;             /* 0x654 */
    ERAY_RDDSm_t    RDDS23;             /* 0x658 */
    ERAY_RDDSm_t    RDDS24;             /* 0x65c */
    ERAY_RDDSm_t    RDDS25;             /* 0x660 */
    ERAY_RDDSm_t    RDDS26;             /* 0x664 */
    ERAY_RDDSm_t    RDDS27;             /* 0x668 */
    ERAY_RDDSm_t    RDDS28;             /* 0x66c */
    ERAY_RDDSm_t    RDDS29;             /* 0x670 */
    ERAY_RDDSm_t    RDDS30;             /* 0x674 */
    ERAY_RDDSm_t    RDDS31;             /* 0x678 */
    ERAY_RDDSm_t    RDDS32;             /* 0x67c */
    ERAY_RDDSm_t    RDDS33;             /* 0x680 */
    ERAY_RDDSm_t    RDDS34;             /* 0x684 */
    ERAY_RDDSm_t    RDDS35;             /* 0x688 */
    ERAY_RDDSm_t    RDDS36;             /* 0x68c */
    ERAY_RDDSm_t    RDDS37;             /* 0x690 */
    ERAY_RDDSm_t    RDDS38;             /* 0x694 */
    ERAY_RDDSm_t    RDDS39;             /* 0x698 */
    ERAY_RDDSm_t    RDDS40;             /* 0x69c */
    ERAY_RDDSm_t    RDDS41;             /* 0x6a0 */
    ERAY_RDDSm_t    RDDS42;             /* 0x6a4 */
    ERAY_RDDSm_t    RDDS43;             /* 0x6a8 */
    ERAY_RDDSm_t    RDDS44;             /* 0x6ac */
    ERAY_RDDSm_t    RDDS45;             /* 0x6b0 */
    ERAY_RDDSm_t    RDDS46;             /* 0x6b4 */
    ERAY_RDDSm_t    RDDS47;             /* 0x6b8 */
    ERAY_RDDSm_t    RDDS48;             /* 0x6bc */
    ERAY_RDDSm_t    RDDS49;             /* 0x6c0 */
    ERAY_RDDSm_t    RDDS50;             /* 0x6c4 */
    ERAY_RDDSm_t    RDDS51;             /* 0x6c8 */
    ERAY_RDDSm_t    RDDS52;             /* 0x6cc */
    ERAY_RDDSm_t    RDDS53;             /* 0x6d0 */
    ERAY_RDDSm_t    RDDS54;             /* 0x6d4 */
    ERAY_RDDSm_t    RDDS55;             /* 0x6d8 */
    ERAY_RDDSm_t    RDDS56;             /* 0x6dc */
    ERAY_RDDSm_t    RDDS57;             /* 0x6e0 */
    ERAY_RDDSm_t    RDDS58;             /* 0x6e4 */
    ERAY_RDDSm_t    RDDS59;             /* 0x6e8 */
    ERAY_RDDSm_t    RDDS60;             /* 0x6ec */
    ERAY_RDDSm_t    RDDS61;             /* 0x6f0 */
    ERAY_RDDSm_t    RDDS62;             /* 0x6f4 */
    ERAY_RDDSm_t    RDDS63;             /* 0x6f8 */
    ERAY_RDDSm_t    RDDS64;             /* 0x6fc */
    ERAY_RDHS1_t    RDHS1;              /* 0x700 */
    ERAY_RDHS2_t    RDHS2;              /* 0x704 */
    ERAY_RDHS3_t    RDHS3;              /* 0x708 */
    ERAY_MBS_t      MBS;                /* 0x70c */
    ERAY_OBCM_t     OBCM;               /* 0x710 */
    ERAY_OBCR_t     OBCR;               /* 0x714 */
    unsigned int    reserved272[0x3c];  /* 0x718 */
    ERAY_DEDCON_t   DEDCON;             /* 0x808 */
    ERAY_ECCR_t     ECCR;               /* 0x80c */
    ERAY_ECCW_t     ECCW;               /* 0x810 */
} ERAY_t;

#endif /* _TC1387_ERAY_STRUCTS_H_ */
