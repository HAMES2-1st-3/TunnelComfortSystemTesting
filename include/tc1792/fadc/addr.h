/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "FADC" of TriCore TC1792 (33 SFRs) */

#ifndef _HAVE_TRICORE_FADC_ADDRESSES_H_
#define _HAVE_TRICORE_FADC_ADDRESSES_H_

#define FADC_CLC_ADDR         0xF0100300     /* "FADC Clock Control Register" */
#define FADC_ID_ADDR          0xF0100308     /* "FADC Module Identification Register" */
#define FADC_FDR_ADDR         0xF010030C     /* "FADC Fractional Divider Register" */
#define FADC_CRSR_ADDR        0xF0100310     /* "FADC Conversion Request Status Register" */
#define FADC_FMR_ADDR         0xF0100314     /* "FADC Flag Modification Register" */
#define FADC_NCTR_ADDR        0xF0100318     /* "FADC Neighbor Channel Trigger Register" */
#define FADC_GCR_ADDR         0xF010031C     /* "FADC Global Control Register" */
#define FADC_CFGR0_ADDR       0xF0100320     /* "FADC Channel 0 Configuration Register" */
#define FADC_CFGR1_ADDR       0xF0100324     /* "FADC Channel 1 Configuration Register" */
#define FADC_CFGR2_ADDR       0xF0100328     /* "FADC Channel 2 Configuration Register" */
#define FADC_CFGR3_ADDR       0xF010032C     /* "FADC Channel 3 Configuration Register" */
#define FADC_ACR0_ADDR        0xF0100330     /* "FADC Channel 0 Analog Control Register" */
#define FADC_ACR1_ADDR        0xF0100334     /* "FADC Channel 1 Analog Control Register" */
#define FADC_ACR2_ADDR        0xF0100338     /* "FADC Channel 2 Analog Control Register" */
#define FADC_ACR3_ADDR        0xF010033C     /* "FADC Channel 3 Analog Control Register" */
#define FADC_RCH0_ADDR        0xF0100340     /* "FADC Channel 0 Conversion Result Register" */
#define FADC_RCH1_ADDR        0xF0100344     /* "FADC Channel 1 Conversion Result Register" */
#define FADC_RCH2_ADDR        0xF0100348     /* "FADC Channel 2 Conversion Result Register" */
#define FADC_RCH3_ADDR        0xF010034C     /* "FADC Channel 3 Conversion Result Register" */
#define FADC_FCR0_ADDR        0xF0100360     /* "FADC Filter 0 Control Register" */
#define FADC_CRR0_ADDR        0xF0100364     /* "FADC Filter 0 Current Result Register" */
#define FADC_IRR10_ADDR       0xF0100368     /* "FADC Filter 0 Intermediate Result Register 1" */
#define FADC_IRR20_ADDR       0xF010036C     /* "FADC Filter 0 Intermediate Result Register 2" */
#define FADC_IRR30_ADDR       0xF0100370     /* "FADC Filter 0 Intermediate Result Register 3" */
#define FADC_FRR0_ADDR        0xF0100374     /* "FADC Filter 0 Final Result Register" */
#define FADC_FCR1_ADDR        0xF0100380     /* "FADC Filter 1 Control Register" */
#define FADC_CRR1_ADDR        0xF0100384     /* "FADC Filter 1 Current Result Register" */
#define FADC_IRR11_ADDR       0xF0100388     /* "FADC Filter 1 Intermediate Result Register 1" */
#define FADC_FRR1_ADDR        0xF0100394     /* "FADC Filter 1 Final Result Register" */
#define FADC_SRC3_ADDR        0xF01003F0     /* "FADC Service Request Control Register 3" */
#define FADC_SRC2_ADDR        0xF01003F4     /* "FADC Service Request Control Register 2" */
#define FADC_SRC1_ADDR        0xF01003F8     /* "FADC Service Request Control Register 1" */
#define FADC_SRC0_ADDR        0xF01003FC     /* "FADC Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_FADC_ADDRESSES_H_ (block "FADC") */


