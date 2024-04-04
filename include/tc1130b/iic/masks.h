/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_IIC_MASKS_H_
#define _HAVE_TRICORE_IIC_MASKS_H_


/****************** Masks for IIC_BUSCON_t **********************/
/*
   IIC_BUSCON            "IIC BUS Control Register"
*/
/**********************************************************/

#define IIC_BUSCON_MASK                 0xe3ffff33
#define IIC_BUSCON_SDAEN0_MASK          0x00000001
#define IIC_BUSCON_SDAEN0_SHIFT         0
#define IIC_BUSCON_SDAEN1_MASK          0x00000002
#define IIC_BUSCON_SDAEN1_SHIFT         1
#define IIC_BUSCON_SCLEN0_MASK          0x00000010
#define IIC_BUSCON_SCLEN0_SHIFT         4
#define IIC_BUSCON_SCLEN1_MASK          0x00000020
#define IIC_BUSCON_SCLEN1_SHIFT         5
#define IIC_BUSCON_BRP_MASK             0x0000ff00
#define IIC_BUSCON_BRP_SHIFT            8
#define IIC_BUSCON_ICA0_0_MASK          0x00010000
#define IIC_BUSCON_ICA0_0_SHIFT         16
#define IIC_BUSCON_ICA7__1_MASK         0x00fe0000
#define IIC_BUSCON_ICA7__1_SHIFT        17
#define IIC_BUSCON_ICA8_0_MASK          0x01000000
#define IIC_BUSCON_ICA8_0_SHIFT         24
#define IIC_BUSCON_ICA9_0_MASK          0x02000000
#define IIC_BUSCON_ICA9_0_SHIFT         25
#define IIC_BUSCON_PREDIV_MASK          0x60000000
#define IIC_BUSCON_PREDIV_SHIFT         29
#define IIC_BUSCON_BRPMOD_MASK          0x80000000
#define IIC_BUSCON_BRPMOD_SHIFT         31



/****************** Masks for IIC_CLC_t **********************/
/*
   IIC_CLC               "IIC Clock Control Register"
*/
/**********************************************************/

#define IIC_CLC_MASK                    0x00ffff3f
#define IIC_CLC_DISR_MASK               0x00000001
#define IIC_CLC_DISR_SHIFT              0
#define IIC_CLC_DISS_MASK               0x00000002
#define IIC_CLC_DISS_SHIFT              1
#define IIC_CLC_SPEN_MASK               0x00000004
#define IIC_CLC_SPEN_SHIFT              2
#define IIC_CLC_EDIS_MASK               0x00000008
#define IIC_CLC_EDIS_SHIFT              3
#define IIC_CLC_SBWE_MASK               0x00000010
#define IIC_CLC_SBWE_SHIFT              4
#define IIC_CLC_FSOE_MASK               0x00000020
#define IIC_CLC_FSOE_SHIFT              5
#define IIC_CLC_RMC_MASK                0x0000ff00
#define IIC_CLC_RMC_SHIFT               8
#define IIC_CLC_SMC_MASK                0x00ff0000
#define IIC_CLC_SMC_SHIFT               16



/****************** Masks for IIC_ID_t **********************/
/*
   IIC_ID                "IIC Module Identification Register"
*/
/**********************************************************/

#define IIC_ID_MASK                     0x0000ffff
#define IIC_ID_REV_MASK                 0x000000ff
#define IIC_ID_REV_SHIFT                0
#define IIC_ID_ID_MASK                  0x0000ff00
#define IIC_ID_ID_SHIFT                 8



/****************** Masks for IIC_PISEL_t **********************/
/*
   IIC_PISEL             "IIC Input Select Register"
*/
/**********************************************************/

#define IIC_PISEL_MASK                  0x00000033
#define IIC_PISEL_SCLIS0_MASK           0x00000001
#define IIC_PISEL_SCLIS0_SHIFT          0
#define IIC_PISEL_SCLIS1_MASK           0x00000002
#define IIC_PISEL_SCLIS1_SHIFT          1
#define IIC_PISEL_SDAIS0_MASK           0x00000010
#define IIC_PISEL_SDAIS0_SHIFT          4
#define IIC_PISEL_SDAIS1_MASK           0x00000020
#define IIC_PISEL_SDAIS1_SHIFT          5



/****************** Masks for IIC_RTB_t **********************/
/*
   IIC_RTB               "Reset Transmit Buffer"
*/
/**********************************************************/

#define IIC_RTB_MASK                    0xffffffff
#define IIC_RTB_RTB0_MASK               0x000000ff
#define IIC_RTB_RTB0_SHIFT              0
#define IIC_RTB_RTB1_MASK               0x0000ff00
#define IIC_RTB_RTB1_SHIFT              8
#define IIC_RTB_RTB2_MASK               0x00ff0000
#define IIC_RTB_RTB2_SHIFT              16
#define IIC_RTB_RTB3_MASK               0xff000000
#define IIC_RTB_RTB3_SHIFT              24



/****************** Masks for IIC_SYSCON_t **********************/
/*
   IIC_SYSCON            "System Control Register"
*/
/**********************************************************/

#define IIC_SYSCON_MASK                 0x8fff87ff
#define IIC_SYSCON_ADR_MASK             0x00000001
#define IIC_SYSCON_ADR_SHIFT            0
#define IIC_SYSCON_AL_MASK              0x00000002
#define IIC_SYSCON_AL_SHIFT             1
#define IIC_SYSCON_SLA_MASK             0x00000004
#define IIC_SYSCON_SLA_SHIFT            2
#define IIC_SYSCON_LRB_MASK             0x00000008
#define IIC_SYSCON_LRB_SHIFT            3
#define IIC_SYSCON_BB_MASK              0x00000010
#define IIC_SYSCON_BB_SHIFT             4
#define IIC_SYSCON_IRQD_MASK            0x00000020
#define IIC_SYSCON_IRQD_SHIFT           5
#define IIC_SYSCON_IRQP_MASK            0x00000040
#define IIC_SYSCON_IRQP_SHIFT           6
#define IIC_SYSCON_IRQE_MASK            0x00000080
#define IIC_SYSCON_IRQE_SHIFT           7
#define IIC_SYSCON_CO_MASK              0x00000700
#define IIC_SYSCON_CO_SHIFT             8
#define IIC_SYSCON_RMEN_MASK            0x00008000
#define IIC_SYSCON_RMEN_SHIFT           15
#define IIC_SYSCON_M10_MASK             0x00010000
#define IIC_SYSCON_M10_SHIFT            16
#define IIC_SYSCON_RSC_MASK             0x00020000
#define IIC_SYSCON_RSC_SHIFT            17
#define IIC_SYSCON_MOD_MASK             0x000c0000
#define IIC_SYSCON_MOD_SHIFT            18
#define IIC_SYSCON_BUM_MASK             0x00100000
#define IIC_SYSCON_BUM_SHIFT            20
#define IIC_SYSCON_ACKDIS_MASK          0x00200000
#define IIC_SYSCON_ACKDIS_SHIFT         21
#define IIC_SYSCON_INT_MASK             0x00400000
#define IIC_SYSCON_INT_SHIFT            22
#define IIC_SYSCON_TRX_MASK             0x00800000
#define IIC_SYSCON_TRX_SHIFT            23
#define IIC_SYSCON_IGE_MASK             0x01000000
#define IIC_SYSCON_IGE_SHIFT            24
#define IIC_SYSCON_STP_MASK             0x02000000
#define IIC_SYSCON_STP_SHIFT            25
#define IIC_SYSCON_CI_MASK              0x0c000000
#define IIC_SYSCON_CI_SHIFT             26
#define IIC_SYSCON_WMEN_MASK            0x80000000
#define IIC_SYSCON_WMEN_SHIFT           31



/****************** Masks for IIC_WHBSYSCON_t **********************/
/*
   IIC_WHBSYSCON         "IIC Write Hardware Modifiied System Control"
*/
/**********************************************************/

#define IIC_WHBSYSCON_MASK              0xc7fbc7e6
#define IIC_WHBSYSCON_CLRAL_MASK        0x00000002
#define IIC_WHBSYSCON_CLRAL_SHIFT       1
#define IIC_WHBSYSCON_SETAL_MASK        0x00000004
#define IIC_WHBSYSCON_SETAL_SHIFT       2
#define IIC_WHBSYSCON_CLRIRQD_MASK      0x00000020
#define IIC_WHBSYSCON_CLRIRQD_SHIFT     5
#define IIC_WHBSYSCON_CLRIRQP_MASK      0x00000040
#define IIC_WHBSYSCON_CLRIRQP_SHIFT     6
#define IIC_WHBSYSCON_CLRIRQE_MASK      0x00000080
#define IIC_WHBSYSCON_CLRIRQE_SHIFT     7
#define IIC_WHBSYSCON_SETIRQD_MASK      0x00000100
#define IIC_WHBSYSCON_SETIRQD_SHIFT     8
#define IIC_WHBSYSCON_SETIRQP_MASK      0x00000200
#define IIC_WHBSYSCON_SETIRQP_SHIFT     9
#define IIC_WHBSYSCON_SETIRQE_MASK      0x00000400
#define IIC_WHBSYSCON_SETIRQE_SHIFT     10
#define IIC_WHBSYSCON_CLRRMEN_MASK      0x00004000
#define IIC_WHBSYSCON_CLRRMEN_SHIFT     14
#define IIC_WHBSYSCON_SETRMEN_MASK      0x00008000
#define IIC_WHBSYSCON_SETRMEN_SHIFT     15
#define IIC_WHBSYSCON_CLRRSC_MASK       0x00010000
#define IIC_WHBSYSCON_CLRRSC_SHIFT      16
#define IIC_WHBSYSCON_SETRSC_MASK       0x00020000
#define IIC_WHBSYSCON_SETRSC_SHIFT      17
#define IIC_WHBSYSCON_CLRBUM_MASK       0x00080000
#define IIC_WHBSYSCON_CLRBUM_SHIFT      19
#define IIC_WHBSYSCON_SETBUM_MASK       0x00100000
#define IIC_WHBSYSCON_SETBUM_SHIFT      20
#define IIC_WHBSYSCON_CLRACKDIS_MASK    0x00200000
#define IIC_WHBSYSCON_CLRACKDIS_SHIFT   21
#define IIC_WHBSYSCON_SETACKDIS_MASK    0x00400000
#define IIC_WHBSYSCON_SETACKDIS_SHIFT   22
#define IIC_WHBSYSCON_CLRTRX_MASK       0x00800000
#define IIC_WHBSYSCON_CLRTRX_SHIFT      23
#define IIC_WHBSYSCON_SETTRX_MASK       0x01000000
#define IIC_WHBSYSCON_SETTRX_SHIFT      24
#define IIC_WHBSYSCON_CLRSTP_MASK       0x02000000
#define IIC_WHBSYSCON_CLRSTP_SHIFT      25
#define IIC_WHBSYSCON_SETSTP_MASK       0x04000000
#define IIC_WHBSYSCON_SETSTP_SHIFT      26
#define IIC_WHBSYSCON_CLRWMEN_MASK      0x40000000
#define IIC_WHBSYSCON_CLRWMEN_SHIFT     30
#define IIC_WHBSYSCON_SETWMEN_MASK      0x80000000
#define IIC_WHBSYSCON_SETWMEN_SHIFT     31




#endif /* _HAVE_TRICORE_IIC_MASKS_H_ */

