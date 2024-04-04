/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_RECEIVE_BUFFER_MASKS_H_
#define _HAVE_TRICORE_RECEIVE_BUFFER_MASKS_H_


/****************** Masks for ETH_RBCBL_t **********************/
/*
   ETH_RBCBL             "RB Channel Burst Length Register"
*/
/**********************************************************/

#define ETH_RBCBL_MASK                  0x00000003
#define ETH_RBCBL_FTC_MASK              0x00000003
#define ETH_RBCBL_FTC_SHIFT             0



/****************** Masks for ETH_RBCC_t **********************/
/*
   ETH_RBCC              "RB Channel Command Register"
*/
/**********************************************************/

#define ETH_RBCC_MASK                   0x00ff0003
#define ETH_RBCC_CHID_MASK              0x00000003
#define ETH_RBCC_CHID_SHIFT             0
#define ETH_RBCC_CMD_MASK               0x00ff0000
#define ETH_RBCC_CMD_SHIFT              16



/****************** Masks for ETH_RBFPCNT_t **********************/
/*
   ETH_RBFPCNT           "RB Free Pool Count Register"
*/
/**********************************************************/

#define ETH_RBFPCNT_MASK                0x003f00ff
#define ETH_RBFPCNT_RBFPC_MASK          0x000000ff
#define ETH_RBFPCNT_RBFPC_SHIFT         0
#define ETH_RBFPCNT_RBAQC_MASK          0x003f0000
#define ETH_RBFPCNT_RBAQC_SHIFT         16



/****************** Masks for ETH_RBFPM_t **********************/
/*
   ETH_RBFPM             "Free Pool Monitor Register"
*/
/**********************************************************/

#define ETH_RBFPM_MASK                  0x00000024
#define ETH_RBFPM_FPMM_MASK             0x00000004
#define ETH_RBFPM_FPMM_SHIFT            2
#define ETH_RBFPM_IM_MASK               0x00000020
#define ETH_RBFPM_IM_SHIFT              5



/****************** Masks for ETH_RBFPTH_t **********************/
/*
   ETH_RBFPTH            "RB Free Pool Threshold Register"
*/
/**********************************************************/

#define ETH_RBFPTH_MASK                 0x003f00ff
#define ETH_RBFPTH_RBDBTH_MASK          0x000000ff
#define ETH_RBFPTH_RBDBTH_SHIFT         0
#define ETH_RBFPTH_RBAQTH_MASK          0x003f0000
#define ETH_RBFPTH_RBAQTH_SHIFT         16




#endif /* _HAVE_TRICORE_RECEIVE_BUFFER_MASKS_H_ */

