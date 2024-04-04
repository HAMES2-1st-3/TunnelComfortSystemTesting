/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTU_MASKS_H_
#define _HAVE_TRICORE_GPTU_MASKS_H_


/****************** Masks for GPTU_CLC_t **********************/
/*
   GPTU_CLC              "GPTU Clock Control Register"
*/
/**********************************************************/

#define GPTU_CLC_MASK                   0x0000ff3f
#define GPTU_CLC_DISR_MASK              0x00000001
#define GPTU_CLC_DISR_SHIFT             0
#define GPTU_CLC_DISS_MASK              0x00000002
#define GPTU_CLC_DISS_SHIFT             1
#define GPTU_CLC_SPEN_MASK              0x00000004
#define GPTU_CLC_SPEN_SHIFT             2
#define GPTU_CLC_EDIS_MASK              0x00000008
#define GPTU_CLC_EDIS_SHIFT             3
#define GPTU_CLC_SBWE_MASK              0x00000010
#define GPTU_CLC_SBWE_SHIFT             4
#define GPTU_CLC_FSOE_MASK              0x00000020
#define GPTU_CLC_FSOE_SHIFT             5
#define GPTU_CLC_RMC_MASK               0x0000ff00
#define GPTU_CLC_RMC_SHIFT              8



/****************** Masks for GPTU_ID_t **********************/
/*
   GPTU_ID               "GPTU Module Identification Register"
*/
/**********************************************************/

#define GPTU_ID_MASK                    0xffffffff
#define GPTU_ID_MOD_REV_MASK            0x000000ff
#define GPTU_ID_MOD_REV_SHIFT           0
#define GPTU_ID_MOD_TYPE_MASK           0x0000ff00
#define GPTU_ID_MOD_TYPE_SHIFT          8
#define GPTU_ID_MOD_NUMBER_MASK         0xffff0000
#define GPTU_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for GPTU_OSEL_t **********************/
/*
   GPTU_OSEL             "GPTU Output Source Selection Register"
*/
/**********************************************************/

#define GPTU_OSEL_MASK                  0x77777777
#define GPTU_OSEL_SO0_MASK              0x00000007
#define GPTU_OSEL_SO0_SHIFT             0
#define GPTU_OSEL_SO1_MASK              0x00000070
#define GPTU_OSEL_SO1_SHIFT             4
#define GPTU_OSEL_SO2_MASK              0x00000700
#define GPTU_OSEL_SO2_SHIFT             8
#define GPTU_OSEL_SO3_MASK              0x00007000
#define GPTU_OSEL_SO3_SHIFT             12
#define GPTU_OSEL_SO4_MASK              0x00070000
#define GPTU_OSEL_SO4_SHIFT             16
#define GPTU_OSEL_SO5_MASK              0x00700000
#define GPTU_OSEL_SO5_SHIFT             20
#define GPTU_OSEL_SO6_MASK              0x07000000
#define GPTU_OSEL_SO6_SHIFT             24
#define GPTU_OSEL_SO7_MASK              0x70000000
#define GPTU_OSEL_SO7_SHIFT             28



/****************** Masks for GPTU_OUT_t **********************/
/*
   GPTU_OUT              "GPTU Output Register"
*/
/**********************************************************/

#define GPTU_OUT_MASK                   0x00ffffff
#define GPTU_OUT_OUT0_MASK              0x00000001
#define GPTU_OUT_OUT0_SHIFT             0
#define GPTU_OUT_OUT1_MASK              0x00000002
#define GPTU_OUT_OUT1_SHIFT             1
#define GPTU_OUT_OUT2_MASK              0x00000004
#define GPTU_OUT_OUT2_SHIFT             2
#define GPTU_OUT_OUT3_MASK              0x00000008
#define GPTU_OUT_OUT3_SHIFT             3
#define GPTU_OUT_OUT4_MASK              0x00000010
#define GPTU_OUT_OUT4_SHIFT             4
#define GPTU_OUT_OUT5_MASK              0x00000020
#define GPTU_OUT_OUT5_SHIFT             5
#define GPTU_OUT_OUT6_MASK              0x00000040
#define GPTU_OUT_OUT6_SHIFT             6
#define GPTU_OUT_OUT7_MASK              0x00000080
#define GPTU_OUT_OUT7_SHIFT             7
#define GPTU_OUT_CLRO0_MASK             0x00000100
#define GPTU_OUT_CLRO0_SHIFT            8
#define GPTU_OUT_CLRO1_MASK             0x00000200
#define GPTU_OUT_CLRO1_SHIFT            9
#define GPTU_OUT_CLRO2_MASK             0x00000400
#define GPTU_OUT_CLRO2_SHIFT            10
#define GPTU_OUT_CLRO3_MASK             0x00000800
#define GPTU_OUT_CLRO3_SHIFT            11
#define GPTU_OUT_CLRO4_MASK             0x00001000
#define GPTU_OUT_CLRO4_SHIFT            12
#define GPTU_OUT_CLRO5_MASK             0x00002000
#define GPTU_OUT_CLRO5_SHIFT            13
#define GPTU_OUT_CLRO6_MASK             0x00004000
#define GPTU_OUT_CLRO6_SHIFT            14
#define GPTU_OUT_CLRO7_MASK             0x00008000
#define GPTU_OUT_CLRO7_SHIFT            15
#define GPTU_OUT_SETO0_MASK             0x00010000
#define GPTU_OUT_SETO0_SHIFT            16
#define GPTU_OUT_SETO1_MASK             0x00020000
#define GPTU_OUT_SETO1_SHIFT            17
#define GPTU_OUT_SETO2_MASK             0x00040000
#define GPTU_OUT_SETO2_SHIFT            18
#define GPTU_OUT_SETO3_MASK             0x00080000
#define GPTU_OUT_SETO3_SHIFT            19
#define GPTU_OUT_SETO4_MASK             0x00100000
#define GPTU_OUT_SETO4_SHIFT            20
#define GPTU_OUT_SETO5_MASK             0x00200000
#define GPTU_OUT_SETO5_SHIFT            21
#define GPTU_OUT_SETO6_MASK             0x00400000
#define GPTU_OUT_SETO6_SHIFT            22
#define GPTU_OUT_SETO7_MASK             0x00800000
#define GPTU_OUT_SETO7_SHIFT            23



/****************** Masks for GPTU_SRSEL_t **********************/
/*
   GPTU_SRSEL            "GPTU Service Request Source Select Register"
*/
/**********************************************************/

#define GPTU_SRSEL_MASK                 0xffffffff
#define GPTU_SRSEL_SSR7_MASK            0x0000000f
#define GPTU_SRSEL_SSR7_SHIFT           0
#define GPTU_SRSEL_SSR6_MASK            0x000000f0
#define GPTU_SRSEL_SSR6_SHIFT           4
#define GPTU_SRSEL_SSR5_MASK            0x00000f00
#define GPTU_SRSEL_SSR5_SHIFT           8
#define GPTU_SRSEL_SSR4_MASK            0x0000f000
#define GPTU_SRSEL_SSR4_SHIFT           12
#define GPTU_SRSEL_SSR3_MASK            0x000f0000
#define GPTU_SRSEL_SSR3_SHIFT           16
#define GPTU_SRSEL_SSR2_MASK            0x00f00000
#define GPTU_SRSEL_SSR2_SHIFT           20
#define GPTU_SRSEL_SSR1_MASK            0x0f000000
#define GPTU_SRSEL_SSR1_SHIFT           24
#define GPTU_SRSEL_SSR0_MASK            0xf0000000
#define GPTU_SRSEL_SSR0_SHIFT           28



/****************** Masks for GPTU_T012RUN_t **********************/
/*
   GPTU_T012RUN          "GPTU Timers T0, T1 and T2 Run Control Register"
*/
/**********************************************************/

#define GPTU_T012RUN_MASK               0x000077ff
#define GPTU_T012RUN_T0ARUN_MASK        0x00000001
#define GPTU_T012RUN_T0ARUN_SHIFT       0
#define GPTU_T012RUN_T0BRUN_MASK        0x00000002
#define GPTU_T012RUN_T0BRUN_SHIFT       1
#define GPTU_T012RUN_T0CRUN_MASK        0x00000004
#define GPTU_T012RUN_T0CRUN_SHIFT       2
#define GPTU_T012RUN_T0DRUN_MASK        0x00000008
#define GPTU_T012RUN_T0DRUN_SHIFT       3
#define GPTU_T012RUN_T1ARUN_MASK        0x00000010
#define GPTU_T012RUN_T1ARUN_SHIFT       4
#define GPTU_T012RUN_T1BRUN_MASK        0x00000020
#define GPTU_T012RUN_T1BRUN_SHIFT       5
#define GPTU_T012RUN_T1CRUN_MASK        0x00000040
#define GPTU_T012RUN_T1CRUN_SHIFT       6
#define GPTU_T012RUN_T1DRUN_MASK        0x00000080
#define GPTU_T012RUN_T1DRUN_SHIFT       7
#define GPTU_T012RUN_T2ARUN_MASK        0x00000100
#define GPTU_T012RUN_T2ARUN_SHIFT       8
#define GPTU_T012RUN_T2ASETR_MASK       0x00000200
#define GPTU_T012RUN_T2ASETR_SHIFT      9
#define GPTU_T012RUN_T2ACLRR_MASK       0x00000400
#define GPTU_T012RUN_T2ACLRR_SHIFT      10
#define GPTU_T012RUN_T2BRUN_MASK        0x00001000
#define GPTU_T012RUN_T2BRUN_SHIFT       12
#define GPTU_T012RUN_T2BSETR_MASK       0x00002000
#define GPTU_T012RUN_T2BSETR_SHIFT      13
#define GPTU_T012RUN_T2BCLRR_MASK       0x00004000
#define GPTU_T012RUN_T2BCLRR_SHIFT      14



/****************** Masks for GPTU_T01IRS_t **********************/
/*
   GPTU_T01IRS           "GPTU Timer T0 and T1 Input and Reload Source Selection Register"
*/
/**********************************************************/

#define GPTU_T01IRS_MASK                0xf3ffffff
#define GPTU_T01IRS_T0AINS_MASK         0x00000003
#define GPTU_T01IRS_T0AINS_SHIFT        0
#define GPTU_T01IRS_T0BINS_MASK         0x0000000c
#define GPTU_T01IRS_T0BINS_SHIFT        2
#define GPTU_T01IRS_T0CINS_MASK         0x00000030
#define GPTU_T01IRS_T0CINS_SHIFT        4
#define GPTU_T01IRS_T0DINS_MASK         0x000000c0
#define GPTU_T01IRS_T0DINS_SHIFT        6
#define GPTU_T01IRS_T1AINS_MASK         0x00000300
#define GPTU_T01IRS_T1AINS_SHIFT        8
#define GPTU_T01IRS_T1BINS_MASK         0x00000c00
#define GPTU_T01IRS_T1BINS_SHIFT        10
#define GPTU_T01IRS_T1CINS_MASK         0x00003000
#define GPTU_T01IRS_T1CINS_SHIFT        12
#define GPTU_T01IRS_T1DINS_MASK         0x0000c000
#define GPTU_T01IRS_T1DINS_SHIFT        14
#define GPTU_T01IRS_T0AREL_MASK         0x00010000
#define GPTU_T01IRS_T0AREL_SHIFT        16
#define GPTU_T01IRS_T0BREL_MASK         0x00020000
#define GPTU_T01IRS_T0BREL_SHIFT        17
#define GPTU_T01IRS_T0CREL_MASK         0x00040000
#define GPTU_T01IRS_T0CREL_SHIFT        18
#define GPTU_T01IRS_T0DREL_MASK         0x00080000
#define GPTU_T01IRS_T0DREL_SHIFT        19
#define GPTU_T01IRS_T1AREL_MASK         0x00100000
#define GPTU_T01IRS_T1AREL_SHIFT        20
#define GPTU_T01IRS_T1BREL_MASK         0x00200000
#define GPTU_T01IRS_T1BREL_SHIFT        21
#define GPTU_T01IRS_T1CREL_MASK         0x00400000
#define GPTU_T01IRS_T1CREL_SHIFT        22
#define GPTU_T01IRS_T1DREL_MASK         0x00800000
#define GPTU_T01IRS_T1DREL_SHIFT        23
#define GPTU_T01IRS_T0INC_MASK          0x01000000
#define GPTU_T01IRS_T0INC_SHIFT         24
#define GPTU_T01IRS_T1INC_MASK          0x02000000
#define GPTU_T01IRS_T1INC_SHIFT         25
#define GPTU_T01IRS_T01IN0_MASK         0x30000000
#define GPTU_T01IRS_T01IN0_SHIFT        28
#define GPTU_T01IRS_T01IN1_MASK         0xc0000000
#define GPTU_T01IRS_T01IN1_SHIFT        30



/****************** Masks for GPTU_T01OTS_t **********************/
/*
   GPTU_T01OTS           "GPTU  Timer T0 and T1 Output, Trigger and Service Request Register"
*/
/**********************************************************/

#define GPTU_T01OTS_MASK                0x0fff0fff
#define GPTU_T01OTS_SOUT00_MASK         0x00000003
#define GPTU_T01OTS_SOUT00_SHIFT        0
#define GPTU_T01OTS_SOUT01_MASK         0x0000000c
#define GPTU_T01OTS_SOUT01_SHIFT        2
#define GPTU_T01OTS_STRG00_MASK         0x00000030
#define GPTU_T01OTS_STRG00_SHIFT        4
#define GPTU_T01OTS_STRG01_MASK         0x000000c0
#define GPTU_T01OTS_STRG01_SHIFT        6
#define GPTU_T01OTS_SSR00_MASK          0x00000300
#define GPTU_T01OTS_SSR00_SHIFT         8
#define GPTU_T01OTS_SSR01_MASK          0x00000c00
#define GPTU_T01OTS_SSR01_SHIFT         10
#define GPTU_T01OTS_SOUT10_MASK         0x00030000
#define GPTU_T01OTS_SOUT10_SHIFT        16
#define GPTU_T01OTS_SOUT11_MASK         0x000c0000
#define GPTU_T01OTS_SOUT11_SHIFT        18
#define GPTU_T01OTS_STRG10_MASK         0x00300000
#define GPTU_T01OTS_STRG10_SHIFT        20
#define GPTU_T01OTS_STRG11_MASK         0x00c00000
#define GPTU_T01OTS_STRG11_SHIFT        22
#define GPTU_T01OTS_SSR10_MASK          0x03000000
#define GPTU_T01OTS_SSR10_SHIFT         24
#define GPTU_T01OTS_SSR11_MASK          0x0c000000
#define GPTU_T01OTS_SSR11_SHIFT         26



/****************** Masks for GPTU_T0CBA_t **********************/
/*
   GPTU_T0CBA            "GPTU Timer T0 Count Register (T0C, T0B, T0A)"
*/
/**********************************************************/

#define GPTU_T0CBA_MASK                 0x00ffffff
#define GPTU_T0CBA_T0A_MASK             0x000000ff
#define GPTU_T0CBA_T0A_SHIFT            0
#define GPTU_T0CBA_T0B_MASK             0x0000ff00
#define GPTU_T0CBA_T0B_SHIFT            8
#define GPTU_T0CBA_T0C_MASK             0x00ff0000
#define GPTU_T0CBA_T0C_SHIFT            16



/****************** Masks for GPTU_T0DCBA_t **********************/
/*
   GPTU_T0DCBA           "GPTU Timer T0 Count Register (T0D, T0C, T0B,T0A)"
*/
/**********************************************************/

#define GPTU_T0DCBA_MASK                0xffffffff
#define GPTU_T0DCBA_T0A_MASK            0x000000ff
#define GPTU_T0DCBA_T0A_SHIFT           0
#define GPTU_T0DCBA_T0B_MASK            0x0000ff00
#define GPTU_T0DCBA_T0B_SHIFT           8
#define GPTU_T0DCBA_T0C_MASK            0x00ff0000
#define GPTU_T0DCBA_T0C_SHIFT           16
#define GPTU_T0DCBA_T0D_MASK            0xff000000
#define GPTU_T0DCBA_T0D_SHIFT           24



/****************** Masks for GPTU_T0RCBA_t **********************/
/*
   GPTU_T0RCBA           "GPTU Timer T0 Reload Register (T0RC, T0RB, T0RA)"
*/
/**********************************************************/

#define GPTU_T0RCBA_MASK                0x00ffffff
#define GPTU_T0RCBA_T0RA_MASK           0x000000ff
#define GPTU_T0RCBA_T0RA_SHIFT          0
#define GPTU_T0RCBA_T0RB_MASK           0x0000ff00
#define GPTU_T0RCBA_T0RB_SHIFT          8
#define GPTU_T0RCBA_T0RC_MASK           0x00ff0000
#define GPTU_T0RCBA_T0RC_SHIFT          16



/****************** Masks for GPTU_T0RDCBA_t **********************/
/*
   GPTU_T0RDCBA          "GPTU Timer T0 Reload Register (T0RD, T0RC, T0RB,T0RA)"
*/
/**********************************************************/

#define GPTU_T0RDCBA_MASK               0xffffffff
#define GPTU_T0RDCBA_T0RA_MASK          0x000000ff
#define GPTU_T0RDCBA_T0RA_SHIFT         0
#define GPTU_T0RDCBA_T0RB_MASK          0x0000ff00
#define GPTU_T0RDCBA_T0RB_SHIFT         8
#define GPTU_T0RDCBA_T0RC_MASK          0x00ff0000
#define GPTU_T0RDCBA_T0RC_SHIFT         16
#define GPTU_T0RDCBA_T0RD_MASK          0xff000000
#define GPTU_T0RDCBA_T0RD_SHIFT         24



/****************** Masks for GPTU_T1CBA_t **********************/
/*
   GPTU_T1CBA            "GPTU Timer T1 Count Register (T1C, T1B, T1A)"
*/
/**********************************************************/

#define GPTU_T1CBA_MASK                 0x00ffffff
#define GPTU_T1CBA_T1A_MASK             0x000000ff
#define GPTU_T1CBA_T1A_SHIFT            0
#define GPTU_T1CBA_T1B_MASK             0x0000ff00
#define GPTU_T1CBA_T1B_SHIFT            8
#define GPTU_T1CBA_T1C_MASK             0x00ff0000
#define GPTU_T1CBA_T1C_SHIFT            16



/****************** Masks for GPTU_T1DCBA_t **********************/
/*
   GPTU_T1DCBA           "GPTU Timer T1 Count Register (T1D, T1C, T1B,T1A)"
*/
/**********************************************************/

#define GPTU_T1DCBA_MASK                0xffffffff
#define GPTU_T1DCBA_T1A_MASK            0x000000ff
#define GPTU_T1DCBA_T1A_SHIFT           0
#define GPTU_T1DCBA_T1B_MASK            0x0000ff00
#define GPTU_T1DCBA_T1B_SHIFT           8
#define GPTU_T1DCBA_T1C_MASK            0x00ff0000
#define GPTU_T1DCBA_T1C_SHIFT           16
#define GPTU_T1DCBA_T1D_MASK            0xff000000
#define GPTU_T1DCBA_T1D_SHIFT           24



/****************** Masks for GPTU_T1RCBA_t **********************/
/*
   GPTU_T1RCBA           "GPTU Timer T1 Reload Register (T1RC, T1RB, T1RA)"
*/
/**********************************************************/

#define GPTU_T1RCBA_MASK                0x00ffffff
#define GPTU_T1RCBA_T1RA_MASK           0x000000ff
#define GPTU_T1RCBA_T1RA_SHIFT          0
#define GPTU_T1RCBA_T1RB_MASK           0x0000ff00
#define GPTU_T1RCBA_T1RB_SHIFT          8
#define GPTU_T1RCBA_T1RC_MASK           0x00ff0000
#define GPTU_T1RCBA_T1RC_SHIFT          16



/****************** Masks for GPTU_T1RDCBA_t **********************/
/*
   GPTU_T1RDCBA          "GPTU Timer T1 Reload Register (T1RD, T1RC, T1RB,T1RA)"
*/
/**********************************************************/

#define GPTU_T1RDCBA_MASK               0xffffffff
#define GPTU_T1RDCBA_T1RA_MASK          0x000000ff
#define GPTU_T1RDCBA_T1RA_SHIFT         0
#define GPTU_T1RDCBA_T1RB_MASK          0x0000ff00
#define GPTU_T1RDCBA_T1RB_SHIFT         8
#define GPTU_T1RDCBA_T1RC_MASK          0x00ff0000
#define GPTU_T1RDCBA_T1RC_SHIFT         16
#define GPTU_T1RDCBA_T1RD_MASK          0xff000000
#define GPTU_T1RDCBA_T1RD_SHIFT         24



/****************** Masks for GPTU_T2_t **********************/
/*
   GPTU_T2               "GPTU Timer T2 Count Register"
*/
/**********************************************************/

#define GPTU_T2_MASK                    0xffffffff
#define GPTU_T2_T2A_MASK                0x0000ffff
#define GPTU_T2_T2A_SHIFT               0
#define GPTU_T2_T2B_MASK                0xffff0000
#define GPTU_T2_T2B_SHIFT               16



/****************** Masks for GPTU_T2AIS_t **********************/
/*
   GPTU_T2AIS            "GPTU Timer T2/T2A External Input Selection Register"
*/
/**********************************************************/

#define GPTU_T2AIS_MASK                 0x07777777
#define GPTU_T2AIS_T2AICNT_MASK         0x00000007
#define GPTU_T2AIS_T2AICNT_SHIFT        0
#define GPTU_T2AIS_T2AISTR_MASK         0x00000070
#define GPTU_T2AIS_T2AISTR_SHIFT        4
#define GPTU_T2AIS_T2AISTP_MASK         0x00000700
#define GPTU_T2AIS_T2AISTP_SHIFT        8
#define GPTU_T2AIS_T2AIUD_MASK          0x00007000
#define GPTU_T2AIS_T2AIUD_SHIFT         12
#define GPTU_T2AIS_T2AICLR_MASK         0x00070000
#define GPTU_T2AIS_T2AICLR_SHIFT        16
#define GPTU_T2AIS_T2AIRC0_MASK         0x00700000
#define GPTU_T2AIS_T2AIRC0_SHIFT        20
#define GPTU_T2AIS_T2AIRC1_MASK         0x07000000
#define GPTU_T2AIS_T2AIRC1_SHIFT        24



/****************** Masks for GPTU_T2BIS_t **********************/
/*
   GPTU_T2BIS            "GPTU Timer T2B External Input Selection Register"
*/
/**********************************************************/

#define GPTU_T2BIS_MASK                 0x07777777
#define GPTU_T2BIS_T2BICNT_MASK         0x00000007
#define GPTU_T2BIS_T2BICNT_SHIFT        0
#define GPTU_T2BIS_T2BISTR_MASK         0x00000070
#define GPTU_T2BIS_T2BISTR_SHIFT        4
#define GPTU_T2BIS_T2BISTP_MASK         0x00000700
#define GPTU_T2BIS_T2BISTP_SHIFT        8
#define GPTU_T2BIS_T2BIUD_MASK          0x00007000
#define GPTU_T2BIS_T2BIUD_SHIFT         12
#define GPTU_T2BIS_T2BICLR_MASK         0x00070000
#define GPTU_T2BIS_T2BICLR_SHIFT        16
#define GPTU_T2BIS_T2BIRC0_MASK         0x00700000
#define GPTU_T2BIS_T2BIRC0_SHIFT        20
#define GPTU_T2BIS_T2BIRC1_MASK         0x07000000
#define GPTU_T2BIS_T2BIRC1_SHIFT        24



/****************** Masks for GPTU_T2CON_t **********************/
/*
   GPTU_T2CON            "GPTU Timer T2 Control Register"
*/
/**********************************************************/

#define GPTU_T2CON_MASK                 0x11ff91ff
#define GPTU_T2CON_T2ACSRC_MASK         0x00000003
#define GPTU_T2CON_T2ACSRC_SHIFT        0
#define GPTU_T2CON_T2ACDIR_MASK         0x0000000c
#define GPTU_T2CON_T2ACDIR_SHIFT        2
#define GPTU_T2CON_T2ACCLR_MASK         0x00000030
#define GPTU_T2CON_T2ACCLR_SHIFT        4
#define GPTU_T2CON_T2ACOV_MASK          0x000000c0
#define GPTU_T2CON_T2ACOV_SHIFT         6
#define GPTU_T2CON_T2ACOS_MASK          0x00000100
#define GPTU_T2CON_T2ACOS_SHIFT         8
#define GPTU_T2CON_T2ADIR_MASK          0x00001000
#define GPTU_T2CON_T2ADIR_SHIFT         12
#define GPTU_T2CON_T2SPLIT_MASK         0x00008000
#define GPTU_T2CON_T2SPLIT_SHIFT        15
#define GPTU_T2CON_T2BCSRC_MASK         0x00030000
#define GPTU_T2CON_T2BCSRC_SHIFT        16
#define GPTU_T2CON_T2BCDIR_MASK         0x000c0000
#define GPTU_T2CON_T2BCDIR_SHIFT        18
#define GPTU_T2CON_T2BCCLR_MASK         0x00300000
#define GPTU_T2CON_T2BCCLR_SHIFT        20
#define GPTU_T2CON_T2BCOV_MASK          0x00c00000
#define GPTU_T2CON_T2BCOV_SHIFT         22
#define GPTU_T2CON_T2BCOS_MASK          0x01000000
#define GPTU_T2CON_T2BCOS_SHIFT         24
#define GPTU_T2CON_T2BDIR_MASK          0x10000000
#define GPTU_T2CON_T2BDIR_SHIFT         28



/****************** Masks for GPTU_T2ES_t **********************/
/*
   GPTU_T2ES             "GPTU Timer T2 External Input Edge Selection Register"
*/
/**********************************************************/

#define GPTU_T2ES_MASK                  0x3fff3fff
#define GPTU_T2ES_T2AECNT_MASK          0x00000003
#define GPTU_T2ES_T2AECNT_SHIFT         0
#define GPTU_T2ES_T2AESTR_MASK          0x0000000c
#define GPTU_T2ES_T2AESTR_SHIFT         2
#define GPTU_T2ES_T2AESTP_MASK          0x00000030
#define GPTU_T2ES_T2AESTP_SHIFT         4
#define GPTU_T2ES_T2AEUD_MASK           0x000000c0
#define GPTU_T2ES_T2AEUD_SHIFT          6
#define GPTU_T2ES_T2AECLR_MASK          0x00000300
#define GPTU_T2ES_T2AECLR_SHIFT         8
#define GPTU_T2ES_T2AERC0_MASK          0x00000c00
#define GPTU_T2ES_T2AERC0_SHIFT         10
#define GPTU_T2ES_T2AERC1_MASK          0x00003000
#define GPTU_T2ES_T2AERC1_SHIFT         12
#define GPTU_T2ES_T2BECNT_MASK          0x00030000
#define GPTU_T2ES_T2BECNT_SHIFT         16
#define GPTU_T2ES_T2BESTR_MASK          0x000c0000
#define GPTU_T2ES_T2BESTR_SHIFT         18
#define GPTU_T2ES_T2BESTP_MASK          0x00300000
#define GPTU_T2ES_T2BESTP_SHIFT         20
#define GPTU_T2ES_T2BEUD_MASK           0x00c00000
#define GPTU_T2ES_T2BEUD_SHIFT          22
#define GPTU_T2ES_T2BECLR_MASK          0x03000000
#define GPTU_T2ES_T2BECLR_SHIFT         24
#define GPTU_T2ES_T2BERC0_MASK          0x0c000000
#define GPTU_T2ES_T2BERC0_SHIFT         26
#define GPTU_T2ES_T2BERC1_MASK          0x30000000
#define GPTU_T2ES_T2BERC1_SHIFT         28



/****************** Masks for GPTU_T2RC0_t **********************/
/*
   GPTU_T2RC0            "GPTU Timer T2 Reload/Capture Register 0"
*/
/**********************************************************/

#define GPTU_T2RC0_MASK                 0xffffffff
#define GPTU_T2RC0_T2ARC0_MASK          0x0000ffff
#define GPTU_T2RC0_T2ARC0_SHIFT         0
#define GPTU_T2RC0_T2BRC0_MASK          0xffff0000
#define GPTU_T2RC0_T2BRC0_SHIFT         16



/****************** Masks for GPTU_T2RC1_t **********************/
/*
   GPTU_T2RC1            "GPTU Timer T2 Reload/Capture Register 1"
*/
/**********************************************************/

#define GPTU_T2RC1_MASK                 0xffffffff
#define GPTU_T2RC1_T2ARC1_MASK          0x0000ffff
#define GPTU_T2RC1_T2ARC1_SHIFT         0
#define GPTU_T2RC1_T2BRC1_MASK          0xffff0000
#define GPTU_T2RC1_T2BRC1_SHIFT         16



/****************** Masks for GPTU_T2RCCON_t **********************/
/*
   GPTU_T2RCCON          "GPTU Timer T2 Reload/Capture Control Register"
*/
/**********************************************************/

#define GPTU_T2RCCON_MASK               0x00770077
#define GPTU_T2RCCON_T2AMRC0_MASK       0x00000007
#define GPTU_T2RCCON_T2AMRC0_SHIFT      0
#define GPTU_T2RCCON_T2AMRC1_MASK       0x00000070
#define GPTU_T2RCCON_T2AMRC1_SHIFT      4
#define GPTU_T2RCCON_T2BMRC0_MASK       0x00070000
#define GPTU_T2RCCON_T2BMRC0_SHIFT      16
#define GPTU_T2RCCON_T2BMRC1_MASK       0x00700000
#define GPTU_T2RCCON_T2BMRC1_SHIFT      20




#endif /* _HAVE_TRICORE_GPTU_MASKS_H_ */

