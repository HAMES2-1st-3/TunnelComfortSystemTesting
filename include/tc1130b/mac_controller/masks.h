/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MAC_CONTROLLER_MASKS_H_
#define _HAVE_TRICORE_MAC_CONTROLLER_MASKS_H_


/****************** Masks for ETH_MACCAMADDR_t **********************/
/*
   ETH_MACCAMADDR        "MAC CAM Address Register"
*/
/**********************************************************/

#define ETH_MACCAMADDR_MASK             0x8000003f
#define ETH_MACCAMADDR_ADDR_MASK        0x0000003f
#define ETH_MACCAMADDR_ADDR_SHIFT       0
#define ETH_MACCAMADDR_CAW_MASK         0x80000000
#define ETH_MACCAMADDR_CAW_SHIFT        31



/****************** Masks for ETH_MACCAMCTRL0_t **********************/
/*
   ETH_MACCAMCTRL0       "MAC CAM Ctrl Register 0"
*/
/**********************************************************/

#define ETH_MACCAMCTRL0_MASK            0x0000001f
#define ETH_MACCAMCTRL0_STACC_MASK      0x00000001
#define ETH_MACCAMCTRL0_STACC_SHIFT     0
#define ETH_MACCAMCTRL0_GRPACC_MASK     0x00000002
#define ETH_MACCAMCTRL0_GRPACC_SHIFT    1
#define ETH_MACCAMCTRL0_BRDACC_MASK     0x00000004
#define ETH_MACCAMCTRL0_BRDACC_SHIFT    2
#define ETH_MACCAMCTRL0_NEGCAM_MASK     0x00000008
#define ETH_MACCAMCTRL0_NEGCAM_SHIFT    3
#define ETH_MACCAMCTRL0_CMPEN_MASK      0x00000010
#define ETH_MACCAMCTRL0_CMPEN_SHIFT     4



/****************** Masks for ETH_MACCAMCTRL1_t **********************/
/*
   ETH_MACCAMCTRL1       "MAC CAM Ctrl Register 1"
*/
/**********************************************************/

#define ETH_MACCAMCTRL1_MASK            0x003fffff
#define ETH_MACCAMCTRL1_CEE_MASK        0x003fffff
#define ETH_MACCAMCTRL1_CEE_SHIFT       0



/****************** Masks for ETH_MACCAMDATA_t **********************/
/*
   ETH_MACCAMDATA        "MAC Cam Data Register"
*/
/**********************************************************/

#define ETH_MACCAMDATA_MASK             0xffffffff
#define ETH_MACCAMDATA_CAMDAT_MASK      0xffffffff
#define ETH_MACCAMDATA_CAMDAT_SHIFT     0



/****************** Masks for ETH_MACCTRL_t **********************/
/*
   ETH_MACCTRL           "MAC Ctrl Register"
*/
/**********************************************************/

#define ETH_MACCTRL_MASK                0x0000041f
#define ETH_MACCTRL_HLTREQ_MASK         0x00000001
#define ETH_MACCTRL_HLTREQ_SHIFT        0
#define ETH_MACCTRL_HLTIMM_MASK         0x00000002
#define ETH_MACCTRL_HLTIMM_SHIFT        1
#define ETH_MACCTRL_RESET_MASK          0x00000004
#define ETH_MACCTRL_RESET_SHIFT         2
#define ETH_MACCTRL_FULLDUP_MASK        0x00000008
#define ETH_MACCTRL_FULLDUP_SHIFT       3
#define ETH_MACCTRL_MACLP_MASK          0x00000010
#define ETH_MACCTRL_MACLP_SHIFT         4
#define ETH_MACCTRL_MROLL_MASK          0x00000400
#define ETH_MACCTRL_MROLL_SHIFT         10



/****************** Masks for ETH_MACMERRCNT_t **********************/
/*
   ETH_MACMERRCNT        "MAC Missed Error Count Register"
*/
/**********************************************************/

#define ETH_MACMERRCNT_MASK             0x0000ffff
#define ETH_MACMERRCNT_MERRCNT_MASK     0x0000ffff
#define ETH_MACMERRCNT_MERRCNT_SHIFT    0



/****************** Masks for ETH_MACPSECNT_t **********************/
/*
   ETH_MACPSECNT         "MAC Pause Count Register"
*/
/**********************************************************/

#define ETH_MACPSECNT_MASK              0x0000ffff
#define ETH_MACPSECNT_PSECNT_MASK       0x0000ffff
#define ETH_MACPSECNT_PSECNT_SHIFT      0



/****************** Masks for ETH_MACRPSECNT_t **********************/
/*
   ETH_MACRPSECNT        "MAC Remote Pause Count Register"
*/
/**********************************************************/

#define ETH_MACRPSECNT_MASK             0x0000ffff
#define ETH_MACRPSECNT_RPSECNT_MASK     0x0000ffff
#define ETH_MACRPSECNT_RPSECNT_SHIFT    0



/****************** Masks for ETH_MACRXCTRL_t **********************/
/*
   ETH_MACRXCTRL         "MAC Receive Ctrl Register"
*/
/**********************************************************/

#define ETH_MACRXCTRL_MASK              0x0000007f
#define ETH_MACRXCTRL_RXEN_MASK         0x00000001
#define ETH_MACRXCTRL_RXEN_SHIFT        0
#define ETH_MACRXCTRL_RXHLT_MASK        0x00000002
#define ETH_MACRXCTRL_RXHLT_SHIFT       1
#define ETH_MACRXCTRL_LOEN_MASK         0x00000004
#define ETH_MACRXCTRL_LOEN_SHIFT        2
#define ETH_MACRXCTRL_SHEN_MASK         0x00000008
#define ETH_MACRXCTRL_SHEN_SHIFT        3
#define ETH_MACRXCTRL_STRCRC_MASK       0x00000010
#define ETH_MACRXCTRL_STRCRC_SHIFT      4
#define ETH_MACRXCTRL_PCTLP_MASK        0x00000020
#define ETH_MACRXCTRL_PCTLP_SHIFT       5
#define ETH_MACRXCTRL_IGNCRC_MASK       0x00000040
#define ETH_MACRXCTRL_IGNCRC_SHIFT      6



/****************** Masks for ETH_MACRXSTAT_t **********************/
/*
   ETH_MACRXSTAT         "MAC Receive Status Register"
*/
/**********************************************************/

#define ETH_MACRXSTAT_MASK              0x0000ef20
#define ETH_MACRXSTAT_CTLFRX_MASK       0x00000020
#define ETH_MACRXSTAT_CTLFRX_SHIFT      5
#define ETH_MACRXSTAT_ALIGNE_MASK       0x00000100
#define ETH_MACRXSTAT_ALIGNE_SHIFT      8
#define ETH_MACRXSTAT_CRCE_MASK         0x00000200
#define ETH_MACRXSTAT_CRCE_SHIFT        9
#define ETH_MACRXSTAT_OVER_MASK         0x00000400
#define ETH_MACRXSTAT_OVER_SHIFT        10
#define ETH_MACRXSTAT_LOE_MASK          0x00000800
#define ETH_MACRXSTAT_LOE_SHIFT         11
#define ETH_MACRXSTAT_RXPE_MASK         0x00002000
#define ETH_MACRXSTAT_RXPE_SHIFT        13
#define ETH_MACRXSTAT_GOOD_MASK         0x00004000
#define ETH_MACRXSTAT_GOOD_SHIFT        14
#define ETH_MACRXSTAT_RXHLTD_MASK       0x00008000
#define ETH_MACRXSTAT_RXHLTD_SHIFT      15



/****************** Masks for ETH_MACSMCTRL_t **********************/
/*
   ETH_MACSMCTRL         "MAC Station Management Ctrl Register"
*/
/**********************************************************/

#define ETH_MACSMCTRL_MASK              0x00000fff
#define ETH_MACSMCTRL_ADDR_MASK         0x0000001f
#define ETH_MACSMCTRL_ADDR_SHIFT        0
#define ETH_MACSMCTRL_PHYADDR_MASK      0x000003e0
#define ETH_MACSMCTRL_PHYADDR_SHIFT     5
#define ETH_MACSMCTRL_WR_MASK           0x00000400
#define ETH_MACSMCTRL_WR_SHIFT          10
#define ETH_MACSMCTRL_BUSY_MASK         0x00000800
#define ETH_MACSMCTRL_BUSY_SHIFT        11



/****************** Masks for ETH_MACSMDATA_t **********************/
/*
   ETH_MACSMDATA         "MAC Station Management Data Register"
*/
/**********************************************************/

#define ETH_MACSMDATA_MASK              0x0000ffff
#define ETH_MACSMDATA_SMD_MASK          0x0000ffff
#define ETH_MACSMDATA_SMD_SHIFT         0



/****************** Masks for ETH_MACTXCTRL_t **********************/
/*
   ETH_MACTXCTRL         "MAC Transmit Ctrl Register"
*/
/**********************************************************/

#define ETH_MACTXCTRL_MASK              0x000000ef
#define ETH_MACTXCTRL_TXEN_MASK         0x00000001
#define ETH_MACTXCTRL_TXEN_SHIFT        0
#define ETH_MACTXCTRL_TXHLT_MASK        0x00000002
#define ETH_MACTXCTRL_TXHLT_SHIFT       1
#define ETH_MACTXCTRL_NOPAD_MASK        0x00000004
#define ETH_MACTXCTRL_NOPAD_SHIFT       2
#define ETH_MACTXCTRL_NOCRC_MASK        0x00000008
#define ETH_MACTXCTRL_NOCRC_SHIFT       3
#define ETH_MACTXCTRL_NODEF_MASK        0x00000020
#define ETH_MACTXCTRL_NODEF_SHIFT       5
#define ETH_MACTXCTRL_SDPSE_MASK        0x00000040
#define ETH_MACTXCTRL_SDPSE_SHIFT       6
#define ETH_MACTXCTRL_MII10_MASK        0x00000080
#define ETH_MACTXCTRL_MII10_SHIFT       7



/****************** Masks for ETH_MACTXSTAT_t **********************/
/*
   ETH_MACTXSTAT         "MAC Transmit Status Register"
*/
/**********************************************************/

#define ETH_MACTXSTAT_MASK              0x0001f77f
#define ETH_MACTXSTAT_TXCOLCNT_MASK     0x0000000f
#define ETH_MACTXSTAT_TXCOLCNT_SHIFT    0
#define ETH_MACTXSTAT_XCOL_MASK         0x00000010
#define ETH_MACTXSTAT_XCOL_SHIFT        4
#define ETH_MACTXSTAT_TXDEF_MASK        0x00000020
#define ETH_MACTXSTAT_TXDEF_SHIFT       5
#define ETH_MACTXSTAT_PSE_MASK          0x00000040
#define ETH_MACTXSTAT_PSE_SHIFT         6
#define ETH_MACTXSTAT_UNDER_MASK        0x00000100
#define ETH_MACTXSTAT_UNDER_SHIFT       8
#define ETH_MACTXSTAT_XDEF_MASK         0x00000200
#define ETH_MACTXSTAT_XDEF_SHIFT        9
#define ETH_MACTXSTAT_LCAR_MASK         0x00000400
#define ETH_MACTXSTAT_LCAR_SHIFT        10
#define ETH_MACTXSTAT_LCOL_MASK         0x00001000
#define ETH_MACTXSTAT_LCOL_SHIFT        12
#define ETH_MACTXSTAT_TXP_MASK          0x00002000
#define ETH_MACTXSTAT_TXP_SHIFT         13
#define ETH_MACTXSTAT_CMP_MASK          0x00004000
#define ETH_MACTXSTAT_CMP_SHIFT         14
#define ETH_MACTXSTAT_TXHLTD_MASK       0x00008000
#define ETH_MACTXSTAT_TXHLTD_SHIFT      15
#define ETH_MACTXSTAT_SQERR_MASK        0x00010000
#define ETH_MACTXSTAT_SQERR_SHIFT       16




#endif /* _HAVE_TRICORE_MAC_CONTROLLER_MASKS_H_ */

