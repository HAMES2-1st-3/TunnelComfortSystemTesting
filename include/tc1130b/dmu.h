/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "DMU_CD" of TriCore TC1130B (29 SFRs) */

#include <tc1130b/dmu/addr.h>

#include <tc1130b/dmu/masks.h>
#include <tc1130b/dmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/dmu/types.h>
#include <tc1130b/dmu/sharetypes.h>

#ifndef _HAVE_TRICORE_DMU_H_
#define _HAVE_TRICORE_DMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (DMU_CSCACTL, DMU_CSCACTL_t, DMU_CSCACTL_ADDR); /* "CPU SRAM Configuration Bit Chain Control Register" */
SFR_NOABS (DMU_CSCADIN, DMU_CSCADIN_t, DMU_CSCADIN_ADDR); /* "CPU SRAM Configuration Bit Chain Data In Register" */
SFR_NOABS (DMU_CSCADOUT, DMU_CSCADOUT_t, DMU_CSCADOUT_ADDR); /* "CPU SRAM Configuration Bit Chain Data Out Register" */
SFR_NOABS (DMU_ID, DMU_ID_t, DMU_ID_ADDR);        /* "DMU Module Identification Register" */
SFR_NOABS (DMU_SETA, DMU_SETA_t, DMU_SETA_ADDR);  /* "Soft-Error Trapped Address" */
SFR_NOABS (DMU_SRAR0, DMU_SRARm_t, DMU_SRAR0_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR1, DMU_SRARm_t, DMU_SRAR1_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR10, DMU_SRARm_t, DMU_SRAR10_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR11, DMU_SRARm_t, DMU_SRAR11_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR12, DMU_SRARm_t, DMU_SRAR12_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR13, DMU_SRARm_t, DMU_SRAR13_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR14, DMU_SRARm_t, DMU_SRAR14_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR15, DMU_SRARm_t, DMU_SRAR15_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR16, DMU_SRARm_t, DMU_SRAR16_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR17, DMU_SRARm_t, DMU_SRAR17_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR18, DMU_SRARm_t, DMU_SRAR18_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR19, DMU_SRARm_t, DMU_SRAR19_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR2, DMU_SRARm_t, DMU_SRAR2_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR20, DMU_SRARm_t, DMU_SRAR20_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR21, DMU_SRARm_t, DMU_SRAR21_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR22, DMU_SRARm_t, DMU_SRAR22_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR23, DMU_SRARm_t, DMU_SRAR23_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR3, DMU_SRARm_t, DMU_SRAR3_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR4, DMU_SRARm_t, DMU_SRAR4_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR5, DMU_SRARm_t, DMU_SRAR5_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR6, DMU_SRARm_t, DMU_SRAR6_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR7, DMU_SRARm_t, DMU_SRAR7_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR8, DMU_SRARm_t, DMU_SRAR8_ADDR); /* "SRAM Redundancy Address" */
SFR_NOABS (DMU_SRAR9, DMU_SRARm_t, DMU_SRAR9_ADDR); /* "SRAM Redundancy Address" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_DMU_H_ (block "DMU_CD") */


