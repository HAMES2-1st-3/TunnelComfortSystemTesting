/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_TRANSMIT_BUFFER_MASKS_H_
#define _HAVE_TRICORE_TRANSMIT_BUFFER_MASKS_H_


/****************** Masks for ETH_TBCC_t **********************/
/*
   ETH_TBCC              "TB Channel Command Register"
*/
/**********************************************************/

#define ETH_TBCC_MASK                   0xff000003
#define ETH_TBCC_CHID_MASK              0x00000003
#define ETH_TBCC_CHID_SHIFT             0
#define ETH_TBCC_CMD_MASK               0xff000000
#define ETH_TBCC_CMD_SHIFT              24



/****************** Masks for ETH_TBCPR_t **********************/
/*
   ETH_TBCPR             "TB Channel Parameter Register"
*/
/**********************************************************/

#define ETH_TBCPR_MASK                  0x00ff7700
#define ETH_TBCPR_RTC_MASK              0x00000700
#define ETH_TBCPR_RTC_SHIFT             8
#define ETH_TBCPR_FTC_MASK              0x00007000
#define ETH_TBCPR_FTC_SHIFT             12
#define ETH_TBCPR_ITBS_MASK             0x00ff0000
#define ETH_TBCPR_ITBS_SHIFT            16



/****************** Masks for ETH_TBISR_t **********************/
/*
   ETH_TBISR             "TB Interrupt Status Register"
*/
/**********************************************************/

#define ETH_TBISR_MASK                  0x00020003
#define ETH_TBISR_CHID_MASK             0x00000003
#define ETH_TBISR_CHID_SHIFT            0
#define ETH_TBISR_CMDF_MASK             0x00020000
#define ETH_TBISR_CMDF_SHIFT            17




#endif /* _HAVE_TRICORE_TRANSMIT_BUFFER_MASKS_H_ */

