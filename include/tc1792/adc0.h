/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC0" of TriCore TC1792 (65 SFRs) */

#include <tc1792/adc0/addr.h>

#include <tc1792/adc0/masks.h>
#include <tc1792/adc0_adc1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/adc0/types.h>
#include <tc1792/adc0_adc1/sharetypes.h>

#ifndef _HAVE_TRICORE_ADC0_H_
#define _HAVE_TRICORE_ADC0_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ADC0_AP, ADCn_AP_t, ADC0_AP_ADDR);     /* "ADC0 Arbitration Participation Register" */
SFR_NOABS (ADC0_ASCRP, ADCn_ASCRP_t, ADC0_ASCRP_ADDR); /* "ADC0 Auto Scan Conversion Request Pending Register" */
SFR_NOABS (ADC0_CHCON0, ADCn_CHCONm_t, ADC0_CHCON0_ADDR); /* "ADC0 Channel Control Register 0" */
SFR_NOABS (ADC0_CHCON1, ADCn_CHCONm_t, ADC0_CHCON1_ADDR); /* "ADC0 Channel Control Register 1" */
SFR_NOABS (ADC0_CHCON10, ADCn_CHCONm_t, ADC0_CHCON10_ADDR); /* "ADC0 Channel Control Register 10" */
SFR_NOABS (ADC0_CHCON11, ADCn_CHCONm_t, ADC0_CHCON11_ADDR); /* "ADC0 Channel Control Register 11" */
SFR_NOABS (ADC0_CHCON12, ADCn_CHCONm_t, ADC0_CHCON12_ADDR); /* "ADC0 Channel Control Register 12" */
SFR_NOABS (ADC0_CHCON13, ADCn_CHCONm_t, ADC0_CHCON13_ADDR); /* "ADC0 Channel Control Register 13" */
SFR_NOABS (ADC0_CHCON14, ADCn_CHCONm_t, ADC0_CHCON14_ADDR); /* "ADC0 Channel Control Register 14" */
SFR_NOABS (ADC0_CHCON15, ADCn_CHCONm_t, ADC0_CHCON15_ADDR); /* "ADC0 Channel Control Register 15" */
SFR_NOABS (ADC0_CHCON2, ADCn_CHCONm_t, ADC0_CHCON2_ADDR); /* "ADC0 Channel Control Register 2" */
SFR_NOABS (ADC0_CHCON3, ADCn_CHCONm_t, ADC0_CHCON3_ADDR); /* "ADC0 Channel Control Register 3" */
SFR_NOABS (ADC0_CHCON4, ADCn_CHCONm_t, ADC0_CHCON4_ADDR); /* "ADC0 Channel Control Register 4" */
SFR_NOABS (ADC0_CHCON5, ADCn_CHCONm_t, ADC0_CHCON5_ADDR); /* "ADC0 Channel Control Register 5" */
SFR_NOABS (ADC0_CHCON6, ADCn_CHCONm_t, ADC0_CHCON6_ADDR); /* "ADC0 Channel Control Register 6" */
SFR_NOABS (ADC0_CHCON7, ADCn_CHCONm_t, ADC0_CHCON7_ADDR); /* "ADC0 Channel Control Register 7" */
SFR_NOABS (ADC0_CHCON8, ADCn_CHCONm_t, ADC0_CHCON8_ADDR); /* "ADC0 Channel Control Register 8" */
SFR_NOABS (ADC0_CHCON9, ADCn_CHCONm_t, ADC0_CHCON9_ADDR); /* "ADC0 Channel Control Register 9" */
SFR_NOABS (ADC0_CHIN, ADCn_CHIN_t, ADC0_CHIN_ADDR); /* "ADC0 Channel Injection Control Register" */
SFR_NOABS (ADC0_CHSTAT0, ADCn_CHSTATm_t, ADC0_CHSTAT0_ADDR); /* "ADC0 Channel Status Register 0" */
SFR_NOABS (ADC0_CHSTAT1, ADCn_CHSTATm_t, ADC0_CHSTAT1_ADDR); /* "ADC0 Channel Status Register 1" */
SFR_NOABS (ADC0_CHSTAT10, ADCn_CHSTATm_t, ADC0_CHSTAT10_ADDR); /* "ADC0 Channel Status Register 10" */
SFR_NOABS (ADC0_CHSTAT11, ADCn_CHSTATm_t, ADC0_CHSTAT11_ADDR); /* "ADC0 Channel Status Register 11" */
SFR_NOABS (ADC0_CHSTAT12, ADCn_CHSTATm_t, ADC0_CHSTAT12_ADDR); /* "ADC0 Channel Status Register 12" */
SFR_NOABS (ADC0_CHSTAT13, ADCn_CHSTATm_t, ADC0_CHSTAT13_ADDR); /* "ADC0 Channel Status Register 13" */
SFR_NOABS (ADC0_CHSTAT14, ADCn_CHSTATm_t, ADC0_CHSTAT14_ADDR); /* "ADC0 Channel Status Register 14" */
SFR_NOABS (ADC0_CHSTAT15, ADCn_CHSTATm_t, ADC0_CHSTAT15_ADDR); /* "ADC0 Channel Status Register 15" */
SFR_NOABS (ADC0_CHSTAT2, ADCn_CHSTATm_t, ADC0_CHSTAT2_ADDR); /* "ADC0 Channel Status Register 2" */
SFR_NOABS (ADC0_CHSTAT3, ADCn_CHSTATm_t, ADC0_CHSTAT3_ADDR); /* "ADC0 Channel Status Register 3" */
SFR_NOABS (ADC0_CHSTAT4, ADCn_CHSTATm_t, ADC0_CHSTAT4_ADDR); /* "ADC0 Channel Status Register 4" */
SFR_NOABS (ADC0_CHSTAT5, ADCn_CHSTATm_t, ADC0_CHSTAT5_ADDR); /* "ADC0 Channel Status Register 5" */
SFR_NOABS (ADC0_CHSTAT6, ADCn_CHSTATm_t, ADC0_CHSTAT6_ADDR); /* "ADC0 Channel Status Register 6" */
SFR_NOABS (ADC0_CHSTAT7, ADCn_CHSTATm_t, ADC0_CHSTAT7_ADDR); /* "ADC0 Channel Status Register 7" */
SFR_NOABS (ADC0_CHSTAT8, ADCn_CHSTATm_t, ADC0_CHSTAT8_ADDR); /* "ADC0 Channel Status Register 8" */
SFR_NOABS (ADC0_CHSTAT9, ADCn_CHSTATm_t, ADC0_CHSTAT9_ADDR); /* "ADC0 Channel Status Register 9" */
SFR_NOABS (ADC0_CLC, ADC0_CLC_t, ADC0_CLC_ADDR);  /* "ADC Clock Control Register" */
SFR_NOABS (ADC0_CON, ADCn_CON_t, ADC0_CON_ADDR);  /* "ADC0 Converter Control Register" */
SFR_NOABS (ADC0_EXCRP, ADCn_EXCRP_t, ADC0_EXCRP_ADDR); /* "ADC0 External Conversion Request Pending Register" */
SFR_NOABS (ADC0_EXTC, ADCn_EXTC_t, ADC0_EXTC_ADDR); /* "ADC0 External Trigger Control Register" */
SFR_NOABS (ADC0_FDR, ADC0_FDR_t, ADC0_FDR_ADDR);  /* "ADC Fractional Divider Register" */
SFR_NOABS (ADC0_ID, ADC0_ID_t, ADC0_ID_ADDR);     /* "ADC Module Identification Register" */
SFR_NOABS (ADC0_LCCON0, ADCn_LCCONm_t, ADC0_LCCON0_ADDR); /* "ADC0 Limit Check Control Register 0" */
SFR_NOABS (ADC0_LCCON1, ADCn_LCCONm_t, ADC0_LCCON1_ADDR); /* "ADC0 Limit Check Control Register 1" */
SFR_NOABS (ADC0_LCCON2, ADCn_LCCONm_t, ADC0_LCCON2_ADDR); /* "ADC0 Limit Check Control Register 2" */
SFR_NOABS (ADC0_LCCON3, ADCn_LCCONm_t, ADC0_LCCON3_ADDR); /* "ADC0 Limit Check Control Register 3" */
SFR_NOABS (ADC0_MSS0, ADCn_MSS0_t, ADC0_MSS0_ADDR); /* "ADC0 Module Service Request Status Register 0" */
SFR_NOABS (ADC0_MSS1, ADCn_MSS1_t, ADC0_MSS1_ADDR); /* "ADC0 Module Service Request Status Register 1" */
SFR_NOABS (ADC0_QR, ADCn_QR_t, ADC0_QR_ADDR);     /* "ADC0 Queue Register" */
SFR_NOABS (ADC0_QUEUE0, ADCn_QUEUE0_t, ADC0_QUEUE0_ADDR); /* "ADC0 Queue Status Register" */
SFR_NOABS (ADC0_REQ0, ADCn_REQ0_t, ADC0_REQ0_ADDR); /* "ADC0 Conversion Request Register SW0" */
SFR_NOABS (ADC0_SAL, ADCn_SAL_t, ADC0_SAL_ADDR);  /* "ADC0 Source Arbitration Level Register" */
SFR_NOABS (ADC0_SCN, ADCn_SCN_t, ADC0_SCN_ADDR);  /* "ADC0 Auto Scan Control Register" */
SFR_NOABS (ADC0_SCON, ADCn_SCON_t, ADC0_SCON_ADDR); /* "ADC0 Source Control Register" */
SFR_NOABS (ADC0_SRC0, ADCn_SRCm_t, ADC0_SRC0_ADDR); /* "ADC0 Service Request Control Register 0" */
SFR_NOABS (ADC0_SRC1, ADCn_SRCm_t, ADC0_SRC1_ADDR); /* "ADC0 Service Request Control Register 1" */
SFR_NOABS (ADC0_SRC2, ADCn_SRCm_t, ADC0_SRC2_ADDR); /* "ADC0 Service Request Control Register 2" */
SFR_NOABS (ADC0_SRC3, ADCn_SRCm_t, ADC0_SRC3_ADDR); /* "ADC0 Service Request Control Register 3" */
SFR_NOABS (ADC0_SRNP, ADCn_SRNP_t, ADC0_SRNP_ADDR); /* "ADC0 Service Request Node Pointer Register" */
SFR_NOABS (ADC0_STAT, ADCn_STAT_t, ADC0_STAT_ADDR); /* "ADC0 Converter Status Register" */
SFR_NOABS (ADC0_SW0CRP, ADCn_SW0CRP_t, ADC0_SW0CRP_ADDR); /* "ADC0 Software SW0 Conversion Request Pending Register" */
SFR_NOABS (ADC0_SYSTAT, ADCn_SYSTAT_t, ADC0_SYSTAT_ADDR); /* "ADC0 Synchronization Status Register" */
SFR_NOABS (ADC0_TCON, ADCn_TCON_t, ADC0_TCON_ADDR); /* "ADC0 Timer Control Register" */
SFR_NOABS (ADC0_TCRP, ADCn_TCRP_t, ADC0_TCRP_ADDR); /* "ADC0 Timer Conversion Request Pending Register" */
SFR_NOABS (ADC0_TSTAT, ADCn_TSTAT_t, ADC0_TSTAT_ADDR); /* "ADC0 Timer Status Register" */
SFR_NOABS (ADC0_TTC, ADCn_TTC_t, ADC0_TTC_ADDR);  /* "ADC0 Timer Trigger Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ADC0_H_ (block "ADC0") */


