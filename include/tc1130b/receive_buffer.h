/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Receive Buffer" of TriCore TC1130B (5 SFRs) */

#include <tc1130b/receive_buffer/addr.h>

#include <tc1130b/receive_buffer/masks.h>
#include <tc1130b/receive_buffer/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/receive_buffer/types.h>
#include <tc1130b/receive_buffer/sharetypes.h>

#ifndef _HAVE_TRICORE_RECEIVE_BUFFER_H_
#define _HAVE_TRICORE_RECEIVE_BUFFER_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ETH_RBCBL, ETH_RBCBL_t, ETH_RBCBL_ADDR); /* "RB Channel Burst Length Register" */
SFR_NOABS (ETH_RBCC, ETH_RBCC_t, ETH_RBCC_ADDR);  /* "RB Channel Command Register" */
SFR_NOABS (ETH_RBFPCNT, ETH_RBFPCNT_t, ETH_RBFPCNT_ADDR); /* "RB Free Pool Count Register" */
SFR_NOABS (ETH_RBFPM, ETH_RBFPM_t, ETH_RBFPM_ADDR); /* "Free Pool Monitor Register" */
SFR_NOABS (ETH_RBFPTH, ETH_RBFPTH_t, ETH_RBFPTH_ADDR); /* "RB Free Pool Threshold Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_RECEIVE_BUFFER_H_ (block "Receive Buffer") */


