/* (c) HighTec EDV-Systeme GmbH */

/* block "PMU" of TriCore TC1793 (38 SFRs) */

#include <tc1793/pmu/addr.h>

#include <tc1793/pmu/masks.h>
#include <tc1793/pmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/pmu/types.h>
#include <tc1793/pmu/sharetypes.h>

#ifndef _HAVE_TRICORE_PMU_H_
#define _HAVE_TRICORE_PMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (FLASH0_ECCR, FLASHn_ECCR_t, FLASH0_ECCR_ADDR); /* "ECC Read Register" */
SFR_NOABS (FLASH0_ECCW, FLASHn_ECCW_t, FLASH0_ECCW_ADDR); /* "ECC Write Register" */
SFR_NOABS (FLASH0_FCON, FLASHn_FCON_t, FLASH0_FCON_ADDR); /* "Flash Configuration Register" */
SFR_NOABS (FLASH0_FSR, FLASHn_FSR_t, FLASH0_FSR_ADDR); /* "Flash Status Register" */
SFR_NOABS (FLASH0_ID, FLASHn_ID_t, FLASH0_ID_ADDR); /* "Flash Module Identification Register" */
SFR_NOABS (FLASH0_MARD, FLASHn_MARD_t, FLASH0_MARD_ADDR); /* "Margin Control Register DFLASH" */
SFR_NOABS (FLASH0_MARP, FLASHn_MARP_t, FLASH0_MARP_ADDR); /* "Margin Control Register PFLASH" */
SFR_NOABS (FLASH0_PROCON0, FLASHn_PROCON0_t, FLASH0_PROCON0_ADDR); /* "Flash Protection Config. User 0" */
SFR_NOABS (FLASH0_PROCON1, FLASHn_PROCON1_t, FLASH0_PROCON1_ADDR); /* "Flash Protection Config. User 1" */
SFR_NOABS (FLASH0_PROCON2, FLASHn_PROCON2_t, FLASH0_PROCON2_ADDR); /* "Flash Protection Config. User 2" */
SFR_NOABS (FLASH0_RDBCFG0, FLASHn_RDBCFGm_t, FLASH0_RDBCFG0_ADDR); /* "Read Buffer Cfg 0" */
SFR_NOABS (FLASH0_RDBCFG1, FLASHn_RDBCFGm_t, FLASH0_RDBCFG1_ADDR); /* "Read Buffer Cfg 1" */
SFR_NOABS (FLASH0_RDBCFG2, FLASHn_RDBCFGm_t, FLASH0_RDBCFG2_ADDR); /* "Read Buffer Cfg 2" */
SFR_NOABS (FLASH0_SEMA, FLASHn_SEMA_t, FLASH0_SEMA_ADDR); /* "Flash Access Semaphore" */
SFR_NOABS (FLASH0_SHEBOOT0, FLASHn_SHEBOOTm_t, FLASH0_SHEBOOT0_ADDR); /* "SHE Secure Boot Cfg" */
SFR_NOABS (FLASH0_SHEBOOT1, FLASHn_SHEBOOTm_t, FLASH0_SHEBOOT1_ADDR); /* "SHE Secure Boot Cfg" */
SFR_NOABS (FLASH0_SHEBOOT2, FLASHn_SHEBOOTm_t, FLASH0_SHEBOOT2_ADDR); /* "SHE Secure Boot Cfg" */
SFR_NOABS (FLASH0_XFSR, FLASHn_XFSR_t, FLASH0_XFSR_ADDR); /* "Extended Flash Status Register" */
SFR_NOABS (FLASH1_ECCR, FLASHn_ECCR_t, FLASH1_ECCR_ADDR); /* "ECC Read Register" */
SFR_NOABS (FLASH1_ECCW, FLASHn_ECCW_t, FLASH1_ECCW_ADDR); /* "ECC Write Register" */
SFR_NOABS (FLASH1_FCON, FLASHn_FCON_t, FLASH1_FCON_ADDR); /* "Flash Configuration Register" */
SFR_NOABS (FLASH1_FSR, FLASHn_FSR_t, FLASH1_FSR_ADDR); /* "Flash Status Register" */
SFR_NOABS (FLASH1_ID, FLASHn_ID_t, FLASH1_ID_ADDR); /* "Flash Module Identification Register" */
SFR_NOABS (FLASH1_MARD, FLASHn_MARD_t, FLASH1_MARD_ADDR); /* "Margin Control Register DFLASH" */
SFR_NOABS (FLASH1_MARP, FLASHn_MARP_t, FLASH1_MARP_ADDR); /* "Margin Control Register PFLASH" */
SFR_NOABS (FLASH1_PROCON0, FLASHn_PROCON0_t, FLASH1_PROCON0_ADDR); /* "Flash Protection Config. User 0" */
SFR_NOABS (FLASH1_PROCON1, FLASHn_PROCON1_t, FLASH1_PROCON1_ADDR); /* "Flash Protection Config. User 1" */
SFR_NOABS (FLASH1_PROCON2, FLASHn_PROCON2_t, FLASH1_PROCON2_ADDR); /* "Flash Protection Config. User 2" */
SFR_NOABS (FLASH1_RDBCFG0, FLASHn_RDBCFGm_t, FLASH1_RDBCFG0_ADDR); /* "Read Buffer Cfg 0" */
SFR_NOABS (FLASH1_RDBCFG1, FLASHn_RDBCFGm_t, FLASH1_RDBCFG1_ADDR); /* "Read Buffer Cfg 1" */
SFR_NOABS (FLASH1_RDBCFG2, FLASHn_RDBCFGm_t, FLASH1_RDBCFG2_ADDR); /* "Read Buffer Cfg 2" */
SFR_NOABS (FLASH1_SEMA, FLASHn_SEMA_t, FLASH1_SEMA_ADDR); /* "Flash Access Semaphore" */
SFR_NOABS (FLASH1_SHEBOOT0, FLASHn_SHEBOOTm_t, FLASH1_SHEBOOT0_ADDR); /* "SHE Secure Boot Cfg" */
SFR_NOABS (FLASH1_SHEBOOT1, FLASHn_SHEBOOTm_t, FLASH1_SHEBOOT1_ADDR); /* "SHE Secure Boot Cfg" */
SFR_NOABS (FLASH1_SHEBOOT2, FLASHn_SHEBOOTm_t, FLASH1_SHEBOOT2_ADDR); /* "SHE Secure Boot Cfg" */
SFR_NOABS (FLASH1_XFSR, FLASHn_XFSR_t, FLASH1_XFSR_ADDR); /* "Extended Flash Status Register" */
SFR_NOABS (PMU0_ID, PMUn_ID_t, PMU0_ID_ADDR);     /* "PMU0 Identification Register" */
SFR_NOABS (PMU1_ID, PMUn_ID_t, PMU1_ID_ADDR);     /* "PMU1 Identification Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMU_H_ (block "PMU") */


