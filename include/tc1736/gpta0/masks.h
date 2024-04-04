/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTA0_MASKS_H_
#define _HAVE_TRICORE_GPTA0_MASKS_H_


/****************** Masks for GPTA0_CKBCTR_t **********************/
/*
   GPTA0_CKBCTR          "GPTA0 Clock Bus Control Register"
*/
/**********************************************************/

#define GPTA0_CKBCTR_MASK               0x001fffff
#define GPTA0_CKBCTR_DFA02_MASK         0x0000000f
#define GPTA0_CKBCTR_DFA02_SHIFT        0
#define GPTA0_CKBCTR_DFA04_MASK         0x000000f0
#define GPTA0_CKBCTR_DFA04_SHIFT        4
#define GPTA0_CKBCTR_DFA06_MASK         0x00000f00
#define GPTA0_CKBCTR_DFA06_SHIFT        8
#define GPTA0_CKBCTR_DFA07_MASK         0x0000f000
#define GPTA0_CKBCTR_DFA07_SHIFT        12
#define GPTA0_CKBCTR_DFA03_MASK         0x00030000
#define GPTA0_CKBCTR_DFA03_SHIFT        16
#define GPTA0_CKBCTR_DFALTC_MASK        0x001c0000
#define GPTA0_CKBCTR_DFALTC_SHIFT       18



/****************** Masks for GPTA0_CLC_t **********************/
/*
   GPTA0_CLC             "GPTA Clock Control Register"
*/
/**********************************************************/

#define GPTA0_CLC_MASK                  0x0000003f
#define GPTA0_CLC_DISR_MASK             0x00000001
#define GPTA0_CLC_DISR_SHIFT            0
#define GPTA0_CLC_DISS_MASK             0x00000002
#define GPTA0_CLC_DISS_SHIFT            1
#define GPTA0_CLC_SPEN_MASK             0x00000004
#define GPTA0_CLC_SPEN_SHIFT            2
#define GPTA0_CLC_EDIS_MASK             0x00000008
#define GPTA0_CLC_EDIS_SHIFT            3
#define GPTA0_CLC_SBWE_MASK             0x00000010
#define GPTA0_CLC_SBWE_SHIFT            4
#define GPTA0_CLC_FSOE_MASK             0x00000020
#define GPTA0_CLC_FSOE_SHIFT            5



/****************** Masks for GPTA0_DBGCTR_t **********************/
/*
   GPTA0_DBGCTR          "GPTA Debug Clock Control Register"
*/
/**********************************************************/

#define GPTA0_DBGCTR_MASK               0x8000ffff
#define GPTA0_DBGCTR_CLKCNT_MASK        0x0000ffff
#define GPTA0_DBGCTR_CLKCNT_SHIFT       0
#define GPTA0_DBGCTR_DBGCEN_MASK        0x80000000
#define GPTA0_DBGCTR_DBGCEN_SHIFT       31



/****************** Masks for GPTA0_EDCTR_t **********************/
/*
   GPTA0_EDCTR           "GPTA Clock Enable/Disable Control Register"
*/
/**********************************************************/

#define GPTA0_EDCTR_MASK                0x00000103
#define GPTA0_EDCTR_GT00RUN_MASK        0x00000001
#define GPTA0_EDCTR_GT00RUN_SHIFT       0
#define GPTA0_EDCTR_GT01RUN_MASK        0x00000002
#define GPTA0_EDCTR_GT01RUN_SHIFT       1
#define GPTA0_EDCTR_G0EN_MASK           0x00000100
#define GPTA0_EDCTR_G0EN_SHIFT          8



/****************** Masks for GPTA0_FDR_t **********************/
/*
   GPTA0_FDR             "GPTA Fractional Divider Register"
*/
/**********************************************************/

#define GPTA0_FDR_MASK                  0xf3fffbff
#define GPTA0_FDR_STEP_MASK             0x000003ff
#define GPTA0_FDR_STEP_SHIFT            0
#define GPTA0_FDR_SM_MASK               0x00000800
#define GPTA0_FDR_SM_SHIFT              11
#define GPTA0_FDR_SC_MASK               0x00003000
#define GPTA0_FDR_SC_SHIFT              12
#define GPTA0_FDR_DM_MASK               0x0000c000
#define GPTA0_FDR_DM_SHIFT              14
#define GPTA0_FDR_RESULT_MASK           0x03ff0000
#define GPTA0_FDR_RESULT_SHIFT          16
#define GPTA0_FDR_SUSACK_MASK           0x10000000
#define GPTA0_FDR_SUSACK_SHIFT          28
#define GPTA0_FDR_SUSREQ_MASK           0x20000000
#define GPTA0_FDR_SUSREQ_SHIFT          29
#define GPTA0_FDR_ENHW_MASK             0x40000000
#define GPTA0_FDR_ENHW_SHIFT            30
#define GPTA0_FDR_DISCLK_MASK           0x80000000
#define GPTA0_FDR_DISCLK_SHIFT          31



/****************** Masks for GPTA0_FPCSTAT_t **********************/
/*
   GPTA0_FPCSTAT         "GPTA0 Filter and Prescaler Cell Status Register"
*/
/**********************************************************/

#define GPTA0_FPCSTAT_MASK              0x00003f3f
#define GPTA0_FPCSTAT_REG0_MASK         0x00000001
#define GPTA0_FPCSTAT_REG0_SHIFT        0
#define GPTA0_FPCSTAT_REG1_MASK         0x00000002
#define GPTA0_FPCSTAT_REG1_SHIFT        1
#define GPTA0_FPCSTAT_REG2_MASK         0x00000004
#define GPTA0_FPCSTAT_REG2_SHIFT        2
#define GPTA0_FPCSTAT_REG3_MASK         0x00000008
#define GPTA0_FPCSTAT_REG3_SHIFT        3
#define GPTA0_FPCSTAT_REG4_MASK         0x00000010
#define GPTA0_FPCSTAT_REG4_SHIFT        4
#define GPTA0_FPCSTAT_REG5_MASK         0x00000020
#define GPTA0_FPCSTAT_REG5_SHIFT        5
#define GPTA0_FPCSTAT_FEG0_MASK         0x00000100
#define GPTA0_FPCSTAT_FEG0_SHIFT        8
#define GPTA0_FPCSTAT_FEG1_MASK         0x00000200
#define GPTA0_FPCSTAT_FEG1_SHIFT        9
#define GPTA0_FPCSTAT_FEG2_MASK         0x00000400
#define GPTA0_FPCSTAT_FEG2_SHIFT        10
#define GPTA0_FPCSTAT_FEG3_MASK         0x00000800
#define GPTA0_FPCSTAT_FEG3_SHIFT        11
#define GPTA0_FPCSTAT_FEG4_MASK         0x00001000
#define GPTA0_FPCSTAT_FEG4_SHIFT        12
#define GPTA0_FPCSTAT_FEG5_MASK         0x00002000
#define GPTA0_FPCSTAT_FEG5_SHIFT        13



/****************** Masks for GPTA0_ID_t **********************/
/*
   GPTA0_ID              "GPTA0 Identification Register"
*/
/**********************************************************/

#define GPTA0_ID_MASK                   0xffffffff
#define GPTA0_ID_MOD_REV_MASK           0x000000ff
#define GPTA0_ID_MOD_REV_SHIFT          0
#define GPTA0_ID_MOD_TYPE_MASK          0x0000ff00
#define GPTA0_ID_MOD_TYPE_SHIFT         8
#define GPTA0_ID_MOD_NUM_MASK           0xffff0000
#define GPTA0_ID_MOD_NUM_SHIFT          16



/****************** Masks for GPTA0_LTCCTR63_t **********************/
/*
   GPTA0_LTCCTR63        "GPTA0 Local Timer Cell Control Register 63"
*/
/**********************************************************/

#define GPTA0_LTCCTR63_MASK             0x0000853f
#define GPTA0_LTCCTR63_BRM_MASK         0x00000001
#define GPTA0_LTCCTR63_BRM_SHIFT        0
#define GPTA0_LTCCTR63_OSM_MASK         0x00000002
#define GPTA0_LTCCTR63_OSM_SHIFT        1
#define GPTA0_LTCCTR63_REN_MASK         0x0000000c
#define GPTA0_LTCCTR63_REN_SHIFT        2
#define GPTA0_LTCCTR63_RED_MASK         0x00000010
#define GPTA0_LTCCTR63_RED_SHIFT        4
#define GPTA0_LTCCTR63_FED_MASK         0x00000020
#define GPTA0_LTCCTR63_FED_SHIFT        5
#define GPTA0_LTCCTR63_ILM_MASK         0x00000100
#define GPTA0_LTCCTR63_ILM_SHIFT        8
#define GPTA0_LTCCTR63_CEN_MASK         0x00000400
#define GPTA0_LTCCTR63_CEN_SHIFT        10
#define GPTA0_LTCCTR63_OUT_MASK         0x00008000
#define GPTA0_LTCCTR63_OUT_SHIFT        15



/****************** Masks for GPTA0_LTCXR63_t **********************/
/*
   GPTA0_LTCXR63         "GPTA0 Local Timer Cell X Register 63"
*/
/**********************************************************/

#define GPTA0_LTCXR63_MASK              0xffffffff
#define GPTA0_LTCXR63_X_MASK            0x0000ffff
#define GPTA0_LTCXR63_X_SHIFT           0
#define GPTA0_LTCXR63_XS_MASK           0xffff0000
#define GPTA0_LTCXR63_XS_SHIFT          16



/****************** Masks for GPTA0_MRACTL_t **********************/
/*
   GPTA0_MRACTL          "GPTA0 Multiplexer Register Array Control Register"
*/
/**********************************************************/

#define GPTA0_MRACTL_MASK               0x00003f07
#define GPTA0_MRACTL_MAEN_MASK          0x00000001
#define GPTA0_MRACTL_MAEN_SHIFT         0
#define GPTA0_MRACTL_WCRES_MASK         0x00000002
#define GPTA0_MRACTL_WCRES_SHIFT        1
#define GPTA0_MRACTL_FIFOFULL_MASK      0x00000004
#define GPTA0_MRACTL_FIFOFULL_SHIFT     2
#define GPTA0_MRACTL_FIFOFILLCNT_MASK   0x00003f00
#define GPTA0_MRACTL_FIFOFILLCNT_SHIFT  8



/****************** Masks for GPTA0_MRADIN_t **********************/
/*
   GPTA0_MRADIN          "GPTA0 Multiplexer Register Array Data In Register"
*/
/**********************************************************/

#define GPTA0_MRADIN_MASK               0xffffffff
#define GPTA0_MRADIN_DATAIN_MASK        0xffffffff
#define GPTA0_MRADIN_DATAIN_SHIFT       0



/****************** Masks for GPTA0_MRADOUT_t **********************/
/*
   GPTA0_MRADOUT         "GPTA0 Multiplexer Register Array Data Out Register"
*/
/**********************************************************/

#define GPTA0_MRADOUT_MASK              0xffffffff
#define GPTA0_MRADOUT_DATAOUT_MASK      0xffffffff
#define GPTA0_MRADOUT_DATAOUT_SHIFT     0



/****************** Masks for GPTA0_PDLCTR_t **********************/
/*
   GPTA0_PDLCTR          "GPTA0 Phase Discrimination Logic Control Register"
*/
/**********************************************************/

#define GPTA0_PDLCTR_MASK               0x00000077
#define GPTA0_PDLCTR_MUX0_MASK          0x00000001
#define GPTA0_PDLCTR_MUX0_SHIFT         0
#define GPTA0_PDLCTR_TSE0_MASK          0x00000002
#define GPTA0_PDLCTR_TSE0_SHIFT         1
#define GPTA0_PDLCTR_ERR0_MASK          0x00000004
#define GPTA0_PDLCTR_ERR0_SHIFT         2
#define GPTA0_PDLCTR_MUX1_MASK          0x00000010
#define GPTA0_PDLCTR_MUX1_SHIFT         4
#define GPTA0_PDLCTR_TSE1_MASK          0x00000020
#define GPTA0_PDLCTR_TSE1_SHIFT         5
#define GPTA0_PDLCTR_ERR1_MASK          0x00000040
#define GPTA0_PDLCTR_ERR1_SHIFT         6



/****************** Masks for GPTA0_PLLCNT_t **********************/
/*
   GPTA0_PLLCNT          "GPTA0 Phase Locked Loop Counter Register"
*/
/**********************************************************/

#define GPTA0_PLLCNT_MASK               0x0000ffff
#define GPTA0_PLLCNT_CNT_MASK           0x0000ffff
#define GPTA0_PLLCNT_CNT_SHIFT          0



/****************** Masks for GPTA0_PLLCTR_t **********************/
/*
   GPTA0_PLLCTR          "GPTA0 Phase Locked Loop Control Register"
*/
/**********************************************************/

#define GPTA0_PLLCTR_MASK               0x0000001f
#define GPTA0_PLLCTR_MUX_MASK           0x00000003
#define GPTA0_PLLCTR_MUX_SHIFT          0
#define GPTA0_PLLCTR_AEN_MASK           0x00000004
#define GPTA0_PLLCTR_AEN_SHIFT          2
#define GPTA0_PLLCTR_PEN_MASK           0x00000008
#define GPTA0_PLLCTR_PEN_SHIFT          3
#define GPTA0_PLLCTR_REN_MASK           0x00000010
#define GPTA0_PLLCTR_REN_SHIFT          4



/****************** Masks for GPTA0_PLLDTR_t **********************/
/*
   GPTA0_PLLDTR          "GPTA0 Phase Locked Loop Delta Register"
*/
/**********************************************************/

#define GPTA0_PLLDTR_MASK               0x01ffffff
#define GPTA0_PLLDTR_DTR_MASK           0x01ffffff
#define GPTA0_PLLDTR_DTR_SHIFT          0



/****************** Masks for GPTA0_PLLMTI_t **********************/
/*
   GPTA0_PLLMTI          "GPTA0 Phase Locked Loop Microtick Register"
*/
/**********************************************************/

#define GPTA0_PLLMTI_MASK               0x0000ffff
#define GPTA0_PLLMTI_MTI_MASK           0x0000ffff
#define GPTA0_PLLMTI_MTI_SHIFT          0



/****************** Masks for GPTA0_PLLREV_t **********************/
/*
   GPTA0_PLLREV          "GPTA0 Phase Locked Loop Reload Register"
*/
/**********************************************************/

#define GPTA0_PLLREV_MASK               0x00ffffff
#define GPTA0_PLLREV_REV_MASK           0x00ffffff
#define GPTA0_PLLREV_REV_SHIFT          0



/****************** Masks for GPTA0_PLLSTP_t **********************/
/*
   GPTA0_PLLSTP          "GPTA0 Phase Locked Loop Step Register"
*/
/**********************************************************/

#define GPTA0_PLLSTP_MASK               0x0000ffff
#define GPTA0_PLLSTP_STP_MASK           0x0000ffff
#define GPTA0_PLLSTP_STP_SHIFT          0



/****************** Masks for GPTA0_SRNR_t **********************/
/*
   GPTA0_SRNR            "GPTA0 Service Request Node Redirection Register"
*/
/**********************************************************/

#define GPTA0_SRNR_MASK                 0x0000ffff
#define GPTA0_SRNR_GTC01R_MASK          0x00000001
#define GPTA0_SRNR_GTC01R_SHIFT         0
#define GPTA0_SRNR_GTC03R_MASK          0x00000002
#define GPTA0_SRNR_GTC03R_SHIFT         1
#define GPTA0_SRNR_GTC05R_MASK          0x00000004
#define GPTA0_SRNR_GTC05R_SHIFT         2
#define GPTA0_SRNR_GTC07R_MASK          0x00000008
#define GPTA0_SRNR_GTC07R_SHIFT         3
#define GPTA0_SRNR_GTC09R_MASK          0x00000010
#define GPTA0_SRNR_GTC09R_SHIFT         4
#define GPTA0_SRNR_GTC11R_MASK          0x00000020
#define GPTA0_SRNR_GTC11R_SHIFT         5
#define GPTA0_SRNR_GTC13R_MASK          0x00000040
#define GPTA0_SRNR_GTC13R_SHIFT         6
#define GPTA0_SRNR_GTC15R_MASK          0x00000080
#define GPTA0_SRNR_GTC15R_SHIFT         7
#define GPTA0_SRNR_GTC17R_MASK          0x00000100
#define GPTA0_SRNR_GTC17R_SHIFT         8
#define GPTA0_SRNR_GTC19R_MASK          0x00000200
#define GPTA0_SRNR_GTC19R_SHIFT         9
#define GPTA0_SRNR_GTC21R_MASK          0x00000400
#define GPTA0_SRNR_GTC21R_SHIFT         10
#define GPTA0_SRNR_GTC23R_MASK          0x00000800
#define GPTA0_SRNR_GTC23R_SHIFT         11
#define GPTA0_SRNR_GTC25R_MASK          0x00001000
#define GPTA0_SRNR_GTC25R_SHIFT         12
#define GPTA0_SRNR_GTC27R_MASK          0x00002000
#define GPTA0_SRNR_GTC27R_SHIFT         13
#define GPTA0_SRNR_GTC29R_MASK          0x00004000
#define GPTA0_SRNR_GTC29R_SHIFT         14
#define GPTA0_SRNR_GTC31R_MASK          0x00008000
#define GPTA0_SRNR_GTC31R_SHIFT         15



/****************** Masks for GPTA0_SRSC0_t **********************/
/*
   GPTA0_SRSC0           "GPTA0 Service Request State Clear Register 0"
*/
/**********************************************************/

#define GPTA0_SRSC0_MASK                0x00007fff
#define GPTA0_SRSC0_DCM00R_MASK         0x00000001
#define GPTA0_SRSC0_DCM00R_SHIFT        0
#define GPTA0_SRSC0_DCM00F_MASK         0x00000002
#define GPTA0_SRSC0_DCM00F_SHIFT        1
#define GPTA0_SRSC0_DCM00C_MASK         0x00000004
#define GPTA0_SRSC0_DCM00C_SHIFT        2
#define GPTA0_SRSC0_DCM01R_MASK         0x00000008
#define GPTA0_SRSC0_DCM01R_SHIFT        3
#define GPTA0_SRSC0_DCM01F_MASK         0x00000010
#define GPTA0_SRSC0_DCM01F_SHIFT        4
#define GPTA0_SRSC0_DCM01C_MASK         0x00000020
#define GPTA0_SRSC0_DCM01C_SHIFT        5
#define GPTA0_SRSC0_DCM02R_MASK         0x00000040
#define GPTA0_SRSC0_DCM02R_SHIFT        6
#define GPTA0_SRSC0_DCM02F_MASK         0x00000080
#define GPTA0_SRSC0_DCM02F_SHIFT        7
#define GPTA0_SRSC0_DCM02C_MASK         0x00000100
#define GPTA0_SRSC0_DCM02C_SHIFT        8
#define GPTA0_SRSC0_DCM03R_MASK         0x00000200
#define GPTA0_SRSC0_DCM03R_SHIFT        9
#define GPTA0_SRSC0_DCM03F_MASK         0x00000400
#define GPTA0_SRSC0_DCM03F_SHIFT        10
#define GPTA0_SRSC0_DCM03C_MASK         0x00000800
#define GPTA0_SRSC0_DCM03C_SHIFT        11
#define GPTA0_SRSC0_PLL_MASK            0x00001000
#define GPTA0_SRSC0_PLL_SHIFT           12
#define GPTA0_SRSC0_GT00_MASK           0x00002000
#define GPTA0_SRSC0_GT00_SHIFT          13
#define GPTA0_SRSC0_GT01_MASK           0x00004000
#define GPTA0_SRSC0_GT01_SHIFT          14



/****************** Masks for GPTA0_SRSC1_t **********************/
/*
   GPTA0_SRSC1           "GPTA0 Service Request State Clear Register 1"
*/
/**********************************************************/

#define GPTA0_SRSC1_MASK                0xffffffff
#define GPTA0_SRSC1_GTC0_MASK           0x00000001
#define GPTA0_SRSC1_GTC0_SHIFT          0
#define GPTA0_SRSC1_GTC1_MASK           0x00000002
#define GPTA0_SRSC1_GTC1_SHIFT          1
#define GPTA0_SRSC1_GTC2_MASK           0x00000004
#define GPTA0_SRSC1_GTC2_SHIFT          2
#define GPTA0_SRSC1_GTC3_MASK           0x00000008
#define GPTA0_SRSC1_GTC3_SHIFT          3
#define GPTA0_SRSC1_GTC4_MASK           0x00000010
#define GPTA0_SRSC1_GTC4_SHIFT          4
#define GPTA0_SRSC1_GTC5_MASK           0x00000020
#define GPTA0_SRSC1_GTC5_SHIFT          5
#define GPTA0_SRSC1_GTC6_MASK           0x00000040
#define GPTA0_SRSC1_GTC6_SHIFT          6
#define GPTA0_SRSC1_GTC7_MASK           0x00000080
#define GPTA0_SRSC1_GTC7_SHIFT          7
#define GPTA0_SRSC1_GTC8_MASK           0x00000100
#define GPTA0_SRSC1_GTC8_SHIFT          8
#define GPTA0_SRSC1_GTC9_MASK           0x00000200
#define GPTA0_SRSC1_GTC9_SHIFT          9
#define GPTA0_SRSC1_GTC10_MASK          0x00000400
#define GPTA0_SRSC1_GTC10_SHIFT         10
#define GPTA0_SRSC1_GTC11_MASK          0x00000800
#define GPTA0_SRSC1_GTC11_SHIFT         11
#define GPTA0_SRSC1_GTC12_MASK          0x00001000
#define GPTA0_SRSC1_GTC12_SHIFT         12
#define GPTA0_SRSC1_GTC13_MASK          0x00002000
#define GPTA0_SRSC1_GTC13_SHIFT         13
#define GPTA0_SRSC1_GTC14_MASK          0x00004000
#define GPTA0_SRSC1_GTC14_SHIFT         14
#define GPTA0_SRSC1_GTC15_MASK          0x00008000
#define GPTA0_SRSC1_GTC15_SHIFT         15
#define GPTA0_SRSC1_GTC16_MASK          0x00010000
#define GPTA0_SRSC1_GTC16_SHIFT         16
#define GPTA0_SRSC1_GTC17_MASK          0x00020000
#define GPTA0_SRSC1_GTC17_SHIFT         17
#define GPTA0_SRSC1_GTC18_MASK          0x00040000
#define GPTA0_SRSC1_GTC18_SHIFT         18
#define GPTA0_SRSC1_GTC19_MASK          0x00080000
#define GPTA0_SRSC1_GTC19_SHIFT         19
#define GPTA0_SRSC1_GTC20_MASK          0x00100000
#define GPTA0_SRSC1_GTC20_SHIFT         20
#define GPTA0_SRSC1_GTC21_MASK          0x00200000
#define GPTA0_SRSC1_GTC21_SHIFT         21
#define GPTA0_SRSC1_GTC22_MASK          0x00400000
#define GPTA0_SRSC1_GTC22_SHIFT         22
#define GPTA0_SRSC1_GTC23_MASK          0x00800000
#define GPTA0_SRSC1_GTC23_SHIFT         23
#define GPTA0_SRSC1_GTC24_MASK          0x01000000
#define GPTA0_SRSC1_GTC24_SHIFT         24
#define GPTA0_SRSC1_GTC25_MASK          0x02000000
#define GPTA0_SRSC1_GTC25_SHIFT         25
#define GPTA0_SRSC1_GTC26_MASK          0x04000000
#define GPTA0_SRSC1_GTC26_SHIFT         26
#define GPTA0_SRSC1_GTC27_MASK          0x08000000
#define GPTA0_SRSC1_GTC27_SHIFT         27
#define GPTA0_SRSC1_GTC28_MASK          0x10000000
#define GPTA0_SRSC1_GTC28_SHIFT         28
#define GPTA0_SRSC1_GTC29_MASK          0x20000000
#define GPTA0_SRSC1_GTC29_SHIFT         29
#define GPTA0_SRSC1_GTC30_MASK          0x40000000
#define GPTA0_SRSC1_GTC30_SHIFT         30
#define GPTA0_SRSC1_GTC31_MASK          0x80000000
#define GPTA0_SRSC1_GTC31_SHIFT         31



/****************** Masks for GPTA0_SRSS0_t **********************/
/*
   GPTA0_SRSS0           "GPTA0 Service Request State Set Register 0"
*/
/**********************************************************/

#define GPTA0_SRSS0_MASK                0x00007fff
#define GPTA0_SRSS0_DCM00R_MASK         0x00000001
#define GPTA0_SRSS0_DCM00R_SHIFT        0
#define GPTA0_SRSS0_DCM00F_MASK         0x00000002
#define GPTA0_SRSS0_DCM00F_SHIFT        1
#define GPTA0_SRSS0_DCM00C_MASK         0x00000004
#define GPTA0_SRSS0_DCM00C_SHIFT        2
#define GPTA0_SRSS0_DCM01R_MASK         0x00000008
#define GPTA0_SRSS0_DCM01R_SHIFT        3
#define GPTA0_SRSS0_DCM01F_MASK         0x00000010
#define GPTA0_SRSS0_DCM01F_SHIFT        4
#define GPTA0_SRSS0_DCM01C_MASK         0x00000020
#define GPTA0_SRSS0_DCM01C_SHIFT        5
#define GPTA0_SRSS0_DCM02R_MASK         0x00000040
#define GPTA0_SRSS0_DCM02R_SHIFT        6
#define GPTA0_SRSS0_DCM02F_MASK         0x00000080
#define GPTA0_SRSS0_DCM02F_SHIFT        7
#define GPTA0_SRSS0_DCM02C_MASK         0x00000100
#define GPTA0_SRSS0_DCM02C_SHIFT        8
#define GPTA0_SRSS0_DCM03R_MASK         0x00000200
#define GPTA0_SRSS0_DCM03R_SHIFT        9
#define GPTA0_SRSS0_DCM03F_MASK         0x00000400
#define GPTA0_SRSS0_DCM03F_SHIFT        10
#define GPTA0_SRSS0_DCM03C_MASK         0x00000800
#define GPTA0_SRSS0_DCM03C_SHIFT        11
#define GPTA0_SRSS0_PLL_MASK            0x00001000
#define GPTA0_SRSS0_PLL_SHIFT           12
#define GPTA0_SRSS0_GT00_MASK           0x00002000
#define GPTA0_SRSS0_GT00_SHIFT          13
#define GPTA0_SRSS0_GT01_MASK           0x00004000
#define GPTA0_SRSS0_GT01_SHIFT          14



/****************** Masks for GPTA0_SRSS1_t **********************/
/*
   GPTA0_SRSS1           "GPTA0 Service Request State Set Register 1"
*/
/**********************************************************/

#define GPTA0_SRSS1_MASK                0xffffffff
#define GPTA0_SRSS1_GTC0_MASK           0x00000001
#define GPTA0_SRSS1_GTC0_SHIFT          0
#define GPTA0_SRSS1_GTC1_MASK           0x00000002
#define GPTA0_SRSS1_GTC1_SHIFT          1
#define GPTA0_SRSS1_GTC2_MASK           0x00000004
#define GPTA0_SRSS1_GTC2_SHIFT          2
#define GPTA0_SRSS1_GTC3_MASK           0x00000008
#define GPTA0_SRSS1_GTC3_SHIFT          3
#define GPTA0_SRSS1_GTC4_MASK           0x00000010
#define GPTA0_SRSS1_GTC4_SHIFT          4
#define GPTA0_SRSS1_GTC5_MASK           0x00000020
#define GPTA0_SRSS1_GTC5_SHIFT          5
#define GPTA0_SRSS1_GTC6_MASK           0x00000040
#define GPTA0_SRSS1_GTC6_SHIFT          6
#define GPTA0_SRSS1_GTC7_MASK           0x00000080
#define GPTA0_SRSS1_GTC7_SHIFT          7
#define GPTA0_SRSS1_GTC8_MASK           0x00000100
#define GPTA0_SRSS1_GTC8_SHIFT          8
#define GPTA0_SRSS1_GTC9_MASK           0x00000200
#define GPTA0_SRSS1_GTC9_SHIFT          9
#define GPTA0_SRSS1_GTC10_MASK          0x00000400
#define GPTA0_SRSS1_GTC10_SHIFT         10
#define GPTA0_SRSS1_GTC11_MASK          0x00000800
#define GPTA0_SRSS1_GTC11_SHIFT         11
#define GPTA0_SRSS1_GTC12_MASK          0x00001000
#define GPTA0_SRSS1_GTC12_SHIFT         12
#define GPTA0_SRSS1_GTC13_MASK          0x00002000
#define GPTA0_SRSS1_GTC13_SHIFT         13
#define GPTA0_SRSS1_GTC14_MASK          0x00004000
#define GPTA0_SRSS1_GTC14_SHIFT         14
#define GPTA0_SRSS1_GTC15_MASK          0x00008000
#define GPTA0_SRSS1_GTC15_SHIFT         15
#define GPTA0_SRSS1_GTC16_MASK          0x00010000
#define GPTA0_SRSS1_GTC16_SHIFT         16
#define GPTA0_SRSS1_GTC17_MASK          0x00020000
#define GPTA0_SRSS1_GTC17_SHIFT         17
#define GPTA0_SRSS1_GTC18_MASK          0x00040000
#define GPTA0_SRSS1_GTC18_SHIFT         18
#define GPTA0_SRSS1_GTC19_MASK          0x00080000
#define GPTA0_SRSS1_GTC19_SHIFT         19
#define GPTA0_SRSS1_GTC20_MASK          0x00100000
#define GPTA0_SRSS1_GTC20_SHIFT         20
#define GPTA0_SRSS1_GTC21_MASK          0x00200000
#define GPTA0_SRSS1_GTC21_SHIFT         21
#define GPTA0_SRSS1_GTC22_MASK          0x00400000
#define GPTA0_SRSS1_GTC22_SHIFT         22
#define GPTA0_SRSS1_GTC23_MASK          0x00800000
#define GPTA0_SRSS1_GTC23_SHIFT         23
#define GPTA0_SRSS1_GTC24_MASK          0x01000000
#define GPTA0_SRSS1_GTC24_SHIFT         24
#define GPTA0_SRSS1_GTC25_MASK          0x02000000
#define GPTA0_SRSS1_GTC25_SHIFT         25
#define GPTA0_SRSS1_GTC26_MASK          0x04000000
#define GPTA0_SRSS1_GTC26_SHIFT         26
#define GPTA0_SRSS1_GTC27_MASK          0x08000000
#define GPTA0_SRSS1_GTC27_SHIFT         27
#define GPTA0_SRSS1_GTC28_MASK          0x10000000
#define GPTA0_SRSS1_GTC28_SHIFT         28
#define GPTA0_SRSS1_GTC29_MASK          0x20000000
#define GPTA0_SRSS1_GTC29_SHIFT         29
#define GPTA0_SRSS1_GTC30_MASK          0x40000000
#define GPTA0_SRSS1_GTC30_SHIFT         30
#define GPTA0_SRSS1_GTC31_MASK          0x80000000
#define GPTA0_SRSS1_GTC31_SHIFT         31




#endif /* _HAVE_TRICORE_GPTA0_MASKS_H_ */

