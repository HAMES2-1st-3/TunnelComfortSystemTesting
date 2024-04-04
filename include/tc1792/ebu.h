/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "EBU" of TriCore TC1792 (21 SFRs) */

#include <tc1792/ebu/addr.h>

#include <tc1792/ebu/masks.h>
#include <tc1792/ebu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/ebu/types.h>
#include <tc1792/ebu/sharetypes.h>

#ifndef _HAVE_TRICORE_EBU_H_
#define _HAVE_TRICORE_EBU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (EBU_ADDRSEL0, EBU_ADDRSELm_t, EBU_ADDRSEL0_ADDR); /* "EBU Address Select Register 0" */
SFR_NOABS (EBU_ADDRSEL1, EBU_ADDRSELm_t, EBU_ADDRSEL1_ADDR); /* "EBU Address Select Register 1" */
SFR_NOABS (EBU_ADDRSEL2, EBU_ADDRSELm_t, EBU_ADDRSEL2_ADDR); /* "EBU Address Select Register 2" */
SFR_NOABS (EBU_ADDRSEL3, EBU_ADDRSELm_t, EBU_ADDRSEL3_ADDR); /* "EBU Address Select Register 3" */
SFR_NOABS (EBU_BFCON, EBU_BFCON_t, EBU_BFCON_ADDR); /* "EBU Burst Flash Control Register" */
SFR_NOABS (EBU_BUSAP0, EBU_BUSAPm_t, EBU_BUSAP0_ADDR); /* "EBU Bus Access Parameter Register 0" */
SFR_NOABS (EBU_BUSAP1, EBU_BUSAPm_t, EBU_BUSAP1_ADDR); /* "EBU Bus Access Parameter Register 1" */
SFR_NOABS (EBU_BUSAP2, EBU_BUSAPm_t, EBU_BUSAP2_ADDR); /* "EBU Bus Access Parameter Register 2" */
SFR_NOABS (EBU_BUSAP3, EBU_BUSAPm_t, EBU_BUSAP3_ADDR); /* "EBU Bus Access Parameter Register 3" */
SFR_NOABS (EBU_BUSCON0, EBU_BUSCONm_t, EBU_BUSCON0_ADDR); /* "EBU Bus Configuration Register 0" */
SFR_NOABS (EBU_BUSCON1, EBU_BUSCONm_t, EBU_BUSCON1_ADDR); /* "EBU Bus Configuration Register 1" */
SFR_NOABS (EBU_BUSCON2, EBU_BUSCONm_t, EBU_BUSCON2_ADDR); /* "EBU Bus Configuration Register 2" */
SFR_NOABS (EBU_BUSCON3, EBU_BUSCONm_t, EBU_BUSCON3_ADDR); /* "EBU Bus Configuration Register 3" */
SFR_NOABS (EBU_CLC, EBU_CLC_t, EBU_CLC_ADDR);     /* "EBU Clock Control Register" */
SFR_NOABS (EBU_CON, EBU_CON_t, EBU_CON_ADDR);     /* "EBU Configuration Register" */
SFR_NOABS (EBU_EMUAS, EBU_EMUAS_t, EBU_EMUAS_ADDR); /* "EBU Emulator Address Select Register" */
SFR_NOABS (EBU_EMUBAP, EBU_EMUBAP_t, EBU_EMUBAP_ADDR); /* "EBU Emulator Bus Access Parameter Register" */
SFR_NOABS (EBU_EMUBC, EBU_EMUBC_t, EBU_EMUBC_ADDR); /* "EBU Emulator Bus Configuration Register" */
SFR_NOABS (EBU_EMUOVL, EBU_EMUOVL_t, EBU_EMUOVL_ADDR); /* "EBU Emulator Overlay Register" */
SFR_NOABS (EBU_ID, EBU_ID_t, EBU_ID_ADDR);        /* "EBU Module Identification Register" */
SFR_NOABS (EBU_USERCON, EBU_USERCON_t, EBU_USERCON_ADDR); /* "EBU Test/Control Configuration Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_EBU_H_ (block "EBU") */


