/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PMU" of TriCore TC1167 (14 SFRs) */

#include <tc1167/pmu/addr.h>

#include <tc1167/pmu/masks.h>
#include <tc1167/pmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1167/pmu/types.h>
#include <tc1167/pmu/sharetypes.h>

#ifndef _HAVE_TRICORE_PMU_H_
#define _HAVE_TRICORE_PMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (FLASH0_CFTEST, FLASH0_CFTEST_t, FLASH0_CFTEST_ADDR); /* "CPU Flash Test Register" */
SFR_NOABS (FLASH0_ECCR, FLASH0_ECCR_t, FLASH0_ECCR_ADDR); /* "ECC Read Register" */
SFR_NOABS (FLASH0_ECCW, FLASH0_ECCW_t, FLASH0_ECCW_ADDR); /* "ECC Write Register" */
SFR_NOABS (FLASH0_FCON, FLASH0_FCON_t, FLASH0_FCON_ADDR); /* "Flash Configuration Register" */
SFR_NOABS (FLASH0_FSCON, FLASH0_FSCON_t, FLASH0_FSCON_ADDR); /* "Flash Size Configuration Register" */
SFR_NOABS (FLASH0_FSR, FLASH0_FSR_t, FLASH0_FSR_ADDR); /* "Flash Status Register" */
SFR_NOABS (FLASH0_ID, FLASH0_ID_t, FLASH0_ID_ADDR); /* "Flash Module Identification Register" */
SFR_NOABS (FLASH0_MARD, FLASH0_MARD_t, FLASH0_MARD_ADDR); /* "Margin Control Register DFLASH" */
SFR_NOABS (FLASH0_MARP, FLASH0_MARP_t, FLASH0_MARP_ADDR); /* "Margin Control Register PFLASH" */
SFR_NOABS (FLASH0_PROCON0, FLASH0_PROCON0_t, FLASH0_PROCON0_ADDR); /* "Flash Protection Configuration Register User 0" */
SFR_NOABS (FLASH0_PROCON1, FLASH0_PROCON1_t, FLASH0_PROCON1_ADDR); /* "Flash Protection Configuration Register User 1" */
SFR_NOABS (FLASH0_PROCON2, FLASH0_PROCON2_t, FLASH0_PROCON2_ADDR); /* "Flash Protection Configuration Register User 2" */
SFR_NOABS (PMU0_ID, PMU0_ID_t, PMU0_ID_ADDR);     /* "PMU0 Identification Register" */
SFR_NOABS (PMU0_OVRCON, PMU0_OVRCON_t, PMU0_OVRCON_ADDR); /* "Overlay RAM Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMU_H_ (block "PMU") */


