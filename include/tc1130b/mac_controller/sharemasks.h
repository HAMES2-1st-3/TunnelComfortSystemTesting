/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MAC_CONTROLLER_SHAREMASKS_H_
#define _HAVE_TRICORE_MAC_CONTROLLER_SHAREMASKS_H_


/****************** Masks for ETH_MACRXmIMR_t **********************/
/*
   ETH_MACRX0IMR         "MAC Receive 0 Interrupt Mask Register"
   ETH_MACRX1IMR         "MAC Receive 1 Interrupt Mask Register"
*/
/**********************************************************/

#define ETH_MACRXmIMR_MASK              0xff800000
#define ETH_MACRXmIMR_MROLL_MASK        0x00800000
#define ETH_MACRXmIMR_MROLL_SHIFT       23
#define ETH_MACRXmIMR_CTLFRX_MASK       0x01000000
#define ETH_MACRXmIMR_CTLFRX_SHIFT      24
#define ETH_MACRXmIMR_ALIGNE_MASK       0x02000000
#define ETH_MACRXmIMR_ALIGNE_SHIFT      25
#define ETH_MACRXmIMR_CRCE_MASK         0x04000000
#define ETH_MACRXmIMR_CRCE_SHIFT        26
#define ETH_MACRXmIMR_OVER_MASK         0x08000000
#define ETH_MACRXmIMR_OVER_SHIFT        27
#define ETH_MACRXmIMR_LOE_MASK          0x10000000
#define ETH_MACRXmIMR_LOE_SHIFT         28
#define ETH_MACRXmIMR_RXPE_MASK         0x20000000
#define ETH_MACRXmIMR_RXPE_SHIFT        29
#define ETH_MACRXmIMR_GOOD_MASK         0x40000000
#define ETH_MACRXmIMR_GOOD_SHIFT        30
#define ETH_MACRXmIMR_RXHLTD_MASK       0x80000000
#define ETH_MACRXmIMR_RXHLTD_SHIFT      31



/****************** Masks for ETH_MACRXmISR_t **********************/
/*
   ETH_MACRX0ISR         "MAC Receive 0 Interrupt Status Register"
   ETH_MACRX1ISR         "MAC Receive 1 Interrupt Status Register"
*/
/**********************************************************/

#define ETH_MACRXmISR_MASK              0xff800000
#define ETH_MACRXmISR_MROLL_MASK        0x00800000
#define ETH_MACRXmISR_MROLL_SHIFT       23
#define ETH_MACRXmISR_CTLFRX_MASK       0x01000000
#define ETH_MACRXmISR_CTLFRX_SHIFT      24
#define ETH_MACRXmISR_ALIGNE_MASK       0x02000000
#define ETH_MACRXmISR_ALIGNE_SHIFT      25
#define ETH_MACRXmISR_CRCE_MASK         0x04000000
#define ETH_MACRXmISR_CRCE_SHIFT        26
#define ETH_MACRXmISR_OVER_MASK         0x08000000
#define ETH_MACRXmISR_OVER_SHIFT        27
#define ETH_MACRXmISR_LOE_MASK          0x10000000
#define ETH_MACRXmISR_LOE_SHIFT         28
#define ETH_MACRXmISR_RXPE_MASK         0x20000000
#define ETH_MACRXmISR_RXPE_SHIFT        29
#define ETH_MACRXmISR_GOOD_MASK         0x40000000
#define ETH_MACRXmISR_GOOD_SHIFT        30
#define ETH_MACRXmISR_RXHLTD_MASK       0x80000000
#define ETH_MACRXmISR_RXHLTD_SHIFT      31



/****************** Masks for ETH_MACTXmIMR_t **********************/
/*
   ETH_MACTX0IMR         "MAC Transmit 0 Interrupt Mask Register"
   ETH_MACTX1IMR         "MAC Transmit 1 Interrupt Mask Register"
*/
/**********************************************************/

#define ETH_MACTXmIMR_MASK              0x0000fff0
#define ETH_MACTXmIMR_XCOL_MASK         0x00000010
#define ETH_MACTXmIMR_XCOL_SHIFT        4
#define ETH_MACTXmIMR_TXDEF_MASK        0x00000020
#define ETH_MACTXmIMR_TXDEF_SHIFT       5
#define ETH_MACTXmIMR_PAUSE_MASK        0x00000040
#define ETH_MACTXmIMR_PAUSE_SHIFT       6
#define ETH_MACTXmIMR_PSE_MASK          0x00000080
#define ETH_MACTXmIMR_PSE_SHIFT         7
#define ETH_MACTXmIMR_UNDER_MASK        0x00000100
#define ETH_MACTXmIMR_UNDER_SHIFT       8
#define ETH_MACTXmIMR_XDEF_MASK         0x00000200
#define ETH_MACTXmIMR_XDEF_SHIFT        9
#define ETH_MACTXmIMR_LCAR_MASK         0x00000400
#define ETH_MACTXmIMR_LCAR_SHIFT        10
#define ETH_MACTXmIMR_LCOL_MASK         0x00000800
#define ETH_MACTXmIMR_LCOL_SHIFT        11
#define ETH_MACTXmIMR_TXP_MASK          0x00001000
#define ETH_MACTXmIMR_TXP_SHIFT         12
#define ETH_MACTXmIMR_CMP_MASK          0x00002000
#define ETH_MACTXmIMR_CMP_SHIFT         13
#define ETH_MACTXmIMR_TXHLTD_MASK       0x00004000
#define ETH_MACTXmIMR_TXHLTD_SHIFT      14
#define ETH_MACTXmIMR_SQERR_MASK        0x00008000
#define ETH_MACTXmIMR_SQERR_SHIFT       15



/****************** Masks for ETH_MACTXmISR_t **********************/
/*
   ETH_MACTX0ISR         "MAC Transmit 0 Interrupt Status Register"
   ETH_MACTX1ISR         "MAC Transmit 1 Interrupt Status Register"
*/
/**********************************************************/

#define ETH_MACTXmISR_MASK              0x0000ffff
#define ETH_MACTXmISR_TXCOLCNT_MASK     0x0000000f
#define ETH_MACTXmISR_TXCOLCNT_SHIFT    0
#define ETH_MACTXmISR_XCOL_MASK         0x00000010
#define ETH_MACTXmISR_XCOL_SHIFT        4
#define ETH_MACTXmISR_TXDEF_MASK        0x00000020
#define ETH_MACTXmISR_TXDEF_SHIFT       5
#define ETH_MACTXmISR_PAUSE_MASK        0x00000040
#define ETH_MACTXmISR_PAUSE_SHIFT       6
#define ETH_MACTXmISR_PSE_MASK          0x00000080
#define ETH_MACTXmISR_PSE_SHIFT         7
#define ETH_MACTXmISR_UNDER_MASK        0x00000100
#define ETH_MACTXmISR_UNDER_SHIFT       8
#define ETH_MACTXmISR_XDEF_MASK         0x00000200
#define ETH_MACTXmISR_XDEF_SHIFT        9
#define ETH_MACTXmISR_LCAR_MASK         0x00000400
#define ETH_MACTXmISR_LCAR_SHIFT        10
#define ETH_MACTXmISR_LCOL_MASK         0x00000800
#define ETH_MACTXmISR_LCOL_SHIFT        11
#define ETH_MACTXmISR_TXP_MASK          0x00001000
#define ETH_MACTXmISR_TXP_SHIFT         12
#define ETH_MACTXmISR_CMP_MASK          0x00002000
#define ETH_MACTXmISR_CMP_SHIFT         13
#define ETH_MACTXmISR_TXHLTD_MASK       0x00004000
#define ETH_MACTXmISR_TXHLTD_SHIFT      14
#define ETH_MACTXmISR_SQERR_MASK        0x00008000
#define ETH_MACTXmISR_SQERR_SHIFT       15




#endif /* _HAVE_TRICORE_MAC_CONTROLLER_SHAREMASKS_H_ */

