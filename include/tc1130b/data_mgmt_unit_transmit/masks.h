/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DATA_MGMT_UNIT_TRANSMIT_MASKS_H_
#define _HAVE_TRICORE_DATA_MGMT_UNIT_TRANSMIT_MASKS_H_


/****************** Masks for ETH_DTCMD_t **********************/
/*
   ETH_DTCMD             "DT Command Register"
*/
/**********************************************************/

#define ETH_DTCMD_MASK                  0xff000003
#define ETH_DTCMD_CHNO_MASK             0x00000003
#define ETH_DTCMD_CHNO_SHIFT            0
#define ETH_DTCMD_CMDX_MASK             0xff000000
#define ETH_DTCMD_CMDX_SHIFT            24



/****************** Masks for ETH_DTCONF_t **********************/
/*
   ETH_DTCONF            "DT Configuration Register"
*/
/**********************************************************/

#define ETH_DTCONF_MASK                 0x00000002
#define ETH_DTCONF_LBE_MASK             0x00000002
#define ETH_DTCONF_LBE_SHIFT            1



/****************** Masks for ETH_DTCONF3_t **********************/
/*
   ETH_DTCONF3           "DT Configuration 3 Register"
*/
/**********************************************************/

#define ETH_DTCONF3_MASK                0x000f0000
#define ETH_DTCONF3_BL_MASK             0x000f0000
#define ETH_DTCONF3_BL_SHIFT            16



/****************** Masks for ETH_DTFFCR_t **********************/
/*
   ETH_DTFFCR            "DT FIFO Full Counter Register"
*/
/**********************************************************/

#define ETH_DTFFCR_MASK                 0xffffffff
#define ETH_DTFFCR_CNT_MASK             0xffffffff
#define ETH_DTFFCR_CNT_SHIFT            0



/****************** Masks for ETH_DTFTDA_t **********************/
/*
   ETH_DTFTDA            "DT First Tx Descriptor Address Register"
*/
/**********************************************************/

#define ETH_DTFTDA_MASK                 0xfffffffc
#define ETH_DTFTDA_FTDA_MASK            0xfffffffc
#define ETH_DTFTDA_FTDA_SHIFT           2



/****************** Masks for ETH_DTIMR_t **********************/
/*
   ETH_DTIMR             "DT Interrupt Mask Register"
*/
/**********************************************************/

#define ETH_DTIMR_MASK                  0x00000007
#define ETH_DTIMR_CMDC_MASK             0x00000001
#define ETH_DTIMR_CMDC_SHIFT            0
#define ETH_DTIMR_TAB_MASK              0x00000002
#define ETH_DTIMR_TAB_SHIFT             1
#define ETH_DTIMR_HTAB_MASK             0x00000004
#define ETH_DTIMR_HTAB_SHIFT            2



/****************** Masks for ETH_DTISFIFO_t **********************/
/*
   ETH_DTISFIFO          "DT Interrupt Status FIFO"
*/
/**********************************************************/

#define ETH_DTISFIFO_MASK               0x0000ffff
#define ETH_DTISFIFO_CHNO_MASK          0x00000003
#define ETH_DTISFIFO_CHNO_SHIFT         0
#define ETH_DTISFIFO_HTAB_MASK          0x00000004
#define ETH_DTISFIFO_HTAB_SHIFT         2
#define ETH_DTISFIFO_TAB_MASK           0x00000008
#define ETH_DTISFIFO_TAB_SHIFT          3
#define ETH_DTISFIFO_HI_MASK            0x00000010
#define ETH_DTISFIFO_HI_SHIFT           4
#define ETH_DTISFIFO_DESCRID_MASK       0x000007e0
#define ETH_DTISFIFO_DESCRID_SHIFT      5
#define ETH_DTISFIFO_FORMAT_MASK        0x0000f800
#define ETH_DTISFIFO_FORMAT_SHIFT       11




#endif /* _HAVE_TRICORE_DATA_MGMT_UNIT_TRANSMIT_MASKS_H_ */

