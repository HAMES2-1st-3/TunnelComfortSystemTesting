/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Data Mgmt Unit Transmit" of TriCore TC1130B (7 SFRs) */

#include <tc1130b/data_mgmt_unit_transmit/addr.h>

#include <tc1130b/data_mgmt_unit_transmit/masks.h>
#include <tc1130b/data_mgmt_unit_transmit/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/data_mgmt_unit_transmit/types.h>
#include <tc1130b/data_mgmt_unit_transmit/sharetypes.h>

#ifndef _HAVE_TRICORE_DATA_MGMT_UNIT_TRANSMIT_H_
#define _HAVE_TRICORE_DATA_MGMT_UNIT_TRANSMIT_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ETH_DTCMD, ETH_DTCMD_t, ETH_DTCMD_ADDR); /* "DT Command Register" */
SFR_NOABS (ETH_DTCONF, ETH_DTCONF_t, ETH_DTCONF_ADDR); /* "DT Configuration Register" */
SFR_NOABS (ETH_DTCONF3, ETH_DTCONF3_t, ETH_DTCONF3_ADDR); /* "DT Configuration 3 Register" */
SFR_NOABS (ETH_DTFFCR, ETH_DTFFCR_t, ETH_DTFFCR_ADDR); /* "DT FIFO Full Counter Register" */
SFR_NOABS (ETH_DTFTDA, ETH_DTFTDA_t, ETH_DTFTDA_ADDR); /* "DT First Tx Descriptor Address Register" */
SFR_NOABS (ETH_DTIMR, ETH_DTIMR_t, ETH_DTIMR_ADDR); /* "DT Interrupt Mask Register" */
SFR_NOABS (ETH_DTISFIFO, ETH_DTISFIFO_t, ETH_DTISFIFO_ADDR); /* "DT Interrupt Status FIFO" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_DATA_MGMT_UNIT_TRANSMIT_H_ (block "Data Mgmt Unit Transmit") */


