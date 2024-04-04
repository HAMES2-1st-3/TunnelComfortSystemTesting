/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SCU_SHAREMASKS_H_
#define _HAVE_TRICORE_SCU_SHAREMASKS_H_


/****************** Masks for SCU_EICRm_t **********************/
/*
   SCU_EICR0             "External Input Channel Register 0"
   SCU_EICR1             "External Input Channel Register 1"
*/
/**********************************************************/

#define SCU_EICRm_MASK                  0x7f307f30
#define SCU_EICRm_EXIS0_MASK            0x00000030
#define SCU_EICRm_EXIS0_SHIFT           4
#define SCU_EICRm_FEN0_MASK             0x00000100
#define SCU_EICRm_FEN0_SHIFT            8
#define SCU_EICRm_REN0_MASK             0x00000200
#define SCU_EICRm_REN0_SHIFT            9
#define SCU_EICRm_LDEN0_MASK            0x00000400
#define SCU_EICRm_LDEN0_SHIFT           10
#define SCU_EICRm_EIEN0_MASK            0x00000800
#define SCU_EICRm_EIEN0_SHIFT           11
#define SCU_EICRm_INP0_MASK             0x00007000
#define SCU_EICRm_INP0_SHIFT            12
#define SCU_EICRm_EXIS1_MASK            0x00300000
#define SCU_EICRm_EXIS1_SHIFT           20
#define SCU_EICRm_FEN1_MASK             0x01000000
#define SCU_EICRm_FEN1_SHIFT            24
#define SCU_EICRm_REN1_MASK             0x02000000
#define SCU_EICRm_REN1_SHIFT            25
#define SCU_EICRm_LDEN1_MASK            0x04000000
#define SCU_EICRm_LDEN1_SHIFT           26
#define SCU_EICRm_EIEN1_MASK            0x08000000
#define SCU_EICRm_EIEN1_SHIFT           27
#define SCU_EICRm_INP1_MASK             0x70000000
#define SCU_EICRm_INP1_SHIFT            28



/****************** Masks for SCU_ESRCFGm_t **********************/
/*
   SCU_ESRCFG0           "ESR0 Configuration Register"
   SCU_ESRCFG1           "ESR1 Configuration Register"
   SCU_ESRCFG2           "ESR2 Configuration Register"
*/
/**********************************************************/

#define SCU_ESRCFGm_MASK                0x00000190
#define SCU_ESRCFGm_DFEN_MASK           0x00000010
#define SCU_ESRCFGm_DFEN_SHIFT          4
#define SCU_ESRCFGm_EDCON_MASK          0x00000180
#define SCU_ESRCFGm_EDCON_SHIFT         7



/****************** Masks for SCU_IGCRm_t **********************/
/*
   SCU_IGCR0             "Interrupt Gating Register 0"
   SCU_IGCR1             "Interrupt Gating Register 1"
*/
/**********************************************************/

#define SCU_IGCRm_MASK                  0xe00fe00f
#define SCU_IGCRm_IPEN00_MASK           0x00000001
#define SCU_IGCRm_IPEN00_SHIFT          0
#define SCU_IGCRm_IPEN01_MASK           0x00000002
#define SCU_IGCRm_IPEN01_SHIFT          1
#define SCU_IGCRm_IPEN02_MASK           0x00000004
#define SCU_IGCRm_IPEN02_SHIFT          2
#define SCU_IGCRm_IPEN03_MASK           0x00000008
#define SCU_IGCRm_IPEN03_SHIFT          3
#define SCU_IGCRm_GEEN0_MASK            0x00002000
#define SCU_IGCRm_GEEN0_SHIFT           13
#define SCU_IGCRm_IGP0_MASK             0x0000c000
#define SCU_IGCRm_IGP0_SHIFT            14
#define SCU_IGCRm_IPEN10_MASK           0x00010000
#define SCU_IGCRm_IPEN10_SHIFT          16
#define SCU_IGCRm_IPEN11_MASK           0x00020000
#define SCU_IGCRm_IPEN11_SHIFT          17
#define SCU_IGCRm_IPEN12_MASK           0x00040000
#define SCU_IGCRm_IPEN12_SHIFT          18
#define SCU_IGCRm_IPEN13_MASK           0x00080000
#define SCU_IGCRm_IPEN13_SHIFT          19
#define SCU_IGCRm_GEEN1_MASK            0x20000000
#define SCU_IGCRm_GEEN1_SHIFT           29
#define SCU_IGCRm_IGP1_MASK             0xc0000000
#define SCU_IGCRm_IGP1_SHIFT            30



/****************** Masks for SCU_SRCm_t **********************/
/*
   SCU_SRC0              "Service Request Control 0 Register"
   SCU_SRC1              "Service Request Control 1 Register"
   SCU_SRC2              "Service Request Control 2 Register"
   SCU_SRC3              "Service Request Control 3 Register"
*/
/**********************************************************/

#define SCU_SRCm_MASK                   0x0000f4ff
#define SCU_SRCm_SRPN_MASK              0x000000ff
#define SCU_SRCm_SRPN_SHIFT             0
#define SCU_SRCm_TOS_MASK               0x00000400
#define SCU_SRCm_TOS_SHIFT              10
#define SCU_SRCm_SRE_MASK               0x00001000
#define SCU_SRCm_SRE_SHIFT              12
#define SCU_SRCm_SRR_MASK               0x00002000
#define SCU_SRCm_SRR_SHIFT              13
#define SCU_SRCm_CLRR_MASK              0x00004000
#define SCU_SRCm_CLRR_SHIFT             14
#define SCU_SRCm_SETR_MASK              0x00008000
#define SCU_SRCm_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_SCU_SHAREMASKS_H_ */

