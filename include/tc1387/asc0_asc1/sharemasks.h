/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ASC0_ASC1_SHAREMASKS_H_
#define _HAVE_TRICORE_ASC0_ASC1_SHAREMASKS_H_


/****************** Masks for ASCn_BG_t **********************/
/*
   ASC0_BG               "Baud Rate Timer/Reload Register"
   ASC1_BG               "Baud Rate Timer/Reload Register"
*/
/**********************************************************/

#define ASCn_BG_MASK                    0x00001fff
#define ASCn_BG_BR_VALUE_MASK           0x00001fff
#define ASCn_BG_BR_VALUE_SHIFT          0



/****************** Masks for ASCn_CON_t **********************/
/*
   ASC0_CON              "Control Register"
   ASC1_CON              "Control Register"
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
   ASC0_ESRC             "Error Interrupt Service Request Control Register"
   ASC1_ESRC             "Error Interrupt Service Request Control Register"
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
   ASC0_FDV              "Fractional Divider Register"
   ASC1_FDV              "Fractional Divider Register"
*/
/**********************************************************/

#define ASCn_FDV_MASK                   0x000001ff
#define ASCn_FDV_FD_VALUE_MASK          0x000001ff
#define ASCn_FDV_FD_VALUE_SHIFT         0



/****************** Masks for ASCn_ID_t **********************/
/*
   ASC0_ID               "Module Identification Register"
   ASC1_ID               "Module Identification Register"
*/
/**********************************************************/

#define ASCn_ID_MASK                    0x0000ffff
#define ASCn_ID_MODREV_MASK             0x000000ff
#define ASCn_ID_MODREV_SHIFT            0
#define ASCn_ID_MODNUM_MASK             0x0000ff00
#define ASCn_ID_MODNUM_SHIFT            8



/****************** Masks for ASCn_PISEL_t **********************/
/*
   ASC0_PISEL            "ASC0 Peripheral Input Select Register"
   ASC1_PISEL            "ASC1 Peripheral Input Select Register"
*/
/**********************************************************/

#define ASCn_PISEL_MASK                 0x00000001
#define ASCn_PISEL_RIS_MASK             0x00000001
#define ASCn_PISEL_RIS_SHIFT            0



/****************** Masks for ASCn_RBUF_t **********************/
/*
   ASC0_RBUF             "Receive Buffer Register"
   ASC1_RBUF             "Receive Buffer Register"
*/
/**********************************************************/

#define ASCn_RBUF_MASK                  0x000001ff
#define ASCn_RBUF_RD_VALUE_MASK         0x000001ff
#define ASCn_RBUF_RD_VALUE_SHIFT        0



/****************** Masks for ASCn_RSRC_t **********************/
/*
   ASC0_RSRC             "Receive Interrupt Service Request Control Register"
   ASC1_RSRC             "Receive Interrupt Service Request Control Register"
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



/****************** Masks for ASCn_TBSRC_t **********************/
/*
   ASC0_TBSRC            "Transmit Buffer Interrupt Service Request Control Register"
   ASC1_TBSRC            "Transmit Buffer Interrupt Service Request Control Register"
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
   ASC0_TBUF             "Transmit Buffer Register"
   ASC1_TBUF             "Transmit Buffer Register"
*/
/**********************************************************/

#define ASCn_TBUF_MASK                  0x000001ff
#define ASCn_TBUF_TD_VALUE_MASK         0x000001ff
#define ASCn_TBUF_TD_VALUE_SHIFT        0



/****************** Masks for ASCn_TSRC_t **********************/
/*
   ASC0_TSRC             "Transmit Interrupt Service Request Control Register"
   ASC1_TSRC             "Transmit Interrupt Service Request Control Register"
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



/****************** Masks for ASCn_WHBCON_t **********************/
/*
   ASC0_WHBCON           "Write Hardware Bits Control Register"
   ASC1_WHBCON           "Write Hardware Bits Control Register"
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




#endif /* _HAVE_TRICORE_ASC0_ASC1_SHAREMASKS_H_ */

