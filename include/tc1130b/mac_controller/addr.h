/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MAC Controller" of TriCore TC1130B (22 SFRs) */

#ifndef _HAVE_TRICORE_MAC_CONTROLLER_ADDRESSES_H_
#define _HAVE_TRICORE_MAC_CONTROLLER_ADDRESSES_H_

#define ETH_MACCTRL_ADDR      0xF2000310     /* "MAC Ctrl Register" */
#define ETH_MACCAMCTRL0_ADDR  0xF2000314     /* "MAC CAM Ctrl Register 0" */
#define ETH_MACTXCTRL_ADDR    0xF2000318     /* "MAC Transmit Ctrl Register" */
#define ETH_MACTXSTAT_ADDR    0xF200031C     /* "MAC Transmit Status Register" */
#define ETH_MACRXCTRL_ADDR    0xF2000320     /* "MAC Receive Ctrl Register" */
#define ETH_MACRXSTAT_ADDR    0xF2000324     /* "MAC Receive Status Register" */
#define ETH_MACSMDATA_ADDR    0xF2000328     /* "MAC Station Management Data Register" */
#define ETH_MACSMCTRL_ADDR    0xF200032C     /* "MAC Station Management Ctrl Register" */
#define ETH_MACCAMADDR_ADDR   0xF2000330     /* "MAC CAM Address Register" */
#define ETH_MACCAMDATA_ADDR   0xF2000334     /* "MAC Cam Data Register" */
#define ETH_MACCAMCTRL1_ADDR  0xF2000338     /* "MAC CAM Ctrl Register 1" */
#define ETH_MACMERRCNT_ADDR   0xF200033C     /* "MAC Missed Error Count Register" */
#define ETH_MACPSECNT_ADDR    0xF2000340     /* "MAC Pause Count Register" */
#define ETH_MACRPSECNT_ADDR   0xF2000344     /* "MAC Remote Pause Count Register" */
#define ETH_MACTX0IMR_ADDR    0xF2000348     /* "MAC Transmit 0 Interrupt Mask Register" */
#define ETH_MACTX0ISR_ADDR    0xF200034C     /* "MAC Transmit 0 Interrupt Status Register" */
#define ETH_MACTX1IMR_ADDR    0xF2000350     /* "MAC Transmit 1 Interrupt Mask Register" */
#define ETH_MACTX1ISR_ADDR    0xF2000354     /* "MAC Transmit 1 Interrupt Status Register" */
#define ETH_MACRX0IMR_ADDR    0xF2000368     /* "MAC Receive 0 Interrupt Mask Register" */
#define ETH_MACRX0ISR_ADDR    0xF200036C     /* "MAC Receive 0 Interrupt Status Register" */
#define ETH_MACRX1IMR_ADDR    0xF2000370     /* "MAC Receive 1 Interrupt Mask Register" */
#define ETH_MACRX1ISR_ADDR    0xF2000374     /* "MAC Receive 1 Interrupt Status Register" */


#endif /* _HAVE_TRICORE_MAC_CONTROLLER_ADDRESSES_H_ (block "MAC Controller") */


