/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "ADC0" of TriCore TC1792 (65 SFRs) */

#ifndef _HAVE_TRICORE_ADC0_ADDRESSES_H_
#define _HAVE_TRICORE_ADC0_ADDRESSES_H_

#define ADC0_CLC_ADDR         0xF0100400     /* "ADC Clock Control Register" */
#define ADC0_ID_ADDR          0xF0100408     /* "ADC Module Identification Register" */
#define ADC0_FDR_ADDR         0xF010040C     /* "ADC Fractional Divider Register" */
#define ADC0_CHCON0_ADDR      0xF0100410     /* "ADC0 Channel Control Register 0" */
#define ADC0_CHCON1_ADDR      0xF0100414     /* "ADC0 Channel Control Register 1" */
#define ADC0_CHCON2_ADDR      0xF0100418     /* "ADC0 Channel Control Register 2" */
#define ADC0_CHCON3_ADDR      0xF010041C     /* "ADC0 Channel Control Register 3" */
#define ADC0_CHCON4_ADDR      0xF0100420     /* "ADC0 Channel Control Register 4" */
#define ADC0_CHCON5_ADDR      0xF0100424     /* "ADC0 Channel Control Register 5" */
#define ADC0_CHCON6_ADDR      0xF0100428     /* "ADC0 Channel Control Register 6" */
#define ADC0_CHCON7_ADDR      0xF010042C     /* "ADC0 Channel Control Register 7" */
#define ADC0_CHCON8_ADDR      0xF0100430     /* "ADC0 Channel Control Register 8" */
#define ADC0_CHCON9_ADDR      0xF0100434     /* "ADC0 Channel Control Register 9" */
#define ADC0_CHCON10_ADDR     0xF0100438     /* "ADC0 Channel Control Register 10" */
#define ADC0_CHCON11_ADDR     0xF010043C     /* "ADC0 Channel Control Register 11" */
#define ADC0_CHCON12_ADDR     0xF0100440     /* "ADC0 Channel Control Register 12" */
#define ADC0_CHCON13_ADDR     0xF0100444     /* "ADC0 Channel Control Register 13" */
#define ADC0_CHCON14_ADDR     0xF0100448     /* "ADC0 Channel Control Register 14" */
#define ADC0_CHCON15_ADDR     0xF010044C     /* "ADC0 Channel Control Register 15" */
#define ADC0_AP_ADDR          0xF0100484     /* "ADC0 Arbitration Participation Register" */
#define ADC0_SAL_ADDR         0xF0100488     /* "ADC0 Source Arbitration Level Register" */
#define ADC0_TTC_ADDR         0xF010048C     /* "ADC0 Timer Trigger Control Register" */
#define ADC0_EXTC_ADDR        0xF0100490     /* "ADC0 External Trigger Control Register" */
#define ADC0_SCON_ADDR        0xF0100498     /* "ADC0 Source Control Register" */
#define ADC0_LCCON0_ADDR      0xF0100500     /* "ADC0 Limit Check Control Register 0" */
#define ADC0_LCCON1_ADDR      0xF0100504     /* "ADC0 Limit Check Control Register 1" */
#define ADC0_LCCON2_ADDR      0xF0100508     /* "ADC0 Limit Check Control Register 2" */
#define ADC0_LCCON3_ADDR      0xF010050C     /* "ADC0 Limit Check Control Register 3" */
#define ADC0_TCON_ADDR        0xF0100514     /* "ADC0 Timer Control Register" */
#define ADC0_CHIN_ADDR        0xF0100518     /* "ADC0 Channel Injection Control Register" */
#define ADC0_QR_ADDR          0xF010051C     /* "ADC0 Queue Register" */
#define ADC0_CON_ADDR         0xF0100520     /* "ADC0 Converter Control Register" */
#define ADC0_SCN_ADDR         0xF0100524     /* "ADC0 Auto Scan Control Register" */
#define ADC0_REQ0_ADDR        0xF0100528     /* "ADC0 Conversion Request Register SW0" */
#define ADC0_CHSTAT0_ADDR     0xF0100530     /* "ADC0 Channel Status Register 0" */
#define ADC0_CHSTAT1_ADDR     0xF0100534     /* "ADC0 Channel Status Register 1" */
#define ADC0_CHSTAT2_ADDR     0xF0100538     /* "ADC0 Channel Status Register 2" */
#define ADC0_CHSTAT3_ADDR     0xF010053C     /* "ADC0 Channel Status Register 3" */
#define ADC0_CHSTAT4_ADDR     0xF0100540     /* "ADC0 Channel Status Register 4" */
#define ADC0_CHSTAT5_ADDR     0xF0100544     /* "ADC0 Channel Status Register 5" */
#define ADC0_CHSTAT6_ADDR     0xF0100548     /* "ADC0 Channel Status Register 6" */
#define ADC0_CHSTAT7_ADDR     0xF010054C     /* "ADC0 Channel Status Register 7" */
#define ADC0_CHSTAT8_ADDR     0xF0100550     /* "ADC0 Channel Status Register 8" */
#define ADC0_CHSTAT9_ADDR     0xF0100554     /* "ADC0 Channel Status Register 9" */
#define ADC0_CHSTAT10_ADDR    0xF0100558     /* "ADC0 Channel Status Register 10" */
#define ADC0_CHSTAT11_ADDR    0xF010055C     /* "ADC0 Channel Status Register 11" */
#define ADC0_CHSTAT12_ADDR    0xF0100560     /* "ADC0 Channel Status Register 12" */
#define ADC0_CHSTAT13_ADDR    0xF0100564     /* "ADC0 Channel Status Register 13" */
#define ADC0_CHSTAT14_ADDR    0xF0100568     /* "ADC0 Channel Status Register 14" */
#define ADC0_CHSTAT15_ADDR    0xF010056C     /* "ADC0 Channel Status Register 15" */
#define ADC0_QUEUE0_ADDR      0xF0100570     /* "ADC0 Queue Status Register" */
#define ADC0_SW0CRP_ADDR      0xF0100580     /* "ADC0 Software SW0 Conversion Request Pending Register" */
#define ADC0_ASCRP_ADDR       0xF0100588     /* "ADC0 Auto Scan Conversion Request Pending Register" */
#define ADC0_SYSTAT_ADDR      0xF0100590     /* "ADC0 Synchronization Status Register" */
#define ADC0_TSTAT_ADDR       0xF01005B0     /* "ADC0 Timer Status Register" */
#define ADC0_STAT_ADDR        0xF01005B4     /* "ADC0 Converter Status Register" */
#define ADC0_TCRP_ADDR        0xF01005B8     /* "ADC0 Timer Conversion Request Pending Register" */
#define ADC0_EXCRP_ADDR       0xF01005BC     /* "ADC0 External Conversion Request Pending Register" */
#define ADC0_MSS0_ADDR        0xF01005D0     /* "ADC0 Module Service Request Status Register 0" */
#define ADC0_MSS1_ADDR        0xF01005D4     /* "ADC0 Module Service Request Status Register 1" */
#define ADC0_SRNP_ADDR        0xF01005DC     /* "ADC0 Service Request Node Pointer Register" */
#define ADC0_SRC3_ADDR        0xF01005F0     /* "ADC0 Service Request Control Register 3" */
#define ADC0_SRC2_ADDR        0xF01005F4     /* "ADC0 Service Request Control Register 2" */
#define ADC0_SRC1_ADDR        0xF01005F8     /* "ADC0 Service Request Control Register 1" */
#define ADC0_SRC0_ADDR        0xF01005FC     /* "ADC0 Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_ADC0_ADDRESSES_H_ (block "ADC0") */


