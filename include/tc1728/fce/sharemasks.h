/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_FCE_SHAREMASKS_H_
#define _HAVE_TRICORE_FCE_SHAREMASKS_H_


/****************** Masks for FCE_CFGm_t **********************/
/*
   FCE_CFG0              "CRC Configuration Register 0"
   FCE_CFG1              "CRC Configuration Register 1"
*/
/**********************************************************/

#define FCE_CFGm_MASK                   0x0000071f
#define FCE_CFGm_CMI_MASK               0x00000001
#define FCE_CFGm_CMI_SHIFT              0
#define FCE_CFGm_CEI_MASK               0x00000002
#define FCE_CFGm_CEI_SHIFT              1
#define FCE_CFGm_LEI_MASK               0x00000004
#define FCE_CFGm_LEI_SHIFT              2
#define FCE_CFGm_FEI_MASK               0x00000008
#define FCE_CFGm_FEI_SHIFT              3
#define FCE_CFGm_CCE_MASK               0x00000010
#define FCE_CFGm_CCE_SHIFT              4
#define FCE_CFGm_REFIN_MASK             0x00000100
#define FCE_CFGm_REFIN_SHIFT            8
#define FCE_CFGm_REFOUT_MASK            0x00000200
#define FCE_CFGm_REFOUT_SHIFT           9
#define FCE_CFGm_XSEL_MASK              0x00000400
#define FCE_CFGm_XSEL_SHIFT             10



/****************** Masks for FCE_CHECKm_t **********************/
/*
   FCE_CHECK0            "CRC Check Register 0"
   FCE_CHECK1            "CRC Check Register 1"
*/
/**********************************************************/

#define FCE_CHECKm_MASK                 0xffffffff
#define FCE_CHECKm_CHECK_MASK           0xffffffff
#define FCE_CHECKm_CHECK_SHIFT          0



/****************** Masks for FCE_CRCm_t **********************/
/*
   FCE_CRC0              "CRC Register 0"
   FCE_CRC1              "CRC Register 1"
*/
/**********************************************************/

#define FCE_CRCm_MASK                   0xffffffff
#define FCE_CRCm_CRC_MASK               0xffffffff
#define FCE_CRCm_CRC_SHIFT              0



/****************** Masks for FCE_CTRm_t **********************/
/*
   FCE_CTR0              "CRC Test Register 0"
   FCE_CTR1              "CRC Test Register 1"
*/
/**********************************************************/

#define FCE_CTRm_MASK                   0x00000007
#define FCE_CTRm_FCM_MASK               0x00000001
#define FCE_CTRm_FCM_SHIFT              0
#define FCE_CTRm_FRM_CFG_MASK           0x00000002
#define FCE_CTRm_FRM_CFG_SHIFT          1
#define FCE_CTRm_FRM_CHECK_MASK         0x00000004
#define FCE_CTRm_FRM_CHECK_SHIFT        2



/****************** Masks for FCE_IRm_t **********************/
/*
   FCE_IR0               "Input Register 0"
   FCE_IR1               "Input Register 1"
*/
/**********************************************************/

#define FCE_IRm_MASK                    0xffffffff
#define FCE_IRm_IR_MASK                 0xffffffff
#define FCE_IRm_IR_SHIFT                0



/****************** Masks for FCE_LENGTHm_t **********************/
/*
   FCE_LENGTH0           "CRC Length Register 0"
   FCE_LENGTH1           "CRC Length Register 1"
*/
/**********************************************************/

#define FCE_LENGTHm_MASK                0x0000ffff
#define FCE_LENGTHm_LENGTH_MASK         0x0000ffff
#define FCE_LENGTHm_LENGTH_SHIFT        0



/****************** Masks for FCE_RESm_t **********************/
/*
   FCE_RES0              "CRC Result Register 0"
   FCE_RES1              "CRC Result Register 1"
*/
/**********************************************************/

#define FCE_RESm_MASK                   0x00000000



/****************** Masks for FCE_STSm_t **********************/
/*
   FCE_STS0              "CRC Status Register 0"
   FCE_STS1              "CRC Status Register 1"
*/
/**********************************************************/

#define FCE_STSm_MASK                   0x0000000f
#define FCE_STSm_CMF_MASK               0x00000001
#define FCE_STSm_CMF_SHIFT              0
#define FCE_STSm_CEF_MASK               0x00000002
#define FCE_STSm_CEF_SHIFT              1
#define FCE_STSm_LEF_MASK               0x00000004
#define FCE_STSm_LEF_SHIFT              2
#define FCE_STSm_FEF_MASK               0x00000008
#define FCE_STSm_FEF_SHIFT              3




#endif /* _HAVE_TRICORE_FCE_SHAREMASKS_H_ */

