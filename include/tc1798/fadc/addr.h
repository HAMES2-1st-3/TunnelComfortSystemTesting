/* (c) HighTec EDV-Systeme GmbH */

/* block "FADC" of TriCore TC1798 (46 SFRs) */

#ifndef _HAVE_TRICORE_FADC_ADDRESSES_H_
#define _HAVE_TRICORE_FADC_ADDRESSES_H_

#define FADC_CLC_ADDR         0xF0100400     /* "Clock Control Register" */
#define FADC_ID_ADDR          0xF0100408     /* "Module Identification Register" */
#define FADC_FDR_ADDR         0xF010040C     /* "Fractional Divider Register" */
#define FADC_CRSR_ADDR        0xF0100410     /* "Conversion Request Status Register" */
#define FADC_FMR_ADDR         0xF0100414     /* "Flag Modification Register" */
#define FADC_NCTR_ADDR        0xF0100418     /* "Neighbor Channel Trigger Register" */
#define FADC_GCR_ADDR         0xF010041C     /* "Global Control Register" */
#define FADC_CFGR0_ADDR       0xF0100420     /* "Channel 0 Configuration Register" */
#define FADC_CFGR1_ADDR       0xF0100424     /* "Channel 1 Configuration Register" */
#define FADC_CFGR2_ADDR       0xF0100428     /* "Channel 2 Configuration Register" */
#define FADC_CFGR3_ADDR       0xF010042C     /* "Channel 3 Configuration Register" */
#define FADC_ACR0_ADDR        0xF0100430     /* "Channel 0 Analog Control Register" */
#define FADC_ACR1_ADDR        0xF0100434     /* "Channel 1 Analog Control Register" */
#define FADC_ACR2_ADDR        0xF0100438     /* "Channel 2 Analog Control Register" */
#define FADC_ACR3_ADDR        0xF010043C     /* "Channel 3 Analog Control Register" */
#define FADC_RCH0_ADDR        0xF0100440     /* "Channel 0 Conversion Result Register" */
#define FADC_RCH1_ADDR        0xF0100444     /* "Channel 1 Conversion Result Register" */
#define FADC_RCH2_ADDR        0xF0100448     /* "Channel 2 Conversion Result Register" */
#define FADC_RCH3_ADDR        0xF010044C     /* "Channel 3 Conversion Result Register" */
#define FADC_ALR_ADDR         0xF0100454     /* "Alias Register" */
#define FADC_FCR0_ADDR        0xF0100460     /* "Filter 0 Control Register" */
#define FADC_CRR0_ADDR        0xF0100464     /* "Filter 0 Current Result Register" */
#define FADC_IRR10_ADDR       0xF0100468     /* "Filter 0 Intermediate Result Register 1" */
#define FADC_IRR20_ADDR       0xF010046C     /* "Filter 0 Intermediate Result Register 2" */
#define FADC_IRR30_ADDR       0xF0100470     /* "Filter 0 Intermediate Result Register 3" */
#define FADC_FRR0_ADDR        0xF0100474     /* "Filter 0 Final Result Register" */
#define FADC_FCR1_ADDR        0xF0100480     /* "Filter 1 Control Register" */
#define FADC_CRR1_ADDR        0xF0100484     /* "Filter 1 Current Result Register" */
#define FADC_IRR11_ADDR       0xF0100488     /* "Filter 1 Intermediate Result Register 1" */
#define FADC_FRR1_ADDR        0xF0100494     /* "Filter 1 Final Result Register" */
#define FADC_SFRR1_ADDR       0xF0100498     /* "Filter 1 Shifted Final Result Register" */
#define FADC_FCR2_ADDR        0xF01004A0     /* "Filter 2 Control Register" */
#define FADC_CRR2_ADDR        0xF01004A4     /* "Filter 2 Current Result Register" */
#define FADC_IRR12_ADDR       0xF01004A8     /* "Filter 2 Intermediate Result Register 1" */
#define FADC_IRR22_ADDR       0xF01004AC     /* "Filter 2 Intermediate Result Register 2" */
#define FADC_IRR32_ADDR       0xF01004B0     /* "Filter 2 Intermediate Result Register 3" */
#define FADC_FRR2_ADDR        0xF01004B4     /* "Filter 2 Final Result Register" */
#define FADC_FCR3_ADDR        0xF01004C0     /* "Filter 3 Control Register" */
#define FADC_CRR3_ADDR        0xF01004C4     /* "Filter 3 Current Result Register" */
#define FADC_IRR13_ADDR       0xF01004C8     /* "Filter 3 Intermediate Result Register 1" */
#define FADC_FRR3_ADDR        0xF01004D4     /* "Filter 3 Final Result Register" */
#define FADC_SFRR3_ADDR       0xF01004D8     /* "Filter 3 Shifted Final Result Register" */
#define FADC_SRC3_ADDR        0xF01004F0     /* "Service Request Control Register 3" */
#define FADC_SRC2_ADDR        0xF01004F4     /* "Service Request Control Register 2" */
#define FADC_SRC1_ADDR        0xF01004F8     /* "Service Request Control Register 1" */
#define FADC_SRC0_ADDR        0xF01004FC     /* "Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_FADC_ADDRESSES_H_ (block "FADC") */


