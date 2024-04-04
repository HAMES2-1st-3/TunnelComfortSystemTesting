/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC0 LL" of TriCore TC1766B (83 SFRs) */

#include <tc1766b/adc0/addr.h>

#include <tc1766b/adc0/masks.h>
#include <tc1766b/adc0/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/adc0/types.h>
#include <tc1766b/adc0/sharetypes.h>

#ifndef _HAVE_TRICORE_ADC0_H_
#define _HAVE_TRICORE_ADC0_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ADC0_AP, ADC0_AP_t, ADC0_AP_ADDR);     /* "ADC Arbitration Participation Register" */
SFR_NOABS (ADC0_ASCRP, ADC0_ASCRP_t, ADC0_ASCRP_ADDR); /* "ADC Auto Scan Conversion Request Pending Register" */
SFR_NOABS (ADC0_BARRACUDAIN, ADC0_BARRACUDAIN_t, ADC0_BARRACUDAIN_ADDR); /* "ADC Barracuda In Test Register" */
SFR_NOABS (ADC0_BARRACUDAOUT, ADC0_BARRACUDAOUT_t, ADC0_BARRACUDAOUT_ADDR); /* "ADC Barracuda Out Test Register" */
SFR_NOABS (ADC0_CHCON0, ADC0_CHCONm_t, ADC0_CHCON0_ADDR); /* "ADC Channel Control Register 0" */
SFR_NOABS (ADC0_CHCON1, ADC0_CHCONm_t, ADC0_CHCON1_ADDR); /* "ADC Channel Control Register 1" */
SFR_NOABS (ADC0_CHCON10, ADC0_CHCONm_t, ADC0_CHCON10_ADDR); /* "ADC Channel Control Register 10" */
SFR_NOABS (ADC0_CHCON11, ADC0_CHCONm_t, ADC0_CHCON11_ADDR); /* "ADC Channel Control Register 11" */
SFR_NOABS (ADC0_CHCON12, ADC0_CHCONm_t, ADC0_CHCON12_ADDR); /* "ADC Channel Control Register 12" */
SFR_NOABS (ADC0_CHCON13, ADC0_CHCONm_t, ADC0_CHCON13_ADDR); /* "ADC Channel Control Register 13" */
SFR_NOABS (ADC0_CHCON14, ADC0_CHCONm_t, ADC0_CHCON14_ADDR); /* "ADC Channel Control Register 14" */
SFR_NOABS (ADC0_CHCON15, ADC0_CHCONm_t, ADC0_CHCON15_ADDR); /* "ADC Channel Control Register 15" */
SFR_NOABS (ADC0_CHCON2, ADC0_CHCONm_t, ADC0_CHCON2_ADDR); /* "ADC Channel Control Register 2" */
SFR_NOABS (ADC0_CHCON3, ADC0_CHCONm_t, ADC0_CHCON3_ADDR); /* "ADC Channel Control Register 3" */
SFR_NOABS (ADC0_CHCON4, ADC0_CHCONm_t, ADC0_CHCON4_ADDR); /* "ADC Channel Control Register 4" */
SFR_NOABS (ADC0_CHCON5, ADC0_CHCONm_t, ADC0_CHCON5_ADDR); /* "ADC Channel Control Register 5" */
SFR_NOABS (ADC0_CHCON6, ADC0_CHCONm_t, ADC0_CHCON6_ADDR); /* "ADC Channel Control Register 6" */
SFR_NOABS (ADC0_CHCON7, ADC0_CHCONm_t, ADC0_CHCON7_ADDR); /* "ADC Channel Control Register 7" */
SFR_NOABS (ADC0_CHCON8, ADC0_CHCONm_t, ADC0_CHCON8_ADDR); /* "ADC Channel Control Register 8" */
SFR_NOABS (ADC0_CHCON9, ADC0_CHCONm_t, ADC0_CHCON9_ADDR); /* "ADC Channel Control Register 9" */
SFR_NOABS (ADC0_CHIN, ADC0_CHIN_t, ADC0_CHIN_ADDR); /* "ADC Channel Injection Control Register" */
SFR_NOABS (ADC0_CHSTAT0, ADC0_CHSTATm_t, ADC0_CHSTAT0_ADDR); /* "ADC Channel Status Register 0" */
SFR_NOABS (ADC0_CHSTAT1, ADC0_CHSTATm_t, ADC0_CHSTAT1_ADDR); /* "ADC Channel Status Register 1" */
SFR_NOABS (ADC0_CHSTAT10, ADC0_CHSTATm_t, ADC0_CHSTAT10_ADDR); /* "ADC Channel Status Register 10" */
SFR_NOABS (ADC0_CHSTAT11, ADC0_CHSTATm_t, ADC0_CHSTAT11_ADDR); /* "ADC Channel Status Register 11" */
SFR_NOABS (ADC0_CHSTAT12, ADC0_CHSTATm_t, ADC0_CHSTAT12_ADDR); /* "ADC Channel Status Register 12" */
SFR_NOABS (ADC0_CHSTAT13, ADC0_CHSTATm_t, ADC0_CHSTAT13_ADDR); /* "ADC Channel Status Register 13" */
SFR_NOABS (ADC0_CHSTAT14, ADC0_CHSTATm_t, ADC0_CHSTAT14_ADDR); /* "ADC Channel Status Register 14" */
SFR_NOABS (ADC0_CHSTAT15, ADC0_CHSTATm_t, ADC0_CHSTAT15_ADDR); /* "ADC Channel Status Register 15" */
SFR_NOABS (ADC0_CHSTAT2, ADC0_CHSTATm_t, ADC0_CHSTAT2_ADDR); /* "ADC Channel Status Register 2" */
SFR_NOABS (ADC0_CHSTAT3, ADC0_CHSTATm_t, ADC0_CHSTAT3_ADDR); /* "ADC Channel Status Register 3" */
SFR_NOABS (ADC0_CHSTAT4, ADC0_CHSTATm_t, ADC0_CHSTAT4_ADDR); /* "ADC Channel Status Register 4" */
SFR_NOABS (ADC0_CHSTAT5, ADC0_CHSTATm_t, ADC0_CHSTAT5_ADDR); /* "ADC Channel Status Register 5" */
SFR_NOABS (ADC0_CHSTAT6, ADC0_CHSTATm_t, ADC0_CHSTAT6_ADDR); /* "ADC Channel Status Register 6" */
SFR_NOABS (ADC0_CHSTAT7, ADC0_CHSTATm_t, ADC0_CHSTAT7_ADDR); /* "ADC Channel Status Register 7" */
SFR_NOABS (ADC0_CHSTAT8, ADC0_CHSTATm_t, ADC0_CHSTAT8_ADDR); /* "ADC Channel Status Register 8" */
SFR_NOABS (ADC0_CHSTAT9, ADC0_CHSTATm_t, ADC0_CHSTAT9_ADDR); /* "ADC Channel Status Register 9" */
SFR_NOABS (ADC0_CLC, ADC0_CLC_t, ADC0_CLC_ADDR);  /* "ADC Clock Control Register" */
SFR_NOABS (ADC0_CON, ADC0_CON_t, ADC0_CON_ADDR);  /* "ADC Converter Control Register" */
SFR_NOABS (ADC0_EXCRP, ADC0_EXCRP_t, ADC0_EXCRP_ADDR); /* "ADC External Event Conversion Request Pending Register" */
SFR_NOABS (ADC0_EXTC, ADC0_EXTC_t, ADC0_EXTC_ADDR); /* "ADC External Trigger Control Register" */
SFR_NOABS (ADC0_FDR, ADC0_FDR_t, ADC0_FDR_ADDR);  /* "ADC Fractional Divider Register" */
SFR_NOABS (ADC0_ID, ADC0_ID_t, ADC0_ID_ADDR);     /* "ADC Module Identification Register" */
SFR_NOABS (ADC0_LCCON0, ADC0_LCCONm_t, ADC0_LCCON0_ADDR); /* "ADC Limit Check Control Register 0" */
SFR_NOABS (ADC0_LCCON1, ADC0_LCCONm_t, ADC0_LCCON1_ADDR); /* "ADC Limit Check Control Register 1" */
SFR_NOABS (ADC0_LCCON2, ADC0_LCCONm_t, ADC0_LCCON2_ADDR); /* "ADC Limit Check Control Register 2" */
SFR_NOABS (ADC0_LCCON3, ADC0_LCCONm_t, ADC0_LCCON3_ADDR); /* "ADC Limit Check Control Register 3" */
SFR_NOABS (ADC0_MSS0, ADC0_MSS0_t, ADC0_MSS0_ADDR); /* "ADC Module Service Request Status Register 0" */
SFR_NOABS (ADC0_MSS1, ADC0_MSS1_t, ADC0_MSS1_ADDR); /* "ADC Module Service Request Status Register 1" */
SFR_NOABS (ADC0_QR, ADC0_QR_t, ADC0_QR_ADDR);     /* "ADC Queue Register" */
SFR_NOABS (ADC0_QUEUE0, ADC0_QUEUE0_t, ADC0_QUEUE0_ADDR); /* "ADC Queue Status Register" */
SFR_NOABS (ADC0_QUEUET0, ADC0_QUEUETm_t, ADC0_QUEUET0_ADDR); /* "ADC Queue Test Register 0" */
SFR_NOABS (ADC0_QUEUET1, ADC0_QUEUETm_t, ADC0_QUEUET1_ADDR); /* "ADC Queue Test Register 1" */
SFR_NOABS (ADC0_QUEUET10, ADC0_QUEUETm_t, ADC0_QUEUET10_ADDR); /* "ADC Queue Test Register 10" */
SFR_NOABS (ADC0_QUEUET11, ADC0_QUEUETm_t, ADC0_QUEUET11_ADDR); /* "ADC Queue Test Register 11" */
SFR_NOABS (ADC0_QUEUET12, ADC0_QUEUETm_t, ADC0_QUEUET12_ADDR); /* "ADC Queue Test Register 12" */
SFR_NOABS (ADC0_QUEUET13, ADC0_QUEUETm_t, ADC0_QUEUET13_ADDR); /* "ADC Queue Test Register 13" */
SFR_NOABS (ADC0_QUEUET14, ADC0_QUEUETm_t, ADC0_QUEUET14_ADDR); /* "ADC Queue Test Register 14" */
SFR_NOABS (ADC0_QUEUET15, ADC0_QUEUETm_t, ADC0_QUEUET15_ADDR); /* "ADC Queue Test Register 15" */
SFR_NOABS (ADC0_QUEUET2, ADC0_QUEUETm_t, ADC0_QUEUET2_ADDR); /* "ADC Queue Test Register 2" */
SFR_NOABS (ADC0_QUEUET3, ADC0_QUEUETm_t, ADC0_QUEUET3_ADDR); /* "ADC Queue Test Register 3" */
SFR_NOABS (ADC0_QUEUET4, ADC0_QUEUETm_t, ADC0_QUEUET4_ADDR); /* "ADC Queue Test Register 4" */
SFR_NOABS (ADC0_QUEUET5, ADC0_QUEUETm_t, ADC0_QUEUET5_ADDR); /* "ADC Queue Test Register 5" */
SFR_NOABS (ADC0_QUEUET6, ADC0_QUEUETm_t, ADC0_QUEUET6_ADDR); /* "ADC Queue Test Register 6" */
SFR_NOABS (ADC0_QUEUET7, ADC0_QUEUETm_t, ADC0_QUEUET7_ADDR); /* "ADC Queue Test Register 7" */
SFR_NOABS (ADC0_QUEUET8, ADC0_QUEUETm_t, ADC0_QUEUET8_ADDR); /* "ADC Queue Test Register 8" */
SFR_NOABS (ADC0_QUEUET9, ADC0_QUEUETm_t, ADC0_QUEUET9_ADDR); /* "ADC Queue Test Register 9" */
SFR_NOABS (ADC0_REQ0, ADC0_REQ0_t, ADC0_REQ0_ADDR); /* "ADC Conversion Request Register SW0" */
SFR_NOABS (ADC0_SAL, ADC0_SAL_t, ADC0_SAL_ADDR);  /* "ADC Source Arbitration Level Register" */
SFR_NOABS (ADC0_SCN, ADC0_SCN_t, ADC0_SCN_ADDR);  /* "ADC Auto Scan Control Register" */
SFR_NOABS (ADC0_SCON, ADC0_SCON_t, ADC0_SCON_ADDR); /* "ADC Source Control Register" */
SFR_NOABS (ADC0_SRC0, ADC0_SRCm_t, ADC0_SRC0_ADDR); /* "ADC Service Request Control Register 0" */
SFR_NOABS (ADC0_SRC1, ADC0_SRCm_t, ADC0_SRC1_ADDR); /* "ADC Service Request Control Register 1" */
SFR_NOABS (ADC0_SRC2, ADC0_SRCm_t, ADC0_SRC2_ADDR); /* "ADC Service Request Control Register 2" */
SFR_NOABS (ADC0_SRC3, ADC0_SRCm_t, ADC0_SRC3_ADDR); /* "ADC Service Request Control Register 3" */
SFR_NOABS (ADC0_SRNP, ADC0_SRNP_t, ADC0_SRNP_ADDR); /* "ADC Service Request Node Pointer Register" */
SFR_NOABS (ADC0_STAT, ADC0_STAT_t, ADC0_STAT_ADDR); /* "ADC Converter Status Register" */
SFR_NOABS (ADC0_SW0CRP, ADC0_SW0CRP_t, ADC0_SW0CRP_ADDR); /* "ADC Software SW0 Conversion Request Pending Register" */
SFR_NOABS (ADC0_TCON, ADC0_TCON_t, ADC0_TCON_ADDR); /* "ADC Timer Control Register" */
SFR_NOABS (ADC0_TCRP, ADC0_TCRP_t, ADC0_TCRP_ADDR); /* "ADC Timer Conversion Request Pending Register" */
SFR_NOABS (ADC0_TEST, ADC0_TEST_t, ADC0_TEST_ADDR); /* "ADC Test Register" */
SFR_NOABS (ADC0_TSTAT, ADC0_TSTAT_t, ADC0_TSTAT_ADDR); /* "ADC Timer Status Register" */
SFR_NOABS (ADC0_TTC, ADC0_TTC_t, ADC0_TTC_ADDR);  /* "ADC Timer Trigger Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ADC0_H_ (block "ADC0 LL") */


