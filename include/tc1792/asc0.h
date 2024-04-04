/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC0" of TriCore TC1792 (13 SFRs) */

#include <tc1792/asc0/addr.h>

#include <tc1792/asc0/masks.h>
#include <tc1792/asc0_asc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/asc0/types.h>
#include <tc1792/asc0_asc1/sharetypes.h>

#ifndef _HAVE_TRICORE_ASC0_H_
#define _HAVE_TRICORE_ASC0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (ASC0_BG, ASCn_BG_t, ASC0_BG_ADDR);       /* "ASC0 Baud Rate Timer Reload Register" */
SFR_ABS (ASC0_CLC, ASC0_CLC_t, ASC0_CLC_ADDR);    /* "ASC0 Clock Control Register" */
SFR_ABS (ASC0_CON, ASCn_CON_t, ASC0_CON_ADDR);    /* "ASC0 Control Register" */
SFR_ABS (ASC0_ESRC, ASCn_ESRC_t, ASC0_ESRC_ADDR); /* "ASC0 Error Interrupt Service Request Control Register" */
SFR_ABS (ASC0_FDV, ASCn_FDV_t, ASC0_FDV_ADDR);    /* "ASC0 Fractional Divider Register" */
SFR_ABS (ASC0_ID, ASCn_ID_t, ASC0_ID_ADDR);       /* "ASC0 Module Identification Register" */
SFR_ABS (ASC0_PISEL, ASCn_PISEL_t, ASC0_PISEL_ADDR); /* "ASC0 Peripheral Input Select Register" */
SFR_ABS (ASC0_RBUF, ASCn_RBUF_t, ASC0_RBUF_ADDR); /* "ASC0 Receive Buffer Register" */
SFR_ABS (ASC0_RSRC, ASCn_RSRC_t, ASC0_RSRC_ADDR); /* "ASC0 Receive Interrupt Service Request Control Register" */
SFR_ABS (ASC0_TBSRC, ASCn_TBSRC_t, ASC0_TBSRC_ADDR); /* "ASC0 Transmit Buffer Interrupt Service Request Control Register" */
SFR_ABS (ASC0_TBUF, ASCn_TBUF_t, ASC0_TBUF_ADDR); /* "ASC0 Transmit Buffer Register" */
SFR_ABS (ASC0_TSRC, ASCn_TSRC_t, ASC0_TSRC_ADDR); /* "ASC0 Transmit Interrupt Service Request Control Register" */
SFR_ABS (ASC0_WHBCON, ASCn_WHBCON_t, ASC0_WHBCON_ADDR); /* "ASC0 Write Hardware Bits Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ASC0_H_ (block "ASC0") */


