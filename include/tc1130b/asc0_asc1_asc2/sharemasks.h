/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ASC0_ASC1_ASC2_SHAREMASKS_H_
#define _HAVE_TRICORE_ASC0_ASC1_ASC2_SHAREMASKS_H_


/****************** Masks for ASCn_BG_t **********************/
/*
   ASC0_BG               "ASC Baudrate Timer Reload Register"
   ASC1_BG               "ASC Baudrate Timer Reload Register"
   ASC2_BG               "ASC Baudrate Timer Reload Register"
*/
/**********************************************************/

#define ASCn_BG_MASK                    0x00001fff
#define ASCn_BG_BR_VALUE_MASK           0x00001fff
#define ASCn_BG_BR_VALUE_SHIFT          0



/****************** Masks for ASCn_CLC_t **********************/
/*
   ASC0_CLC              "ASC Clock Control Register"
   ASC1_CLC              "ASC Clock Control Register"
   ASC2_CLC              "ASC Clock Control Register"
*/
/**********************************************************/

#define ASCn_CLC_MASK                   0x0000ff3f
#define ASCn_CLC_DISR_MASK              0x00000001
#define ASCn_CLC_DISR_SHIFT             0
#define ASCn_CLC_DISS_MASK              0x00000002
#define ASCn_CLC_DISS_SHIFT             1
#define ASCn_CLC_SPEN_MASK              0x00000004
#define ASCn_CLC_SPEN_SHIFT             2
#define ASCn_CLC_EDIS_MASK              0x00000008
#define ASCn_CLC_EDIS_SHIFT             3
#define ASCn_CLC_SBWE_MASK              0x00000010
#define ASCn_CLC_SBWE_SHIFT             4
#define ASCn_CLC_FSOE_MASK              0x00000020
#define ASCn_CLC_FSOE_SHIFT             5
#define ASCn_CLC_RMC_MASK               0x0000ff00
#define ASCn_CLC_RMC_SHIFT              8



/****************** Masks for ASCn_CON_t **********************/
/*
   ASC0_CON              "ASC Control Register"
   ASC1_CON              "ASC Control Register"
   ASC2_CON              "ASC Control Register"
*/
/**********************************************************/

#define ASCn_CON_MASK                   0x0000ffff
#define ASCn_CON_M_MASK                 0x00000007
#define ASCn_CON_M_SHIFT                0
#define ASCn_CON_STP_MASK               0x00000008
#define ASCn_CON_STP_SHIFT              3
#define ASCn_CON_REN_MASK               0x00000010
#define ASCn_CON_REN_SHIFT              4
#define ASCn_CON_PEN_MASK               0x00000020
#define ASCn_CON_PEN_SHIFT              5
#define ASCn_CON_FEN_MASK               0x00000040
#define ASCn_CON_FEN_SHIFT              6
#define ASCn_CON_OEN_MASK               0x00000080
#define ASCn_CON_OEN_SHIFT              7
#define ASCn_CON_PE_MASK                0x00000100
#define ASCn_CON_PE_SHIFT               8
#define ASCn_CON_FE_MASK                0x00000200
#define ASCn_CON_FE_SHIFT               9
#define ASCn_CON_OE_MASK                0x00000400
#define ASCn_CON_OE_SHIFT               10
#define ASCn_CON_FDE_MASK               0x00000800
#define ASCn_CON_FDE_SHIFT              11
#define ASCn_CON_ODD_MASK               0x00001000
#define ASCn_CON_ODD_SHIFT              12
#define ASCn_CON_BRS_MASK               0x00002000
#define ASCn_CON_BRS_SHIFT              13
#define ASCn_CON_LB_MASK                0x00004000
#define ASCn_CON_LB_SHIFT               14
#define ASCn_CON_R_MASK                 0x00008000
#define ASCn_CON_R_SHIFT                15



/****************** Masks for ASCn_ESRC_t **********************/
/*
   ASC0_ESRC             "ASC Error Interrupt Service Request Control Register"
   ASC1_ESRC             "ASC Error Interrupt Service Request Control Register"
   ASC2_ESRC             "ASC Error Interrupt Service Request Control Register"
*/
/**********************************************************/

#define ASCn_ESRC_MASK                  0x0000f4ff
#define ASCn_ESRC_SRPN_MASK             0x000000ff
#define ASCn_ESRC_SRPN_SHIFT            0
#define ASCn_ESRC_TOS_MASK              0x00000400
#define ASCn_ESRC_TOS_SHIFT             10
#define ASCn_ESRC_SRE_MASK              0x00001000
#define ASCn_ESRC_SRE_SHIFT             12
#define ASCn_ESRC_SRR_MASK              0x00002000
#define ASCn_ESRC_SRR_SHIFT             13
#define ASCn_ESRC_CLRR_MASK             0x00004000
#define ASCn_ESRC_CLRR_SHIFT            14
#define ASCn_ESRC_SETR_MASK             0x00008000
#define ASCn_ESRC_SETR_SHIFT            15



/****************** Masks for ASCn_FDV_t **********************/
/*
   ASC0_FDV              "ASC Fractional Divider Register"
   ASC1_FDV              "ASC Fractional Divider Register"
   ASC2_FDV              "ASC Fractional Divider Register"
*/
/**********************************************************/

#define ASCn_FDV_MASK                   0x000001ff
#define ASCn_FDV_FD_VALUE_MASK          0x000001ff
#define ASCn_FDV_FD_VALUE_SHIFT         0



/****************** Masks for ASCn_FSTAT_t **********************/
/*
   ASC0_FSTAT            "ASC FIFO Status Register"
   ASC1_FSTAT            "ASC FIFO Status Register"
   ASC2_FSTAT            "ASC FIFO Status Register"
*/
/**********************************************************/

#define ASCn_FSTAT_MASK                 0x00000f0f
#define ASCn_FSTAT_RXFFL_MASK           0x0000000f
#define ASCn_FSTAT_RXFFL_SHIFT          0
#define ASCn_FSTAT_TXFFL_MASK           0x00000f00
#define ASCn_FSTAT_TXFFL_SHIFT          8



/****************** Masks for ASCn_ID_t **********************/
/*
   ASC0_ID               "ASC Module Identification Register"
   ASC1_ID               "ASC Module Identification Register"
   ASC2_ID               "ASC Module Identification Register"
*/
/**********************************************************/

#define ASCn_ID_MASK                    0x0000ffff
#define ASCn_ID_MOD_REV_MASK            0x000000ff
#define ASCn_ID_MOD_REV_SHIFT           0
#define ASCn_ID_MOD_NUMBER_MASK         0x0000ff00
#define ASCn_ID_MOD_NUMBER_SHIFT        8



/****************** Masks for ASCn_PISEL_t **********************/
/*
   ASC0_PISEL            "ASC Peripheral Input Select Register"
   ASC1_PISEL            "ASC Peripheral Input Select Register"
   ASC2_PISEL            "ASC Peripheral Input Select Register"
*/
/**********************************************************/

#define ASCn_PISEL_MASK                 0x00000001
#define ASCn_PISEL_RIS_MASK             0x00000001
#define ASCn_PISEL_RIS_SHIFT            0



/****************** Masks for ASCn_PMW_t **********************/
/*
   ASC0_PMW              "ASC IrDA Pulse Mode/Widdth Register"
   ASC1_PMW              "ASC IrDA Pulse Mode/Widdth Register"
   ASC2_PMW              "ASC IrDA Pulse Mode/Widdth Register"
*/
/**********************************************************/

#define ASCn_PMW_MASK                   0x000001ff
#define ASCn_PMW_PW_VALUE_MASK          0x000000ff
#define ASCn_PMW_PW_VALUE_SHIFT         0
#define ASCn_PMW_IRPW_MASK              0x00000100
#define ASCn_PMW_IRPW_SHIFT             8



/****************** Masks for ASCn_RBUF_t **********************/
/*
   ASC0_RBUF             "ASC Receive Buffer Register"
   ASC1_RBUF             "ASC Receive Buffer Register"
   ASC2_RBUF             "ASC Receive Buffer Register"
*/
/**********************************************************/

#define ASCn_RBUF_MASK                  0x000001ff
#define ASCn_RBUF_RD_VALUE_MASK         0x000001ff
#define ASCn_RBUF_RD_VALUE_SHIFT        0



/****************** Masks for ASCn_RSRC_t **********************/
/*
   ASC0_RSRC             "ASC Receive Interrupt Service Request Control Register"
   ASC1_RSRC             "ASC Receive Interrupt Service Request Control Register"
   ASC2_RSRC             "ASC Receive Interrupt Service Request Control Register"
*/
/**********************************************************/

#define ASCn_RSRC_MASK                  0x0000f4ff
#define ASCn_RSRC_SRPN_MASK             0x000000ff
#define ASCn_RSRC_SRPN_SHIFT            0
#define ASCn_RSRC_TOS_MASK              0x00000400
#define ASCn_RSRC_TOS_SHIFT             10
#define ASCn_RSRC_SRE_MASK              0x00001000
#define ASCn_RSRC_SRE_SHIFT             12
#define ASCn_RSRC_SRR_MASK              0x00002000
#define ASCn_RSRC_SRR_SHIFT             13
#define ASCn_RSRC_CLRR_MASK             0x00004000
#define ASCn_RSRC_CLRR_SHIFT            14
#define ASCn_RSRC_SETR_MASK             0x00008000
#define ASCn_RSRC_SETR_SHIFT            15



/****************** Masks for ASCn_RXFCON_t **********************/
/*
   ASC0_RXFCON           "SSC Receive FIFO Control Register"
   ASC1_RXFCON           "SSC Receive FIFO Control Register"
   ASC2_RXFCON           "SSC Receive FIFO Control Register"
*/
/**********************************************************/

#define ASCn_RXFCON_MASK                0x00000f07
#define ASCn_RXFCON_RXFEN_MASK          0x00000001
#define ASCn_RXFCON_RXFEN_SHIFT         0
#define ASCn_RXFCON_RXFLU_MASK          0x00000002
#define ASCn_RXFCON_RXFLU_SHIFT         1
#define ASCn_RXFCON_RXTMEN_MASK         0x00000004
#define ASCn_RXFCON_RXTMEN_SHIFT        2
#define ASCn_RXFCON_RXFITL_MASK         0x00000f00
#define ASCn_RXFCON_RXFITL_SHIFT        8



/****************** Masks for ASCn_TBSRC_t **********************/
/*
   ASC0_TBSRC            "ASC Transmit Buffer Service Request Control Register"
   ASC1_TBSRC            "ASC Transmit Buffer Service Request Control Register"
   ASC2_TBSRC            "ASC Transmit Buffer Service Request Control Register"
*/
/**********************************************************/

#define ASCn_TBSRC_MASK                 0x0000f4ff
#define ASCn_TBSRC_SRPN_MASK            0x000000ff
#define ASCn_TBSRC_SRPN_SHIFT           0
#define ASCn_TBSRC_TOS_MASK             0x00000400
#define ASCn_TBSRC_TOS_SHIFT            10
#define ASCn_TBSRC_SRE_MASK             0x00001000
#define ASCn_TBSRC_SRE_SHIFT            12
#define ASCn_TBSRC_SRR_MASK             0x00002000
#define ASCn_TBSRC_SRR_SHIFT            13
#define ASCn_TBSRC_CLRR_MASK            0x00004000
#define ASCn_TBSRC_CLRR_SHIFT           14
#define ASCn_TBSRC_SETR_MASK            0x00008000
#define ASCn_TBSRC_SETR_SHIFT           15



/****************** Masks for ASCn_TBUF_t **********************/
/*
   ASC0_TBUF             "ASC Transmit Buffer Register"
   ASC1_TBUF             "ASC Transmit Buffer Register"
   ASC2_TBUF             "ASC Transmit Buffer Register"
*/
/**********************************************************/

#define ASCn_TBUF_MASK                  0x000001ff
#define ASCn_TBUF_TD_VALUE_MASK         0x000001ff
#define ASCn_TBUF_TD_VALUE_SHIFT        0



/****************** Masks for ASCn_TSRC_t **********************/
/*
   ASC0_TSRC             "ASC Transmit Interrupt Service Request Control Register"
   ASC1_TSRC             "ASC Transmit Interrupt Service Request Control Register"
   ASC2_TSRC             "ASC Transmit Interrupt Service Request Control Register"
*/
/**********************************************************/

#define ASCn_TSRC_MASK                  0x0000f4ff
#define ASCn_TSRC_SRPN_MASK             0x000000ff
#define ASCn_TSRC_SRPN_SHIFT            0
#define ASCn_TSRC_TOS_MASK              0x00000400
#define ASCn_TSRC_TOS_SHIFT             10
#define ASCn_TSRC_SRE_MASK              0x00001000
#define ASCn_TSRC_SRE_SHIFT             12
#define ASCn_TSRC_SRR_MASK              0x00002000
#define ASCn_TSRC_SRR_SHIFT             13
#define ASCn_TSRC_CLRR_MASK             0x00004000
#define ASCn_TSRC_CLRR_SHIFT            14
#define ASCn_TSRC_SETR_MASK             0x00008000
#define ASCn_TSRC_SETR_SHIFT            15



/****************** Masks for ASCn_TXFCON_t **********************/
/*
   ASC0_TXFCON           "SSC Transmit FIFO Control Register"
   ASC1_TXFCON           "SSC Transmit FIFO Control Register"
   ASC2_TXFCON           "SSC Transmit FIFO Control Register"
*/
/**********************************************************/

#define ASCn_TXFCON_MASK                0x00000f07
#define ASCn_TXFCON_TXFEN_MASK          0x00000001
#define ASCn_TXFCON_TXFEN_SHIFT         0
#define ASCn_TXFCON_TXFLU_MASK          0x00000002
#define ASCn_TXFCON_TXFLU_SHIFT         1
#define ASCn_TXFCON_TXTMEN_MASK         0x00000004
#define ASCn_TXFCON_TXTMEN_SHIFT        2
#define ASCn_TXFCON_TXFITL_MASK         0x00000f00
#define ASCn_TXFCON_TXFITL_SHIFT        8



/****************** Masks for ASCn_WHBCON_t **********************/
/*
   ASC0_WHBCON           "ASC Hardware Bits Control Register"
   ASC1_WHBCON           "ASC Hardware Bits Control Register"
   ASC2_WHBCON           "ASC Hardware Bits Control Register"
*/
/**********************************************************/

#define ASCn_WHBCON_MASK                0x00003f30
#define ASCn_WHBCON_CLRREN_MASK         0x00000010
#define ASCn_WHBCON_CLRREN_SHIFT        4
#define ASCn_WHBCON_SETREN_MASK         0x00000020
#define ASCn_WHBCON_SETREN_SHIFT        5
#define ASCn_WHBCON_CLRPE_MASK          0x00000100
#define ASCn_WHBCON_CLRPE_SHIFT         8
#define ASCn_WHBCON_CLRFE_MASK          0x00000200
#define ASCn_WHBCON_CLRFE_SHIFT         9
#define ASCn_WHBCON_CLROE_MASK          0x00000400
#define ASCn_WHBCON_CLROE_SHIFT         10
#define ASCn_WHBCON_SETPE_MASK          0x00000800
#define ASCn_WHBCON_SETPE_SHIFT         11
#define ASCn_WHBCON_SETFE_MASK          0x00001000
#define ASCn_WHBCON_SETFE_SHIFT         12
#define ASCn_WHBCON_SETOE_MASK          0x00002000
#define ASCn_WHBCON_SETOE_SHIFT         13




#endif /* _HAVE_TRICORE_ASC0_ASC1_ASC2_SHAREMASKS_H_ */

