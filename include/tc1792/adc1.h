/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC1" of TriCore TC1792 (62 SFRs) */

#include <tc1792/adc1/addr.h>

#include <tc1792/adc1/masks.h>
#include <tc1792/adc0_adc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/adc1/types.h>
#include <tc1792/adc0_adc1/sharetypes.h>

#ifndef _HAVE_TRICORE_ADC1_H_
#define _HAVE_TRICORE_ADC1_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ADC1_AP, ADCn_AP_t, ADC1_AP_ADDR);     /* "ADC1 Arbitration Participation Register" */
SFR_NOABS (ADC1_ASCRP, ADCn_ASCRP_t, ADC1_ASCRP_ADDR); /* "ADC1 Auto Scan Conversion Request Pending Register" */
SFR_NOABS (ADC1_CHCON0, ADCn_CHCONm_t, ADC1_CHCON0_ADDR); /* "ADC1 Channel Control Register 0" */
SFR_NOABS (ADC1_CHCON1, ADCn_CHCONm_t, ADC1_CHCON1_ADDR); /* "ADC1 Channel Control Register 1" */
SFR_NOABS (ADC1_CHCON10, ADCn_CHCONm_t, ADC1_CHCON10_ADDR); /* "ADC1 Channel Control Register 10" */
SFR_NOABS (ADC1_CHCON11, ADCn_CHCONm_t, ADC1_CHCON11_ADDR); /* "ADC1 Channel Control Register 11" */
SFR_NOABS (ADC1_CHCON12, ADCn_CHCONm_t, ADC1_CHCON12_ADDR); /* "ADC1 Channel Control Register 12" */
SFR_NOABS (ADC1_CHCON13, ADCn_CHCONm_t, ADC1_CHCON13_ADDR); /* "ADC1 Channel Control Register 13" */
SFR_NOABS (ADC1_CHCON14, ADCn_CHCONm_t, ADC1_CHCON14_ADDR); /* "ADC1 Channel Control Register 14" */
SFR_NOABS (ADC1_CHCON15, ADCn_CHCONm_t, ADC1_CHCON15_ADDR); /* "ADC1 Channel Control Register 15" */
SFR_NOABS (ADC1_CHCON2, ADCn_CHCONm_t, ADC1_CHCON2_ADDR); /* "ADC1 Channel Control Register 2" */
SFR_NOABS (ADC1_CHCON3, ADCn_CHCONm_t, ADC1_CHCON3_ADDR); /* "ADC1 Channel Control Register 3" */
SFR_NOABS (ADC1_CHCON4, ADCn_CHCONm_t, ADC1_CHCON4_ADDR); /* "ADC1 Channel Control Register 4" */
SFR_NOABS (ADC1_CHCON5, ADCn_CHCONm_t, ADC1_CHCON5_ADDR); /* "ADC1 Channel Control Register 5" */
SFR_NOABS (ADC1_CHCON6, ADCn_CHCONm_t, ADC1_CHCON6_ADDR); /* "ADC1 Channel Control Register 6" */
SFR_NOABS (ADC1_CHCON7, ADCn_CHCONm_t, ADC1_CHCON7_ADDR); /* "ADC1 Channel Control Register 7" */
SFR_NOABS (ADC1_CHCON8, ADCn_CHCONm_t, ADC1_CHCON8_ADDR); /* "ADC1 Channel Control Register 8" */
SFR_NOABS (ADC1_CHCON9, ADCn_CHCONm_t, ADC1_CHCON9_ADDR); /* "ADC1 Channel Control Register 9" */
SFR_NOABS (ADC1_CHIN, ADCn_CHIN_t, ADC1_CHIN_ADDR); /* "ADC1 Channel Injection Control Register" */
SFR_NOABS (ADC1_CHSTAT0, ADCn_CHSTATm_t, ADC1_CHSTAT0_ADDR); /* "ADC1 Channel Status Register 0" */
SFR_NOABS (ADC1_CHSTAT1, ADCn_CHSTATm_t, ADC1_CHSTAT1_ADDR); /* "ADC1 Channel Status Register 1" */
SFR_NOABS (ADC1_CHSTAT10, ADCn_CHSTATm_t, ADC1_CHSTAT10_ADDR); /* "ADC1 Channel Status Register 10" */
SFR_NOABS (ADC1_CHSTAT11, ADCn_CHSTATm_t, ADC1_CHSTAT11_ADDR); /* "ADC1 Channel Status Register 11" */
SFR_NOABS (ADC1_CHSTAT12, ADCn_CHSTATm_t, ADC1_CHSTAT12_ADDR); /* "ADC1 Channel Status Register 12" */
SFR_NOABS (ADC1_CHSTAT13, ADCn_CHSTATm_t, ADC1_CHSTAT13_ADDR); /* "ADC1 Channel Status Register 13" */
SFR_NOABS (ADC1_CHSTAT14, ADCn_CHSTATm_t, ADC1_CHSTAT14_ADDR); /* "ADC1 Channel Status Register 14" */
SFR_NOABS (ADC1_CHSTAT15, ADCn_CHSTATm_t, ADC1_CHSTAT15_ADDR); /* "ADC1 Channel Status Register 15" */
SFR_NOABS (ADC1_CHSTAT2, ADCn_CHSTATm_t, ADC1_CHSTAT2_ADDR); /* "ADC1 Channel Status Register 2" */
SFR_NOABS (ADC1_CHSTAT3, ADCn_CHSTATm_t, ADC1_CHSTAT3_ADDR); /* "ADC1 Channel Status Register 3" */
SFR_NOABS (ADC1_CHSTAT4, ADCn_CHSTATm_t, ADC1_CHSTAT4_ADDR); /* "ADC1 Channel Status Register 4" */
SFR_NOABS (ADC1_CHSTAT5, ADCn_CHSTATm_t, ADC1_CHSTAT5_ADDR); /* "ADC1 Channel Status Register 5" */
SFR_NOABS (ADC1_CHSTAT6, ADCn_CHSTATm_t, ADC1_CHSTAT6_ADDR); /* "ADC1 Channel Status Register 6" */
SFR_NOABS (ADC1_CHSTAT7, ADCn_CHSTATm_t, ADC1_CHSTAT7_ADDR); /* "ADC1 Channel Status Register 7" */
SFR_NOABS (ADC1_CHSTAT8, ADCn_CHSTATm_t, ADC1_CHSTAT8_ADDR); /* "ADC1 Channel Status Register 8" */
SFR_NOABS (ADC1_CHSTAT9, ADCn_CHSTATm_t, ADC1_CHSTAT9_ADDR); /* "ADC1 Channel Status Register 9" */
SFR_NOABS (ADC1_CON, ADCn_CON_t, ADC1_CON_ADDR);  /* "ADC1 Converter Control Register" */
SFR_NOABS (ADC1_EXCRP, ADCn_EXCRP_t, ADC1_EXCRP_ADDR); /* "ADC1 External Conversion Request Pending Register" */
SFR_NOABS (ADC1_EXTC, ADCn_EXTC_t, ADC1_EXTC_ADDR); /* "ADC1 External Trigger Control Register" */
SFR_NOABS (ADC1_LCCON0, ADCn_LCCONm_t, ADC1_LCCON0_ADDR); /* "ADC1 Limit Check Control Register 0" */
SFR_NOABS (ADC1_LCCON1, ADCn_LCCONm_t, ADC1_LCCON1_ADDR); /* "ADC1 Limit Check Control Register 1" */
SFR_NOABS (ADC1_LCCON2, ADCn_LCCONm_t, ADC1_LCCON2_ADDR); /* "ADC1 Limit Check Control Register 2" */
SFR_NOABS (ADC1_LCCON3, ADCn_LCCONm_t, ADC1_LCCON3_ADDR); /* "ADC1 Limit Check Control Register 3" */
SFR_NOABS (ADC1_MSS0, ADCn_MSS0_t, ADC1_MSS0_ADDR); /* "ADC1 Module Service Request Status Register 0" */
SFR_NOABS (ADC1_MSS1, ADCn_MSS1_t, ADC1_MSS1_ADDR); /* "ADC1 Module Service Request Status Register 1" */
SFR_NOABS (ADC1_QR, ADCn_QR_t, ADC1_QR_ADDR);     /* "ADC1 Queue Register" */
SFR_NOABS (ADC1_QUEUE0, ADCn_QUEUE0_t, ADC1_QUEUE0_ADDR); /* "ADC1 Queue Status Register" */
SFR_NOABS (ADC1_REQ0, ADCn_REQ0_t, ADC1_REQ0_ADDR); /* "ADC1 Conversion Request Register SW0" */
SFR_NOABS (ADC1_SAL, ADCn_SAL_t, ADC1_SAL_ADDR);  /* "ADC1 Source Arbitration Level Register" */
SFR_NOABS (ADC1_SCN, ADCn_SCN_t, ADC1_SCN_ADDR);  /* "ADC1 Auto Scan Control Register" */
SFR_NOABS (ADC1_SCON, ADCn_SCON_t, ADC1_SCON_ADDR); /* "ADC1 Source Control Register" */
SFR_NOABS (ADC1_SRC0, ADCn_SRCm_t, ADC1_SRC0_ADDR); /* "ADC1 Service Request Control Register 0" */
SFR_NOABS (ADC1_SRC1, ADCn_SRCm_t, ADC1_SRC1_ADDR); /* "ADC1 Service Request Control Register 1" */
SFR_NOABS (ADC1_SRC2, ADCn_SRCm_t, ADC1_SRC2_ADDR); /* "ADC1 Service Request Control Register 2" */
SFR_NOABS (ADC1_SRC3, ADCn_SRCm_t, ADC1_SRC3_ADDR); /* "ADC1 Service Request Control Register 3" */
SFR_NOABS (ADC1_SRNP, ADCn_SRNP_t, ADC1_SRNP_ADDR); /* "ADC1 Service Request Node Pointer Register" */
SFR_NOABS (ADC1_STAT, ADCn_STAT_t, ADC1_STAT_ADDR); /* "ADC1 Converter Status Register" */
SFR_NOABS (ADC1_SW0CRP, ADCn_SW0CRP_t, ADC1_SW0CRP_ADDR); /* "ADC1 Software SW0 Conversion Request Pending Register" */
SFR_NOABS (ADC1_SYSTAT, ADCn_SYSTAT_t, ADC1_SYSTAT_ADDR); /* "ADC1 Synchronization Status Register" */
SFR_NOABS (ADC1_TCON, ADCn_TCON_t, ADC1_TCON_ADDR); /* "ADC1 Timer Control Register" */
SFR_NOABS (ADC1_TCRP, ADCn_TCRP_t, ADC1_TCRP_ADDR); /* "ADC1 Timer Conversion Request Pending Register" */
SFR_NOABS (ADC1_TSTAT, ADCn_TSTAT_t, ADC1_TSTAT_ADDR); /* "ADC1 Timer Status Register" */
SFR_NOABS (ADC1_TTC, ADCn_TTC_t, ADC1_TTC_ADDR);  /* "ADC1 Timer Trigger Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ADC1_H_ (block "ADC1") */


