/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC1" of TriCore TC1792 (62 SFRs) */

#ifndef _HAVE_TRICORE_ADC1_ADDRESSES_H_
#define _HAVE_TRICORE_ADC1_ADDRESSES_H_

#define ADC1_CHCON0_ADDR      0xF0100610     /* "ADC1 Channel Control Register 0" */
#define ADC1_CHCON1_ADDR      0xF0100614     /* "ADC1 Channel Control Register 1" */
#define ADC1_CHCON2_ADDR      0xF0100618     /* "ADC1 Channel Control Register 2" */
#define ADC1_CHCON3_ADDR      0xF010061C     /* "ADC1 Channel Control Register 3" */
#define ADC1_CHCON4_ADDR      0xF0100620     /* "ADC1 Channel Control Register 4" */
#define ADC1_CHCON5_ADDR      0xF0100624     /* "ADC1 Channel Control Register 5" */
#define ADC1_CHCON6_ADDR      0xF0100628     /* "ADC1 Channel Control Register 6" */
#define ADC1_CHCON7_ADDR      0xF010062C     /* "ADC1 Channel Control Register 7" */
#define ADC1_CHCON8_ADDR      0xF0100630     /* "ADC1 Channel Control Register 8" */
#define ADC1_CHCON9_ADDR      0xF0100634     /* "ADC1 Channel Control Register 9" */
#define ADC1_CHCON10_ADDR     0xF0100638     /* "ADC1 Channel Control Register 10" */
#define ADC1_CHCON11_ADDR     0xF010063C     /* "ADC1 Channel Control Register 11" */
#define ADC1_CHCON12_ADDR     0xF0100640     /* "ADC1 Channel Control Register 12" */
#define ADC1_CHCON13_ADDR     0xF0100644     /* "ADC1 Channel Control Register 13" */
#define ADC1_CHCON14_ADDR     0xF0100648     /* "ADC1 Channel Control Register 14" */
#define ADC1_CHCON15_ADDR     0xF010064C     /* "ADC1 Channel Control Register 15" */
#define ADC1_AP_ADDR          0xF0100684     /* "ADC1 Arbitration Participation Register" */
#define ADC1_SAL_ADDR         0xF0100688     /* "ADC1 Source Arbitration Level Register" */
#define ADC1_TTC_ADDR         0xF010068C     /* "ADC1 Timer Trigger Control Register" */
#define ADC1_EXTC_ADDR        0xF0100690     /* "ADC1 External Trigger Control Register" */
#define ADC1_SCON_ADDR        0xF0100698     /* "ADC1 Source Control Register" */
#define ADC1_LCCON0_ADDR      0xF0100700     /* "ADC1 Limit Check Control Register 0" */
#define ADC1_LCCON1_ADDR      0xF0100704     /* "ADC1 Limit Check Control Register 1" */
#define ADC1_LCCON2_ADDR      0xF0100708     /* "ADC1 Limit Check Control Register 2" */
#define ADC1_LCCON3_ADDR      0xF010070C     /* "ADC1 Limit Check Control Register 3" */
#define ADC1_TCON_ADDR        0xF0100714     /* "ADC1 Timer Control Register" */
#define ADC1_CHIN_ADDR        0xF0100718     /* "ADC1 Channel Injection Control Register" */
#define ADC1_QR_ADDR          0xF010071C     /* "ADC1 Queue Register" */
#define ADC1_CON_ADDR         0xF0100720     /* "ADC1 Converter Control Register" */
#define ADC1_SCN_ADDR         0xF0100724     /* "ADC1 Auto Scan Control Register" */
#define ADC1_REQ0_ADDR        0xF0100728     /* "ADC1 Conversion Request Register SW0" */
#define ADC1_CHSTAT0_ADDR     0xF0100730     /* "ADC1 Channel Status Register 0" */
#define ADC1_CHSTAT1_ADDR     0xF0100734     /* "ADC1 Channel Status Register 1" */
#define ADC1_CHSTAT2_ADDR     0xF0100738     /* "ADC1 Channel Status Register 2" */
#define ADC1_CHSTAT3_ADDR     0xF010073C     /* "ADC1 Channel Status Register 3" */
#define ADC1_CHSTAT4_ADDR     0xF0100740     /* "ADC1 Channel Status Register 4" */
#define ADC1_CHSTAT5_ADDR     0xF0100744     /* "ADC1 Channel Status Register 5" */
#define ADC1_CHSTAT6_ADDR     0xF0100748     /* "ADC1 Channel Status Register 6" */
#define ADC1_CHSTAT7_ADDR     0xF010074C     /* "ADC1 Channel Status Register 7" */
#define ADC1_CHSTAT8_ADDR     0xF0100750     /* "ADC1 Channel Status Register 8" */
#define ADC1_CHSTAT9_ADDR     0xF0100754     /* "ADC1 Channel Status Register 9" */
#define ADC1_CHSTAT10_ADDR    0xF0100758     /* "ADC1 Channel Status Register 10" */
#define ADC1_CHSTAT11_ADDR    0xF010075C     /* "ADC1 Channel Status Register 11" */
#define ADC1_CHSTAT12_ADDR    0xF0100760     /* "ADC1 Channel Status Register 12" */
#define ADC1_CHSTAT13_ADDR    0xF0100764     /* "ADC1 Channel Status Register 13" */
#define ADC1_CHSTAT14_ADDR    0xF0100768     /* "ADC1 Channel Status Register 14" */
#define ADC1_CHSTAT15_ADDR    0xF010076C     /* "ADC1 Channel Status Register 15" */
#define ADC1_QUEUE0_ADDR      0xF0100770     /* "ADC1 Queue Status Register" */
#define ADC1_SW0CRP_ADDR      0xF0100780     /* "ADC1 Software SW0 Conversion Request Pending Register" */
#define ADC1_ASCRP_ADDR       0xF0100788     /* "ADC1 Auto Scan Conversion Request Pending Register" */
#define ADC1_SYSTAT_ADDR      0xF0100790     /* "ADC1 Synchronization Status Register" */
#define ADC1_TSTAT_ADDR       0xF01007B0     /* "ADC1 Timer Status Register" */
#define ADC1_STAT_ADDR        0xF01007B4     /* "ADC1 Converter Status Register" */
#define ADC1_TCRP_ADDR        0xF01007B8     /* "ADC1 Timer Conversion Request Pending Register" */
#define ADC1_EXCRP_ADDR       0xF01007BC     /* "ADC1 External Conversion Request Pending Register" */
#define ADC1_MSS0_ADDR        0xF01007D0     /* "ADC1 Module Service Request Status Register 0" */
#define ADC1_MSS1_ADDR        0xF01007D4     /* "ADC1 Module Service Request Status Register 1" */
#define ADC1_SRNP_ADDR        0xF01007DC     /* "ADC1 Service Request Node Pointer Register" */
#define ADC1_SRC3_ADDR        0xF01007F0     /* "ADC1 Service Request Control Register 3" */
#define ADC1_SRC2_ADDR        0xF01007F4     /* "ADC1 Service Request Control Register 2" */
#define ADC1_SRC1_ADDR        0xF01007F8     /* "ADC1 Service Request Control Register 1" */
#define ADC1_SRC0_ADDR        0xF01007FC     /* "ADC1 Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_ADC1_ADDRESSES_H_ (block "ADC1") */


