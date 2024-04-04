/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PMU" of TriCore TC1797 (19 SFRs) */

#include <tc1797/pmu/addr.h>

#include <tc1797/pmu/masks.h>
#include <tc1797/pmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1797/pmu/types.h>
#include <tc1797/pmu/sharetypes.h>

#ifndef _HAVE_TRICORE_PMU_H_
#define _HAVE_TRICORE_PMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (FLASH0_FCON, FLASHn_FCON_t, FLASH0_FCON_ADDR); /* "Flash Configuration Register" */
SFR_NOABS (FLASH0_FSR, FLASHn_FSR_t, FLASH0_FSR_ADDR); /* "Flash Status Register" */
SFR_NOABS (FLASH0_ID, FLASHn_ID_t, FLASH0_ID_ADDR); /* "Flash Module Identification Register" */
SFR_NOABS (FLASH0_MARD, FLASHn_MARD_t, FLASH0_MARD_ADDR); /* "Margin Control Register DFLASH" */
SFR_NOABS (FLASH0_MARP, FLASHn_MARP_t, FLASH0_MARP_ADDR); /* "Margin Control Register PFLASH" */
SFR_NOABS (FLASH0_PROCON0, FLASHn_PROCON0_t, FLASH0_PROCON0_ADDR); /* "Flash Protection Configuration Register User 0" */
SFR_NOABS (FLASH0_PROCON1, FLASHn_PROCON1_t, FLASH0_PROCON1_ADDR); /* "Flash Protection Configuration Register User 1" */
SFR_NOABS (FLASH0_PROCON2, FLASHn_PROCON2_t, FLASH0_PROCON2_ADDR); /* "Flash Protection Configuration Register User 2" */
SFR_NOABS (FLASH1_FCON, FLASHn_FCON_t, FLASH1_FCON_ADDR); /* "Flash Configuration Register" */
SFR_NOABS (FLASH1_FSR, FLASHn_FSR_t, FLASH1_FSR_ADDR); /* "Flash Status Register" */
SFR_NOABS (FLASH1_ID, FLASHn_ID_t, FLASH1_ID_ADDR); /* "Flash Module Identification Register" */
SFR_NOABS (FLASH1_MARD, FLASHn_MARD_t, FLASH1_MARD_ADDR); /* "Margin Control Register DFLASH" */
SFR_NOABS (FLASH1_MARP, FLASHn_MARP_t, FLASH1_MARP_ADDR); /* "Margin Control Register PFLASH" */
SFR_NOABS (FLASH1_PROCON0, FLASHn_PROCON0_t, FLASH1_PROCON0_ADDR); /* "Flash Protection Configuration Register User 0" */
SFR_NOABS (FLASH1_PROCON1, FLASHn_PROCON1_t, FLASH1_PROCON1_ADDR); /* "Flash Protection Configuration Register User 1" */
SFR_NOABS (FLASH1_PROCON2, FLASHn_PROCON2_t, FLASH1_PROCON2_ADDR); /* "Flash Protection Configuration Register User 2" */
SFR_NOABS (PMU0_ID, PMUn_ID_t, PMU0_ID_ADDR);     /* "PMU0 Identification Register" */
SFR_NOABS (PMU0_OVRCON, PMU0_OVRCON_t, PMU0_OVRCON_ADDR); /* "Overlay RAM Control Register" */
SFR_NOABS (PMU1_ID, PMUn_ID_t, PMU1_ID_ADDR);     /* "PMU1 Identification Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMU_H_ (block "PMU") */


