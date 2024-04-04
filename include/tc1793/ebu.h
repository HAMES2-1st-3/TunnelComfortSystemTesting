/* (c) HighTec EDV-Systeme GmbH */

/* block "EBU" of TriCore TC1793 (39 SFRs) */

#include <tc1793/ebu/addr.h>

#include <tc1793/ebu/masks.h>
#include <tc1793/ebu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/ebu/types.h>
#include <tc1793/ebu/sharetypes.h>

#ifndef _HAVE_TRICORE_EBU_H_
#define _HAVE_TRICORE_EBU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (EBU_ADDRSEL0, EBU_ADDRSELm_t, EBU_ADDRSEL0_ADDR); /* "EBU Address Select Register 0" */
SFR_NOABS (EBU_ADDRSEL1, EBU_ADDRSELm_t, EBU_ADDRSEL1_ADDR); /* "EBU Address Select Register 1-3" */
SFR_NOABS (EBU_ADDRSEL2, EBU_ADDRSELm_t, EBU_ADDRSEL2_ADDR); /* "EBU Address Select Register 1-3" */
SFR_NOABS (EBU_ADDRSEL3, EBU_ADDRSELm_t, EBU_ADDRSEL3_ADDR); /* "EBU Address Select Register 1-3" */
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
SFR_NOABS (EBU_DDRNCON, EBU_DDRNCON_t, EBU_DDRNCON_ADDR); /* "EBU LPDDR NVM Configuration Register" */
SFR_NOABS (EBU_DDRNMOD, EBU_DDRNMOD_t, EBU_DDRNMOD_ADDR); /* "EBU DDR NVM Mode Register" */
SFR_NOABS (EBU_DDRNMOD2, EBU_DDRNMOD2_t, EBU_DDRNMOD2_ADDR); /* "EBU DDR NVM Extended Mode Register" */
SFR_NOABS (EBU_DDRNPRLD, EBU_DDRNPRLD_t, EBU_DDRNPRLD_ADDR); /* "EBU DDR NVM Page Preload Register" */
SFR_NOABS (EBU_DDRNSRR, EBU_DDRNSRR_t, EBU_DDRNSRR_ADDR); /* "EBU DDR NVM Status Register" */
SFR_NOABS (EBU_DDRNTAG0, EBU_DDRNTAGm_t, EBU_DDRNTAG0_ADDR); /* "EBU DDR Tag Registers" */
SFR_NOABS (EBU_DDRNTAG1, EBU_DDRNTAGm_t, EBU_DDRNTAG1_ADDR); /* "EBU DDR Tag Registers" */
SFR_NOABS (EBU_DDRNTAG2, EBU_DDRNTAGm_t, EBU_DDRNTAG2_ADDR); /* "EBU DDR Tag Registers" */
SFR_NOABS (EBU_DDRNTAG3, EBU_DDRNTAGm_t, EBU_DDRNTAG3_ADDR); /* "EBU DDR Tag Registers" */
SFR_NOABS (EBU_DLLCON, EBU_DLLCON_t, EBU_DLLCON_ADDR); /* "EBU DLL Control Register" */
SFR_NOABS (EBU_EXTBOOT, EBU_EXTBOOT_t, EBU_EXTBOOT_ADDR); /* "EBU External Boot Configuration Register" */
SFR_NOABS (EBU_ID, EBU_ID_t, EBU_ID_ADDR);        /* "EBU Module Identification Register" */
SFR_NOABS (EBU_MODCON, EBU_MODCON_t, EBU_MODCON_ADDR); /* "EBU Configuration Register" */
SFR_NOABS (EBU_SDRMCON, EBU_SDRMCON_t, EBU_SDRMCON_ADDR); /* "EBU SDRAM Control Register" */
SFR_NOABS (EBU_SDRMOD, EBU_SDRMOD_t, EBU_SDRMOD_ADDR); /* "EBU SDRAM Mode Register" */
SFR_NOABS (EBU_SDRMREF, EBU_SDRMREF_t, EBU_SDRMREF_ADDR); /* "EBU SDRAM Refresh Control Register" */
SFR_NOABS (EBU_SDRSTAT, EBU_SDRSTAT_t, EBU_SDRSTAT_ADDR); /* "EBU SDRAM Status Register" */
SFR_NOABS (EBU_USERCON, EBU_USERCON_t, EBU_USERCON_ADDR); /* "EBU Test/Control Configuration Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_EBU_H_ (block "EBU") */


