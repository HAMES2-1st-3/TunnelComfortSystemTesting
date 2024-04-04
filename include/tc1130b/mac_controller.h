/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MAC Controller" of TriCore TC1130B (22 SFRs) */

#include <tc1130b/mac_controller/addr.h>

#include <tc1130b/mac_controller/masks.h>
#include <tc1130b/mac_controller/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/mac_controller/types.h>
#include <tc1130b/mac_controller/sharetypes.h>

#ifndef _HAVE_TRICORE_MAC_CONTROLLER_H_
#define _HAVE_TRICORE_MAC_CONTROLLER_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ETH_MACCAMADDR, ETH_MACCAMADDR_t, ETH_MACCAMADDR_ADDR); /* "MAC CAM Address Register" */
SFR_NOABS (ETH_MACCAMCTRL0, ETH_MACCAMCTRL0_t, ETH_MACCAMCTRL0_ADDR); /* "MAC CAM Ctrl Register 0" */
SFR_NOABS (ETH_MACCAMCTRL1, ETH_MACCAMCTRL1_t, ETH_MACCAMCTRL1_ADDR); /* "MAC CAM Ctrl Register 1" */
SFR_NOABS (ETH_MACCAMDATA, ETH_MACCAMDATA_t, ETH_MACCAMDATA_ADDR); /* "MAC Cam Data Register" */
SFR_NOABS (ETH_MACCTRL, ETH_MACCTRL_t, ETH_MACCTRL_ADDR); /* "MAC Ctrl Register" */
SFR_NOABS (ETH_MACMERRCNT, ETH_MACMERRCNT_t, ETH_MACMERRCNT_ADDR); /* "MAC Missed Error Count Register" */
SFR_NOABS (ETH_MACPSECNT, ETH_MACPSECNT_t, ETH_MACPSECNT_ADDR); /* "MAC Pause Count Register" */
SFR_NOABS (ETH_MACRPSECNT, ETH_MACRPSECNT_t, ETH_MACRPSECNT_ADDR); /* "MAC Remote Pause Count Register" */
SFR_NOABS (ETH_MACRX0IMR, ETH_MACRXmIMR_t, ETH_MACRX0IMR_ADDR); /* "MAC Receive 0 Interrupt Mask Register" */
SFR_NOABS (ETH_MACRX0ISR, ETH_MACRXmISR_t, ETH_MACRX0ISR_ADDR); /* "MAC Receive 0 Interrupt Status Register" */
SFR_NOABS (ETH_MACRX1IMR, ETH_MACRXmIMR_t, ETH_MACRX1IMR_ADDR); /* "MAC Receive 1 Interrupt Mask Register" */
SFR_NOABS (ETH_MACRX1ISR, ETH_MACRXmISR_t, ETH_MACRX1ISR_ADDR); /* "MAC Receive 1 Interrupt Status Register" */
SFR_NOABS (ETH_MACRXCTRL, ETH_MACRXCTRL_t, ETH_MACRXCTRL_ADDR); /* "MAC Receive Ctrl Register" */
SFR_NOABS (ETH_MACRXSTAT, ETH_MACRXSTAT_t, ETH_MACRXSTAT_ADDR); /* "MAC Receive Status Register" */
SFR_NOABS (ETH_MACSMCTRL, ETH_MACSMCTRL_t, ETH_MACSMCTRL_ADDR); /* "MAC Station Management Ctrl Register" */
SFR_NOABS (ETH_MACSMDATA, ETH_MACSMDATA_t, ETH_MACSMDATA_ADDR); /* "MAC Station Management Data Register" */
SFR_NOABS (ETH_MACTX0IMR, ETH_MACTXmIMR_t, ETH_MACTX0IMR_ADDR); /* "MAC Transmit 0 Interrupt Mask Register" */
SFR_NOABS (ETH_MACTX0ISR, ETH_MACTXmISR_t, ETH_MACTX0ISR_ADDR); /* "MAC Transmit 0 Interrupt Status Register" */
SFR_NOABS (ETH_MACTX1IMR, ETH_MACTXmIMR_t, ETH_MACTX1IMR_ADDR); /* "MAC Transmit 1 Interrupt Mask Register" */
SFR_NOABS (ETH_MACTX1ISR, ETH_MACTXmISR_t, ETH_MACTX1ISR_ADDR); /* "MAC Transmit 1 Interrupt Status Register" */
SFR_NOABS (ETH_MACTXCTRL, ETH_MACTXCTRL_t, ETH_MACTXCTRL_ADDR); /* "MAC Transmit Ctrl Register" */
SFR_NOABS (ETH_MACTXSTAT, ETH_MACTXSTAT_t, ETH_MACTXSTAT_ADDR); /* "MAC Transmit Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MAC_CONTROLLER_H_ (block "MAC Controller") */


