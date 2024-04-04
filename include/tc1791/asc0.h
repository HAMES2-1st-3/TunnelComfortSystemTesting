/* (c) HighTec EDV-Systeme GmbH */

/* block "ASC0" of TriCore TC1791 (13 SFRs) */

#include <tc1791/asc0/addr.h>

#include <tc1791/asc0/masks.h>
#include <tc1791/asc0-1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/asc0/types.h>
#include <tc1791/asc0-1/sharetypes.h>

#ifndef _HAVE_TRICORE_ASC0_H_
#define _HAVE_TRICORE_ASC0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (ASC0_BG, ASCn_BG_t, ASC0_BG_ADDR);       /* "Baud Rate Timer/Reload Register" */
SFR_ABS (ASC0_CLC, ASC0_CLC_t, ASC0_CLC_ADDR);    /* "ASC0 Clock Control Register" */
SFR_ABS (ASC0_CON, ASCn_CON_t, ASC0_CON_ADDR);    /* "Control Register" */
SFR_ABS (ASC0_ESRC, ASCn_ESRC_t, ASC0_ESRC_ADDR); /* "Error Interrupt Service Request Control Register" */
SFR_ABS (ASC0_FDV, ASCn_FDV_t, ASC0_FDV_ADDR);    /* "Fractional Divider Register" */
SFR_ABS (ASC0_ID, ASCn_ID_t, ASC0_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (ASC0_PISEL, ASCn_PISEL_t, ASC0_PISEL_ADDR); /* "ASC0 Peripheral Input Select Register" */
SFR_ABS (ASC0_RBUF, ASCn_RBUF_t, ASC0_RBUF_ADDR); /* "Receive Buffer Register" */
SFR_ABS (ASC0_RSRC, ASCn_RSRC_t, ASC0_RSRC_ADDR); /* "Receive Interrupt Service Request Control Register" */
SFR_ABS (ASC0_TBSRC, ASCn_TBSRC_t, ASC0_TBSRC_ADDR); /* "Transmit Buffer Interrupt Service Request Control Register" */
SFR_ABS (ASC0_TBUF, ASCn_TBUF_t, ASC0_TBUF_ADDR); /* "Transmit Buffer Register" */
SFR_ABS (ASC0_TSRC, ASCn_TSRC_t, ASC0_TSRC_ADDR); /* "Transmit Interrupt Service Request Control Register" */
SFR_ABS (ASC0_WHBCON, ASCn_WHBCON_t, ASC0_WHBCON_ADDR); /* "Write Hardware Bits Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ASC0_H_ (block "ASC0") */


