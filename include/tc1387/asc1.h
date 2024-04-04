/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ASC1" of TriCore TC1387 (12 SFRs) */

#include <tc1387/asc1/addr.h>

#include <tc1387/asc1/masks.h>
#include <tc1387/asc0_asc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1387/asc1/types.h>
#include <tc1387/asc0_asc1/sharetypes.h>

#ifndef _HAVE_TRICORE_ASC1_H_
#define _HAVE_TRICORE_ASC1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (ASC1_BG, ASCn_BG_t, ASC1_BG_ADDR);       /* "Baud Rate Timer/Reload Register" */
SFR_ABS (ASC1_CON, ASCn_CON_t, ASC1_CON_ADDR);    /* "Control Register" */
SFR_ABS (ASC1_ESRC, ASCn_ESRC_t, ASC1_ESRC_ADDR); /* "Error Interrupt Service Request Control Register" */
SFR_ABS (ASC1_FDV, ASCn_FDV_t, ASC1_FDV_ADDR);    /* "Fractional Divider Register" */
SFR_ABS (ASC1_ID, ASCn_ID_t, ASC1_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (ASC1_PISEL, ASCn_PISEL_t, ASC1_PISEL_ADDR); /* "ASC1 Peripheral Input Select Register" */
SFR_ABS (ASC1_RBUF, ASCn_RBUF_t, ASC1_RBUF_ADDR); /* "Receive Buffer Register" */
SFR_ABS (ASC1_RSRC, ASCn_RSRC_t, ASC1_RSRC_ADDR); /* "Receive Interrupt Service Request Control Register" */
SFR_ABS (ASC1_TBSRC, ASCn_TBSRC_t, ASC1_TBSRC_ADDR); /* "Transmit Buffer Interrupt Service Request Control Register" */
SFR_ABS (ASC1_TBUF, ASCn_TBUF_t, ASC1_TBUF_ADDR); /* "Transmit Buffer Register" */
SFR_ABS (ASC1_TSRC, ASCn_TSRC_t, ASC1_TSRC_ADDR); /* "Transmit Interrupt Service Request Control Register" */
SFR_ABS (ASC1_WHBCON, ASCn_WHBCON_t, ASC1_WHBCON_ADDR); /* "Write Hardware Bits Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ASC1_H_ (block "ASC1") */


