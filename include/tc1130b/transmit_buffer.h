/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Transmit Buffer" of TriCore TC1130B (3 SFRs) */

#include <tc1130b/transmit_buffer/addr.h>

#include <tc1130b/transmit_buffer/masks.h>
#include <tc1130b/transmit_buffer/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/transmit_buffer/types.h>
#include <tc1130b/transmit_buffer/sharetypes.h>

#ifndef _HAVE_TRICORE_TRANSMIT_BUFFER_H_
#define _HAVE_TRICORE_TRANSMIT_BUFFER_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ETH_TBCC, ETH_TBCC_t, ETH_TBCC_ADDR);  /* "TB Channel Command Register" */
SFR_NOABS (ETH_TBCPR, ETH_TBCPR_t, ETH_TBCPR_ADDR); /* "TB Channel Parameter Register" */
SFR_NOABS (ETH_TBISR, ETH_TBISR_t, ETH_TBISR_ADDR); /* "TB Interrupt Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_TRANSMIT_BUFFER_H_ (block "Transmit Buffer") */


