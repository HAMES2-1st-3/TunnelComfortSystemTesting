/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Data Mgmt Unit Receive" of TriCore TC1130B (7 SFRs) */

#include <tc1130b/data_mgmt_unit_receive/addr.h>

#include <tc1130b/data_mgmt_unit_receive/masks.h>
#include <tc1130b/data_mgmt_unit_receive/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/data_mgmt_unit_receive/types.h>
#include <tc1130b/data_mgmt_unit_receive/sharetypes.h>

#ifndef _HAVE_TRICORE_DATA_MGMT_UNIT_RECEIVE_H_
#define _HAVE_TRICORE_DATA_MGMT_UNIT_RECEIVE_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ETH_DRCMD, ETH_DRCMD_t, ETH_DRCMD_ADDR); /* "DR Command Register" */
SFR_NOABS (ETH_DRCONF, ETH_DRCONF_t, ETH_DRCONF_ADDR); /* "DR Configuration Register" */
SFR_NOABS (ETH_DRFFCR, ETH_DRFFCR_t, ETH_DRFFCR_ADDR); /* "DR FIFO Full Counter Register" */
SFR_NOABS (ETH_DRFRDA, ETH_DRFRDA_t, ETH_DRFRDA_ADDR); /* "DR First Rx Descriptor Address Register" */
SFR_NOABS (ETH_DRIMR, ETH_DRIMR_t, ETH_DRIMR_ADDR); /* "DR Interrupt Mask Register" */
SFR_NOABS (ETH_DRISFIFO, ETH_DRISFIFO_t, ETH_DRISFIFO_ADDR); /* "DR Interrupt Status FIFO" */
SFR_NOABS (ETH_DRMOD, ETH_DRMOD_t, ETH_DRMOD_ADDR); /* "DR Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_DATA_MGMT_UNIT_RECEIVE_H_ (block "Data Mgmt Unit Receive") */


