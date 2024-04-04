/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_FADC_SHAREMASKS_H_
#define _HAVE_TRICORE_FADC_SHAREMASKS_H_


/****************** Masks for FADC_ACRm_t **********************/
/*
   FADC_ACR0             "Channel 0 Analog Control Register"
   FADC_ACR1             "Channel 1 Analog Control Register"
   FADC_ACR2             "Channel 2 Analog Control Register"
   FADC_ACR3             "Channel 3 Analog Control Register"
*/
/**********************************************************/

#define FADC_ACRm_MASK                  0x0000170f
#define FADC_ACRm_GAIN_MASK             0x00000003
#define FADC_ACRm_GAIN_SHIFT            0
#define FADC_ACRm_ENP_MASK              0x00000004
#define FADC_ACRm_ENP_SHIFT             2
#define FADC_ACRm_ENN_MASK              0x00000008
#define FADC_ACRm_ENN_SHIFT             3
#define FADC_ACRm_CALOFF_2_0_MASK       0x00000700
#define FADC_ACRm_CALOFF_2_0_SHIFT      8
#define FADC_ACRm_CALOFF3_MASK          0x00001000
#define FADC_ACRm_CALOFF3_SHIFT         12



/****************** Masks for FADC_CFGRm_t **********************/
/*
   FADC_CFGR0            "Channel 0 Configuration Register"
   FADC_CFGR1            "Channel 1 Configuration Register"
   FADC_CFGR2            "Channel 2 Configuration Register"
   FADC_CFGR3            "Channel 3 Configuration Register"
*/
/**********************************************************/

#define FADC_CFGRm_MASK                 0xb0ff7fff
#define FADC_CFGRm_GSEL_MASK            0x00000007
#define FADC_CFGRm_GSEL_SHIFT           0
#define FADC_CFGRm_TSEL_MASK            0x00000038
#define FADC_CFGRm_TSEL_SHIFT           3
#define FADC_CFGRm_GM_MASK              0x000000c0
#define FADC_CFGRm_GM_SHIFT             6
#define FADC_CFGRm_TM_MASK              0x00000300
#define FADC_CFGRm_TM_SHIFT             8
#define FADC_CFGRm_CTM_MASK             0x00000c00
#define FADC_CFGRm_CTM_SHIFT            10
#define FADC_CFGRm_CTF_MASK             0x00007000
#define FADC_CFGRm_CTF_SHIFT            12
#define FADC_CFGRm_CTREL_MASK           0x00ff0000
#define FADC_CFGRm_CTREL_SHIFT          16
#define FADC_CFGRm_INP_MASK             0x30000000
#define FADC_CFGRm_INP_SHIFT            28
#define FADC_CFGRm_IEN_MASK             0x80000000
#define FADC_CFGRm_IEN_SHIFT            31



/****************** Masks for FADC_CRRm_t **********************/
/*
   FADC_CRR0             "Filter 0 Current Result Register"
   FADC_CRR1             "Filter 1 Current Result Register"
   FADC_CRR2             "Filter 2 Current Result Register"
   FADC_CRR3             "Filter 3 Current Result Register"
*/
/**********************************************************/

#define FADC_CRRm_MASK                  0x3703ffff
#define FADC_CRRm_CR_MASK               0x0003ffff
#define FADC_CRRm_CR_SHIFT              0
#define FADC_CRRm_AC_MASK               0x07000000
#define FADC_CRRm_AC_SHIFT              24
#define FADC_CRRm_MAVS_MASK             0x30000000
#define FADC_CRRm_MAVS_SHIFT            28



/****************** Masks for FADC_FCRm_t **********************/
/*
   FADC_FCR0             "Filter 0 Control Register"
   FADC_FCR1             "Filter 1 Control Register"
   FADC_FCR2             "Filter 2 Control Register"
   FADC_FCR3             "Filter 3 Control Register"
*/
/**********************************************************/

#define FADC_FCRm_MASK                  0x0000b737
#define FADC_FCRm_ADDL_MASK             0x00000007
#define FADC_FCRm_ADDL_SHIFT            0
#define FADC_FCRm_MAVL_MASK             0x00000030
#define FADC_FCRm_MAVL_SHIFT            4
#define FADC_FCRm_INSEL_MASK            0x00000700
#define FADC_FCRm_INSEL_SHIFT           8
#define FADC_FCRm_INP_MASK              0x00003000
#define FADC_FCRm_INP_SHIFT             12
#define FADC_FCRm_IEN_MASK              0x00008000
#define FADC_FCRm_IEN_SHIFT             15



/****************** Masks for FADC_FRRm_t **********************/
/*
   FADC_FRR1             "Filter 1 Final Result Register"
   FADC_FRR3             "Filter 3 Final Result Register"
*/
/**********************************************************/

#define FADC_FRRm_MASK                  0x000fffff
#define FADC_FRRm_FR_MASK               0x000fffff
#define FADC_FRRm_FR_SHIFT              0



/****************** Masks for FADC_IRRm_t **********************/
/*
   FADC_IRR11            "Filter 1 Intermediate Result Register 1"
   FADC_IRR13            "Filter 3 Intermediate Result Register 1"
*/
/**********************************************************/

#define FADC_IRRm_MASK                  0x0003ffff
#define FADC_IRRm_IR_MASK               0x0003ffff
#define FADC_IRRm_IR_SHIFT              0



/****************** Masks for FADC_RCHm_t **********************/
/*
   FADC_RCH0             "Channel 0 Conversion Result Register"
   FADC_RCH1             "Channel 1 Conversion Result Register"
   FADC_RCH2             "Channel 2 Conversion Result Register"
   FADC_RCH3             "Channel 3 Conversion Result Register"
*/
/**********************************************************/

#define FADC_RCHm_MASK                  0x000003ff
#define FADC_RCHm_ADRES_MASK            0x000003ff
#define FADC_RCHm_ADRES_SHIFT           0



/****************** Masks for FADC_SFRRm_t **********************/
/*
   FADC_SFRR1            "Filter 1 Shifted Final Result Register"
   FADC_SFRR3            "Filter 3 Shifted Final Result Register"
*/
/**********************************************************/

#define FADC_SFRRm_MASK                 0x00007fff
#define FADC_SFRRm_FR_MASK              0x00007fff
#define FADC_SFRRm_FR_SHIFT             0



/****************** Masks for FADC_SRCm_t **********************/
/*
   FADC_SRC0             "Service Request Control Register 0"
   FADC_SRC1             "Service Request Control Register 1"
   FADC_SRC2             "Service Request Control Register 2"
   FADC_SRC3             "Service Request Control Register 3"
*/
/**********************************************************/

#define FADC_SRCm_MASK                  0x0000f4ff
#define FADC_SRCm_SRPN_MASK             0x000000ff
#define FADC_SRCm_SRPN_SHIFT            0
#define FADC_SRCm_TOS_MASK              0x00000400
#define FADC_SRCm_TOS_SHIFT             10
#define FADC_SRCm_SRE_MASK              0x00001000
#define FADC_SRCm_SRE_SHIFT             12
#define FADC_SRCm_SRR_MASK              0x00002000
#define FADC_SRCm_SRR_SHIFT             13
#define FADC_SRCm_CLRR_MASK             0x00004000
#define FADC_SRCm_CLRR_SHIFT            14
#define FADC_SRCm_SETR_MASK             0x00008000
#define FADC_SRCm_SETR_SHIFT            15




#endif /* _HAVE_TRICORE_FADC_SHAREMASKS_H_ */

