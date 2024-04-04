/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "EBU" of TriCore TC1767 (24 SFRs) */

#include <tc1767/ebu/addr.h>

#include <tc1767/ebu/masks.h>
#include <tc1767/ebu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1767/ebu/types.h>
#include <tc1767/ebu/sharetypes.h>

#ifndef _HAVE_TRICORE_EBU_H_
#define _HAVE_TRICORE_EBU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (EBU_ADDRSEL0, EBU_ADDRSELm_t, EBU_ADDRSEL0_ADDR); /* "EBU Address Select Register 0" */
SFR_NOABS (EBU_ADDRSEL1, EBU_ADDRSELm_t, EBU_ADDRSEL1_ADDR); /* "EBU Address Select Register 1" */
SFR_NOABS (EBU_ADDRSEL2, EBU_ADDRSELm_t, EBU_ADDRSEL2_ADDR); /* "EBU Address Select Register 2" */
SFR_NOABS (EBU_ADDRSEL3, EBU_ADDRSELm_t, EBU_ADDRSEL3_ADDR); /* "EBU Address Select Register 3" */
SFR_NOABS (EBU_BUSRAP0, EBU_BUSRAPm_t, EBU_BUSRAP0_ADDR); /* "EBU Bus Read Access Parameter Register" */
SFR_NOABS (EBU_BUSRAP1, EBU_BUSRAPm_t, EBU_BUSRAP1_ADDR); /* "EBU Bus Read Access Parameter Register" */
SFR_NOABS (EBU_BUSRAP2, EBU_BUSRAPm_t, EBU_BUSRAP2_ADDR); /* "EBU Bus Read Access Parameter Register" */
SFR_NOABS (EBU_BUSRAP3, EBU_BUSRAPm_t, EBU_BUSRAP3_ADDR); /* "EBU Bus Read Access Parameter Register" */
SFR_NOABS (EBU_BUSRCON0, EBU_BUSRCONm_t, EBU_BUSRCON0_ADDR); /* "EBU Bus Configuration Register" */
SFR_NOABS (EBU_BUSRCON1, EBU_BUSRCONm_t, EBU_BUSRCON1_ADDR); /* "EBU Bus Configuration Register" */
SFR_NOABS (EBU_BUSRCON2, EBU_BUSRCONm_t, EBU_BUSRCON2_ADDR); /* "EBU Bus Configuration Register" */
SFR_NOABS (EBU_BUSRCON3, EBU_BUSRCONm_t, EBU_BUSRCON3_ADDR); /* "EBU Bus Configuration Register" */
SFR_NOABS (EBU_BUSWAP0, EBU_BUSWAPm_t, EBU_BUSWAP0_ADDR); /* "EBU Bus Write Access Parameter Register" */
SFR_NOABS (EBU_BUSWAP1, EBU_BUSWAPm_t, EBU_BUSWAP1_ADDR); /* "EBU Bus Write Access Parameter Register" */
SFR_NOABS (EBU_BUSWAP2, EBU_BUSWAPm_t, EBU_BUSWAP2_ADDR); /* "EBU Bus Write Access Parameter Register" */
SFR_NOABS (EBU_BUSWAP3, EBU_BUSWAPm_t, EBU_BUSWAP3_ADDR); /* "EBU Bus Write Access Parameter Register" */
SFR_NOABS (EBU_BUSWCON0, EBU_BUSWCONm_t, EBU_BUSWCON0_ADDR); /* "EBU Bus Write Configuration Register" */
SFR_NOABS (EBU_BUSWCON1, EBU_BUSWCONm_t, EBU_BUSWCON1_ADDR); /* "EBU Bus Write Configuration Register" */
SFR_NOABS (EBU_BUSWCON2, EBU_BUSWCONm_t, EBU_BUSWCON2_ADDR); /* "EBU Bus Write Configuration Register" */
SFR_NOABS (EBU_BUSWCON3, EBU_BUSWCONm_t, EBU_BUSWCON3_ADDR); /* "EBU Bus Write Configuration Register" */
SFR_NOABS (EBU_CLC, EBU_CLC_t, EBU_CLC_ADDR);     /* "EBU Clock Control Register" */
SFR_NOABS (EBU_EXTBOOT, EBU_EXTBOOT_t, EBU_EXTBOOT_ADDR); /* "EBU External Boot Configuration Register" */
SFR_NOABS (EBU_MODCON, EBU_MODCON_t, EBU_MODCON_ADDR); /* "EBU Configuration Register" */
SFR_NOABS (EBU_USERCON, EBU_USERCON_t, EBU_USERCON_ADDR); /* "EBU Test/Control Configuration Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_EBU_H_ (block "EBU") */


