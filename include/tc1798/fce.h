/* (c) HighTec EDV-Systeme GmbH */

/* block "FCE" of TriCore TC1798 (19 SFRs) */

#include <tc1798/fce/addr.h>

#include <tc1798/fce/masks.h>
#include <tc1798/fce/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/fce/types.h>
#include <tc1798/fce/sharetypes.h>

#ifndef _HAVE_TRICORE_FCE_H_
#define _HAVE_TRICORE_FCE_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (FCE_CFG0, FCE_CFGm_t, FCE_CFG0_ADDR);  /* "CRC Configuration Register 0" */
SFR_NOABS (FCE_CFG1, FCE_CFGm_t, FCE_CFG1_ADDR);  /* "CRC Configuration Register 1" */
SFR_NOABS (FCE_CHECK0, FCE_CHECKm_t, FCE_CHECK0_ADDR); /* "CRC Check Register 0" */
SFR_NOABS (FCE_CHECK1, FCE_CHECKm_t, FCE_CHECK1_ADDR); /* "CRC Check Register 1" */
SFR_NOABS (FCE_CLC, FCE_CLC_t, FCE_CLC_ADDR);     /* "Control Clock Register" */
SFR_NOABS (FCE_CRC0, FCE_CRCm_t, FCE_CRC0_ADDR);  /* "CRC Register 0" */
SFR_NOABS (FCE_CRC1, FCE_CRCm_t, FCE_CRC1_ADDR);  /* "CRC Register 1" */
SFR_NOABS (FCE_CTR0, FCE_CTRm_t, FCE_CTR0_ADDR);  /* "CRC Test Register 0" */
SFR_NOABS (FCE_CTR1, FCE_CTRm_t, FCE_CTR1_ADDR);  /* "CRC Test Register 1" */
SFR_NOABS (FCE_ID, FCE_ID_t, FCE_ID_ADDR);        /* "Module Identification Register" */
SFR_NOABS (FCE_IR0, FCE_IRm_t, FCE_IR0_ADDR);     /* "Input Register 0" */
SFR_NOABS (FCE_IR1, FCE_IRm_t, FCE_IR1_ADDR);     /* "Input Register 1" */
SFR_NOABS (FCE_LENGTH0, FCE_LENGTHm_t, FCE_LENGTH0_ADDR); /* "CRC Length Register 0" */
SFR_NOABS (FCE_LENGTH1, FCE_LENGTHm_t, FCE_LENGTH1_ADDR); /* "CRC Length Register 1" */
SFR_NOABS (FCE_RES0, FCE_RESm_t, FCE_RES0_ADDR);  /* "CRC Result Register 0" */
SFR_NOABS (FCE_RES1, FCE_RESm_t, FCE_RES1_ADDR);  /* "CRC Result Register 1" */
SFR_NOABS (FCE_SRC, FCE_SRC_t, FCE_SRC_ADDR);     /* "Service Request Control Register" */
SFR_NOABS (FCE_STS0, FCE_STSm_t, FCE_STS0_ADDR);  /* "CRC Status Register 0" */
SFR_NOABS (FCE_STS1, FCE_STSm_t, FCE_STS1_ADDR);  /* "CRC Status Register 1" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_FCE_H_ (block "FCE") */


