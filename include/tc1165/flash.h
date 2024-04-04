/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "FLASH LL" of TriCore TC1165 (8 SFRs) */

#include <tc1165/flash/addr.h>

#include <tc1165/flash/masks.h>
#include <tc1165/flash/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1165/flash/types.h>
#include <tc1165/flash/sharetypes.h>

#ifndef _HAVE_TRICORE_FLASH_H_
#define _HAVE_TRICORE_FLASH_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (FLASH_FCON, FLASH_FCON_t, FLASH_FCON_ADDR); /* "Flash Configuration Register" */
SFR_NOABS (FLASH_FSR, FLASH_FSR_t, FLASH_FSR_ADDR); /* "Flash Status Register" */
SFR_NOABS (FLASH_ID, FLASH_ID_t, FLASH_ID_ADDR);  /* "Flash Module Identification Register" */
SFR_NOABS (FLASH_MARD, FLASH_MARD_t, FLASH_MARD_ADDR); /* "Margin Control Register DFlash" */
SFR_NOABS (FLASH_MARP, FLASH_MARP_t, FLASH_MARP_ADDR); /* "Margin Control Register PFlash" */
SFR_NOABS (FLASH_PROCON0, FLASH_PROCON0_t, FLASH_PROCON0_ADDR); /* "Flash Protection Configuration User 0" */
SFR_NOABS (FLASH_PROCON1, FLASH_PROCONm_t, FLASH_PROCON1_ADDR); /* "Flash Protection Configuration User 1" */
SFR_NOABS (FLASH_PROCON2, FLASH_PROCONm_t, FLASH_PROCON2_ADDR); /* "Flash Protection Configuration User 2" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_FLASH_H_ (block "FLASH LL") */


