/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DATA_MGMT_UNIT_RECEIVE_MASKS_H_
#define _HAVE_TRICORE_DATA_MGMT_UNIT_RECEIVE_MASKS_H_


/****************** Masks for ETH_DRCMD_t **********************/
/*
   ETH_DRCMD             "DR Command Register"
*/
/**********************************************************/

#define ETH_DRCMD_MASK                  0x00ff0003
#define ETH_DRCMD_CHNO_MASK             0x00000003
#define ETH_DRCMD_CHNO_SHIFT            0
#define ETH_DRCMD_CMDREC_MASK           0x00ff0000
#define ETH_DRCMD_CMDREC_SHIFT          16



/****************** Masks for ETH_DRCONF_t **********************/
/*
   ETH_DRCONF            "DR Configuration Register"
*/
/**********************************************************/

#define ETH_DRCONF_MASK                 0x00000003
#define ETH_DRCONF_ENA_MASK             0x00000001
#define ETH_DRCONF_ENA_SHIFT            0
#define ETH_DRCONF_LBE_MASK             0x00000002
#define ETH_DRCONF_LBE_SHIFT            1



/****************** Masks for ETH_DRFFCR_t **********************/
/*
   ETH_DRFFCR            "DR FIFO Full Counter Register"
*/
/**********************************************************/

#define ETH_DRFFCR_MASK                 0xffffffff
#define ETH_DRFFCR_CNT_MASK             0xffffffff
#define ETH_DRFFCR_CNT_SHIFT            0



/****************** Masks for ETH_DRFRDA_t **********************/
/*
   ETH_DRFRDA            "DR First Rx Descriptor Address Register"
*/
/**********************************************************/

#define ETH_DRFRDA_MASK                 0xc0000000
#define ETH_DRFRDA_FRDA_MASK            0xc0000000
#define ETH_DRFRDA_FRDA_SHIFT           30



/****************** Masks for ETH_DRIMR_t **********************/
/*
   ETH_DRIMR             "DR Interrupt Mask Register"
*/
/**********************************************************/

#define ETH_DRIMR_MASK                  0x00007f05
#define ETH_DRIMR_CMDC_MASK             0x00000001
#define ETH_DRIMR_CMDC_SHIFT            0
#define ETH_DRIMR_SD_MASK               0x00000004
#define ETH_DRIMR_SD_SHIFT              2
#define ETH_DRIMR_ILEN_MASK             0x00000100
#define ETH_DRIMR_ILEN_SHIFT            8
#define ETH_DRIMR_CRC_MASK              0x00000200
#define ETH_DRIMR_CRC_SHIFT             9
#define ETH_DRIMR_RFOD_MASK             0x00000400
#define ETH_DRIMR_RFOD_SHIFT            10
#define ETH_DRIMR_MFL_MASK              0x00000800
#define ETH_DRIMR_MFL_SHIFT             11
#define ETH_DRIMR_HRAB_MASK             0x00001000
#define ETH_DRIMR_HRAB_SHIFT            12
#define ETH_DRIMR_FE_MASK               0x00002000
#define ETH_DRIMR_FE_SHIFT              13
#define ETH_DRIMR_RAB_MASK              0x00004000
#define ETH_DRIMR_RAB_SHIFT             14



/****************** Masks for ETH_DRISFIFO_t **********************/
/*
   ETH_DRISFIFO          "DR Interrupt Status FIFO"
*/
/**********************************************************/

#define ETH_DRISFIFO_MASK               0xf83fff83
#define ETH_DRISFIFO_CHNO_MASK          0x00000003
#define ETH_DRISFIFO_CHNO_SHIFT         0
#define ETH_DRISFIFO_SD_MASK            0x00000080
#define ETH_DRISFIFO_SD_SHIFT           7
#define ETH_DRISFIFO_ILEN_MASK          0x00000100
#define ETH_DRISFIFO_ILEN_SHIFT         8
#define ETH_DRISFIFO_CRC_MASK           0x00000200
#define ETH_DRISFIFO_CRC_SHIFT          9
#define ETH_DRISFIFO_RFOD_MASK          0x00000400
#define ETH_DRISFIFO_RFOD_SHIFT         10
#define ETH_DRISFIFO_MFL_MASK           0x00000800
#define ETH_DRISFIFO_MFL_SHIFT          11
#define ETH_DRISFIFO_HRAB_MASK          0x00001000
#define ETH_DRISFIFO_HRAB_SHIFT         12
#define ETH_DRISFIFO_FE_MASK            0x00002000
#define ETH_DRISFIFO_FE_SHIFT           13
#define ETH_DRISFIFO_RAB_MASK           0x00004000
#define ETH_DRISFIFO_RAB_SHIFT          14
#define ETH_DRISFIFO_HI_MASK            0x00008000
#define ETH_DRISFIFO_HI_SHIFT           15
#define ETH_DRISFIFO_DESCRID_MASK       0x003f0000
#define ETH_DRISFIFO_DESCRID_SHIFT      16
#define ETH_DRISFIFO_FORMAT_MASK        0xf8000000
#define ETH_DRISFIFO_FORMAT_SHIFT       27



/****************** Masks for ETH_DRMOD_t **********************/
/*
   ETH_DRMOD             "DR Mode Register"
*/
/**********************************************************/

#define ETH_DRMOD_MASK                  0x00000003
#define ETH_DRMOD_FM_MASK               0x00000003
#define ETH_DRMOD_FM_SHIFT              0




#endif /* _HAVE_TRICORE_DATA_MGMT_UNIT_RECEIVE_MASKS_H_ */

