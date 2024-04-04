/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SCU_SHAREMASKS_H_
#define _HAVE_TRICORE_SCU_SHAREMASKS_H_


/****************** Masks for EICRn_t **********************/
/*
   EICR0                 "External Input Channel Register 0"
   EICR1                 "External Input Channel Register 1"
*/
/**********************************************************/

#define EICRn_MASK                      0x7f307f30
#define EICRn_EXIS0_MASK                0x00000030
#define EICRn_EXIS0_SHIFT               4
#define EICRn_FEN0_MASK                 0x00000100
#define EICRn_FEN0_SHIFT                8
#define EICRn_REN0_MASK                 0x00000200
#define EICRn_REN0_SHIFT                9
#define EICRn_LDEN0_MASK                0x00000400
#define EICRn_LDEN0_SHIFT               10
#define EICRn_EIEN0_MASK                0x00000800
#define EICRn_EIEN0_SHIFT               11
#define EICRn_INP0_MASK                 0x00007000
#define EICRn_INP0_SHIFT                12
#define EICRn_EXIS1_MASK                0x00300000
#define EICRn_EXIS1_SHIFT               20
#define EICRn_FEN1_MASK                 0x01000000
#define EICRn_FEN1_SHIFT                24
#define EICRn_REN1_MASK                 0x02000000
#define EICRn_REN1_SHIFT                25
#define EICRn_LDEN1_MASK                0x04000000
#define EICRn_LDEN1_SHIFT               26
#define EICRn_EIEN1_MASK                0x08000000
#define EICRn_EIEN1_SHIFT               27
#define EICRn_INP1_MASK                 0x70000000
#define EICRn_INP1_SHIFT                28



/****************** Masks for EINT_SRCm_t **********************/
/*
   EINT_SRC0             "Service Request Control Reg. for Ext. Interrupt 0"
   EINT_SRC1             "Service Request Control Reg. for Ext. Interrupt 1"
   EINT_SRC2             "Service Request Control Reg. for Ext. Interrupt 2"
   EINT_SRC3             "Service Request Control Reg. for Ext. Interrupt 3"
*/
/**********************************************************/

#define EINT_SRCm_MASK                  0x0000f4ff
#define EINT_SRCm_SRPN_MASK             0x000000ff
#define EINT_SRCm_SRPN_SHIFT            0
#define EINT_SRCm_TOS_MASK              0x00000400
#define EINT_SRCm_TOS_SHIFT             10
#define EINT_SRCm_SRE_MASK              0x00001000
#define EINT_SRCm_SRE_SHIFT             12
#define EINT_SRCm_SRR_MASK              0x00002000
#define EINT_SRCm_SRR_SHIFT             13
#define EINT_SRCm_CLRR_MASK             0x00004000
#define EINT_SRCm_CLRR_SHIFT            14
#define EINT_SRCm_SETR_MASK             0x00008000
#define EINT_SRCm_SETR_SHIFT            15



/****************** Masks for IGCRn_t **********************/
/*
   IGCR0                 "Interrupt Gating Register 0"
   IGCR1                 "Interrupt Gating Register 1"
*/
/**********************************************************/

#define IGCRn_MASK                      0xe00fe00f
#define IGCRn_IPEN00_MASK               0x00000001
#define IGCRn_IPEN00_SHIFT              0
#define IGCRn_IPEN01_MASK               0x00000002
#define IGCRn_IPEN01_SHIFT              1
#define IGCRn_IPEN02_MASK               0x00000004
#define IGCRn_IPEN02_SHIFT              2
#define IGCRn_IPEN03_MASK               0x00000008
#define IGCRn_IPEN03_SHIFT              3
#define IGCRn_GEEN0_MASK                0x00002000
#define IGCRn_GEEN0_SHIFT               13
#define IGCRn_IGP0_MASK                 0x0000c000
#define IGCRn_IGP0_SHIFT                14
#define IGCRn_IPEN10_MASK               0x00010000
#define IGCRn_IPEN10_SHIFT              16
#define IGCRn_IPEN11_MASK               0x00020000
#define IGCRn_IPEN11_SHIFT              17
#define IGCRn_IPEN12_MASK               0x00040000
#define IGCRn_IPEN12_SHIFT              18
#define IGCRn_IPEN13_MASK               0x00080000
#define IGCRn_IPEN13_SHIFT              19
#define IGCRn_GEEN1_MASK                0x20000000
#define IGCRn_GEEN1_SHIFT               29
#define IGCRn_IGP1_MASK                 0xc0000000
#define IGCRn_IGP1_SHIFT                30



/****************** Masks for MACRXnSRC_t **********************/
/*
   MACRX0SRC             "MAC Receive Interrupt Service Request Control Register 0"
   MACRX1SRC             "MAC Receive Interrupt Service Request Control Register 1"
*/
/**********************************************************/

#define MACRXnSRC_MASK                  0x0000f4ff
#define MACRXnSRC_SRPN_MASK             0x000000ff
#define MACRXnSRC_SRPN_SHIFT            0
#define MACRXnSRC_TOS_MASK              0x00000400
#define MACRXnSRC_TOS_SHIFT             10
#define MACRXnSRC_SRE_MASK              0x00001000
#define MACRXnSRC_SRE_SHIFT             12
#define MACRXnSRC_SRR_MASK              0x00002000
#define MACRXnSRC_SRR_SHIFT             13
#define MACRXnSRC_CLRR_MASK             0x00004000
#define MACRXnSRC_CLRR_SHIFT            14
#define MACRXnSRC_SETR_MASK             0x00008000
#define MACRXnSRC_SETR_SHIFT            15



/****************** Masks for MACTXnSRC_t **********************/
/*
   MACTX0SRC             "MAC Transmit Interrupt Service Request Control Register"
   MACTX1SRC             "MAC Transmit Interrupt Service Request Control Register 1"
*/
/**********************************************************/

#define MACTXnSRC_MASK                  0x0000f4ff
#define MACTXnSRC_SRPN_MASK             0x000000ff
#define MACTXnSRC_SRPN_SHIFT            0
#define MACTXnSRC_TOS_MASK              0x00000400
#define MACTXnSRC_TOS_SHIFT             10
#define MACTXnSRC_SRE_MASK              0x00001000
#define MACTXnSRC_SRE_SHIFT             12
#define MACTXnSRC_SRR_MASK              0x00002000
#define MACTXnSRC_SRR_SHIFT             13
#define MACTXnSRC_CLRR_MASK             0x00004000
#define MACTXnSRC_CLRR_SHIFT            14
#define MACTXnSRC_SETR_MASK             0x00008000
#define MACTXnSRC_SETR_SHIFT            15



/****************** Masks for RBSRCn_t **********************/
/*
   RBSRC0                "RB Service Request Control 0 Register"
   RBSRC1                "RB Service Request Control 1 Register"
*/
/**********************************************************/

#define RBSRCn_MASK                     0x0000f4ff
#define RBSRCn_SRPN_MASK                0x000000ff
#define RBSRCn_SRPN_SHIFT               0
#define RBSRCn_TOS_MASK                 0x00000400
#define RBSRCn_TOS_SHIFT                10
#define RBSRCn_SRE_MASK                 0x00001000
#define RBSRCn_SRE_SHIFT                12
#define RBSRCn_SRR_MASK                 0x00002000
#define RBSRCn_SRR_SHIFT                13
#define RBSRCn_CLRR_MASK                0x00004000
#define RBSRCn_CLRR_SHIFT               14
#define RBSRCn_SETR_MASK                0x00008000
#define RBSRCn_SETR_SHIFT               15




#endif /* _HAVE_TRICORE_SCU_SHAREMASKS_H_ */

