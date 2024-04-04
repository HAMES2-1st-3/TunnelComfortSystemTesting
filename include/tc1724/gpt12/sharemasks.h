/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPT12_SHAREMASKS_H_
#define _HAVE_TRICORE_GPT12_SHAREMASKS_H_


/****************** Masks for GPTn_CAPREL_t **********************/
/*
   GPT120_CAPREL         "Capture and Reload Register"
   GPT121_CAPREL         "Capture and Reload Register"
*/
/**********************************************************/

#define GPTn_CAPREL_MASK                0x0000ffff
#define GPTn_CAPREL_CAPREL_MASK         0x0000ffff
#define GPTn_CAPREL_CAPREL_SHIFT        0



/****************** Masks for GPTn_CLC_t **********************/
/*
   GPT120_CLC            "Clock Control Register"
   GPT121_CLC            "Clock Control Register"
*/
/**********************************************************/

#define GPTn_CLC_MASK                   0x0000003f
#define GPTn_CLC_DISR_MASK              0x00000001
#define GPTn_CLC_DISR_SHIFT             0
#define GPTn_CLC_DISS_MASK              0x00000002
#define GPTn_CLC_DISS_SHIFT             1
#define GPTn_CLC_SPEN_MASK              0x00000004
#define GPTn_CLC_SPEN_SHIFT             2
#define GPTn_CLC_EDIS_MASK              0x00000008
#define GPTn_CLC_EDIS_SHIFT             3
#define GPTn_CLC_SBWE_MASK              0x00000010
#define GPTn_CLC_SBWE_SHIFT             4
#define GPTn_CLC_FSOE_MASK              0x00000020
#define GPTn_CLC_FSOE_SHIFT             5



/****************** Masks for GPTn_ID_t **********************/
/*
   GPT120_ID             "Identification Register"
   GPT121_ID             "Identification Register"
*/
/**********************************************************/

#define GPTn_ID_MASK                    0xffffffff
#define GPTn_ID_MODREV_MASK             0x000000ff
#define GPTn_ID_MODREV_SHIFT            0
#define GPTn_ID_MODTYPE_MASK            0x0000ff00
#define GPTn_ID_MODTYPE_SHIFT           8
#define GPTn_ID_MODNUMBER_MASK          0xffff0000
#define GPTn_ID_MODNUMBER_SHIFT         16



/****************** Masks for GPTn_PISEL_t **********************/
/*
   GPT120_PISEL          "Port Input Select Register"
   GPT121_PISEL          "Port Input Select Register"
*/
/**********************************************************/

#define GPTn_PISEL_MASK                 0x0000ffff
#define GPTn_PISEL_IST2IN_MASK          0x00000001
#define GPTn_PISEL_IST2IN_SHIFT         0
#define GPTn_PISEL_IST2EUD_MASK         0x00000002
#define GPTn_PISEL_IST2EUD_SHIFT        1
#define GPTn_PISEL_IST3IN_MASK          0x0000000c
#define GPTn_PISEL_IST3IN_SHIFT         2
#define GPTn_PISEL_IST3EUD_MASK         0x00000030
#define GPTn_PISEL_IST3EUD_SHIFT        4
#define GPTn_PISEL_IST4IN_MASK          0x000000c0
#define GPTn_PISEL_IST4IN_SHIFT         6
#define GPTn_PISEL_IST4EUD_MASK         0x00000300
#define GPTn_PISEL_IST4EUD_SHIFT        8
#define GPTn_PISEL_IST5IN_MASK          0x00000400
#define GPTn_PISEL_IST5IN_SHIFT         10
#define GPTn_PISEL_IST5EUD_MASK         0x00000800
#define GPTn_PISEL_IST5EUD_SHIFT        11
#define GPTn_PISEL_IST6IN_MASK          0x00001000
#define GPTn_PISEL_IST6IN_SHIFT         12
#define GPTn_PISEL_IST6EUD_MASK         0x00002000
#define GPTn_PISEL_IST6EUD_SHIFT        13
#define GPTn_PISEL_ISCAPIN_MASK         0x0000c000
#define GPTn_PISEL_ISCAPIN_SHIFT        14



/****************** Masks for GPTn_SRCm_t **********************/
/*
   GPT120_SRC0           "Service Request Control 0 Register"
   GPT120_SRC1           "Service Request Control 1 Register"
   GPT120_SRC2           "Service Request Control 2 Register"
   GPT120_SRC3           "Service Request Control 3 Register"
   GPT120_SRC4           "Service Request Control 4Register"
   GPT120_SRC5           "Service Request Control 5 Register"
   GPT121_SRC0           "Service Request Control 0 Register"
   GPT121_SRC1           "Service Request Control 1 Register"
   GPT121_SRC2           "Service Request Control 2 Register"
   GPT121_SRC3           "Service Request Control 3 Register"
   GPT121_SRC4           "Service Request Control 4Register"
   GPT121_SRC5           "Service Request Control 5 Register"
*/
/**********************************************************/

#define GPTn_SRCm_MASK                  0x0000f4ff
#define GPTn_SRCm_SRPN_MASK             0x000000ff
#define GPTn_SRCm_SRPN_SHIFT            0
#define GPTn_SRCm_TOS_MASK              0x00000400
#define GPTn_SRCm_TOS_SHIFT             10
#define GPTn_SRCm_SRE_MASK              0x00001000
#define GPTn_SRCm_SRE_SHIFT             12
#define GPTn_SRCm_SRR_MASK              0x00002000
#define GPTn_SRCm_SRR_SHIFT             13
#define GPTn_SRCm_CLRR_MASK             0x00004000
#define GPTn_SRCm_CLRR_SHIFT            14
#define GPTn_SRCm_SETR_MASK             0x00008000
#define GPTn_SRCm_SETR_SHIFT            15



/****************** Masks for GPTn_T2CON_t **********************/
/*
   GPT120_T2CON          "Timer T2 Control Register"
   GPT121_T2CON          "Timer T2 Control Register"
*/
/**********************************************************/

#define GPTn_T2CON_MASK                 0x0000f3ff
#define GPTn_T2CON_T2I_MASK             0x00000007
#define GPTn_T2CON_T2I_SHIFT            0
#define GPTn_T2CON_T2M_MASK             0x00000038
#define GPTn_T2CON_T2M_SHIFT            3
#define GPTn_T2CON_T2R_MASK             0x00000040
#define GPTn_T2CON_T2R_SHIFT            6
#define GPTn_T2CON_T2UD_MASK            0x00000080
#define GPTn_T2CON_T2UD_SHIFT           7
#define GPTn_T2CON_T2UDE_MASK           0x00000100
#define GPTn_T2CON_T2UDE_SHIFT          8
#define GPTn_T2CON_T2RC_MASK            0x00000200
#define GPTn_T2CON_T2RC_SHIFT           9
#define GPTn_T2CON_T2IRDIS_MASK         0x00001000
#define GPTn_T2CON_T2IRDIS_SHIFT        12
#define GPTn_T2CON_T2EDGE_MASK          0x00002000
#define GPTn_T2CON_T2EDGE_SHIFT         13
#define GPTn_T2CON_T2CHDIR_MASK         0x00004000
#define GPTn_T2CON_T2CHDIR_SHIFT        14
#define GPTn_T2CON_T2RDIR_MASK          0x00008000
#define GPTn_T2CON_T2RDIR_SHIFT         15



/****************** Masks for GPTn_T3CON_t **********************/
/*
   GPT120_T3CON          "Timer T3 Control Register"
   GPT121_T3CON          "Timer T3 Control Register"
*/
/**********************************************************/

#define GPTn_T3CON_MASK                 0x0000ffff
#define GPTn_T3CON_T3I_MASK             0x00000007
#define GPTn_T3CON_T3I_SHIFT            0
#define GPTn_T3CON_T3M_MASK             0x00000038
#define GPTn_T3CON_T3M_SHIFT            3
#define GPTn_T3CON_T3R_MASK             0x00000040
#define GPTn_T3CON_T3R_SHIFT            6
#define GPTn_T3CON_T3UD_MASK            0x00000080
#define GPTn_T3CON_T3UD_SHIFT           7
#define GPTn_T3CON_T3UDE_MASK           0x00000100
#define GPTn_T3CON_T3UDE_SHIFT          8
#define GPTn_T3CON_T3OE_MASK            0x00000200
#define GPTn_T3CON_T3OE_SHIFT           9
#define GPTn_T3CON_T3OTL_MASK           0x00000400
#define GPTn_T3CON_T3OTL_SHIFT          10
#define GPTn_T3CON_BPS1_MASK            0x00001800
#define GPTn_T3CON_BPS1_SHIFT           11
#define GPTn_T3CON_T3EDGE_MASK          0x00002000
#define GPTn_T3CON_T3EDGE_SHIFT         13
#define GPTn_T3CON_T3CHDIR_MASK         0x00004000
#define GPTn_T3CON_T3CHDIR_SHIFT        14
#define GPTn_T3CON_T3RDIR_MASK          0x00008000
#define GPTn_T3CON_T3RDIR_SHIFT         15



/****************** Masks for GPTn_T4CON_t **********************/
/*
   GPT120_T4CON          "Timer T4 Control Register"
   GPT121_T4CON          "Timer T4 Control Register"
*/
/**********************************************************/

#define GPTn_T4CON_MASK                 0x0000ffff
#define GPTn_T4CON_T4I_MASK             0x00000007
#define GPTn_T4CON_T4I_SHIFT            0
#define GPTn_T4CON_T4M_MASK             0x00000038
#define GPTn_T4CON_T4M_SHIFT            3
#define GPTn_T4CON_T4R_MASK             0x00000040
#define GPTn_T4CON_T4R_SHIFT            6
#define GPTn_T4CON_T4UD_MASK            0x00000080
#define GPTn_T4CON_T4UD_SHIFT           7
#define GPTn_T4CON_T4UDE_MASK           0x00000100
#define GPTn_T4CON_T4UDE_SHIFT          8
#define GPTn_T4CON_T4RC_MASK            0x00000200
#define GPTn_T4CON_T4RC_SHIFT           9
#define GPTn_T4CON_CLRT2EN_MASK         0x00000400
#define GPTn_T4CON_CLRT2EN_SHIFT        10
#define GPTn_T4CON_CLRT3EN_MASK         0x00000800
#define GPTn_T4CON_CLRT3EN_SHIFT        11
#define GPTn_T4CON_T4IRDIS_MASK         0x00001000
#define GPTn_T4CON_T4IRDIS_SHIFT        12
#define GPTn_T4CON_T4EDGE_MASK          0x00002000
#define GPTn_T4CON_T4EDGE_SHIFT         13
#define GPTn_T4CON_T4CHDIR_MASK         0x00004000
#define GPTn_T4CON_T4CHDIR_SHIFT        14
#define GPTn_T4CON_T4RDIR_MASK          0x00008000
#define GPTn_T4CON_T4RDIR_SHIFT         15



/****************** Masks for GPTn_T5CON_t **********************/
/*
   GPT120_T5CON          "Timer T5 Control Register"
   GPT121_T5CON          "Timer T5 Control Register"
*/
/**********************************************************/

#define GPTn_T5CON_MASK                 0x0000f7ff
#define GPTn_T5CON_T5I_MASK             0x00000007
#define GPTn_T5CON_T5I_SHIFT            0
#define GPTn_T5CON_T5M_MASK             0x00000038
#define GPTn_T5CON_T5M_SHIFT            3
#define GPTn_T5CON_T5R_MASK             0x00000040
#define GPTn_T5CON_T5R_SHIFT            6
#define GPTn_T5CON_T5UD_MASK            0x00000080
#define GPTn_T5CON_T5UD_SHIFT           7
#define GPTn_T5CON_T5UDE_MASK           0x00000100
#define GPTn_T5CON_T5UDE_SHIFT          8
#define GPTn_T5CON_T5RC_MASK            0x00000200
#define GPTn_T5CON_T5RC_SHIFT           9
#define GPTn_T5CON_CT3_MASK             0x00000400
#define GPTn_T5CON_CT3_SHIFT            10
#define GPTn_T5CON_CI_MASK              0x00003000
#define GPTn_T5CON_CI_SHIFT             12
#define GPTn_T5CON_T5CLR_MASK           0x00004000
#define GPTn_T5CON_T5CLR_SHIFT          14
#define GPTn_T5CON_T5SC_MASK            0x00008000
#define GPTn_T5CON_T5SC_SHIFT           15



/****************** Masks for GPTn_T6CON_t **********************/
/*
   GPT120_T6CON          "Timer T6 Control Register"
   GPT121_T6CON          "Timer T6 Control Register"
*/
/**********************************************************/

#define GPTn_T6CON_MASK                 0x0000dfff
#define GPTn_T6CON_T6I_MASK             0x00000007
#define GPTn_T6CON_T6I_SHIFT            0
#define GPTn_T6CON_T6M_MASK             0x00000038
#define GPTn_T6CON_T6M_SHIFT            3
#define GPTn_T6CON_T6R_MASK             0x00000040
#define GPTn_T6CON_T6R_SHIFT            6
#define GPTn_T6CON_T6UD_MASK            0x00000080
#define GPTn_T6CON_T6UD_SHIFT           7
#define GPTn_T6CON_T6UDE_MASK           0x00000100
#define GPTn_T6CON_T6UDE_SHIFT          8
#define GPTn_T6CON_T6OE_MASK            0x00000200
#define GPTn_T6CON_T6OE_SHIFT           9
#define GPTn_T6CON_T6OTL_MASK           0x00000400
#define GPTn_T6CON_T6OTL_SHIFT          10
#define GPTn_T6CON_BPS2_MASK            0x00001800
#define GPTn_T6CON_BPS2_SHIFT           11
#define GPTn_T6CON_T6CLR_MASK           0x00004000
#define GPTn_T6CON_T6CLR_SHIFT          14
#define GPTn_T6CON_T6SR_MASK            0x00008000
#define GPTn_T6CON_T6SR_SHIFT           15



/****************** Masks for GPTn_Tm_t **********************/
/*
   GPT120_T5             "Timer T5 Register"
   GPT120_T6             "Timer T6 Register"
   GPT121_T5             "Timer T5 Register"
   GPT121_T6             "Timer T6 Register"
*/
/**********************************************************/

#define GPTn_Tm_MASK                    0x0000ffff
#define GPTn_Tm_Tx_MASK                 0x0000ffff
#define GPTn_Tm_Tx_SHIFT                0




#endif /* _HAVE_TRICORE_GPT12_SHAREMASKS_H_ */

