/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "FADC LL" of TriCore TC1766B (25 SFRs) */

#ifndef _HAVE_TRICORE_FADC_ADDRESSES_H_
#define _HAVE_TRICORE_FADC_ADDRESSES_H_

#define FADC_CLC_ADDR         0xF0100300     /* "FADC Clock Control Register" */
#define FADC_ID_ADDR          0xF0100308     /* "FADC Module Identification Register" */
#define FADC_FDR_ADDR         0xF010030C     /* "FADC Fractional Divider Register" */
#define FADC_CRSR_ADDR        0xF0100310     /* "Conversion Request Status Register" */
#define FADC_FMR_ADDR         0xF0100314     /* "FADC Flag Modification Register" */
#define FADC_NCTR_ADDR        0xF0100318     /* "Neighbour Channel Trigger Register" */
#define FADC_GCR_ADDR         0xF010031C     /* "Global Control Register" */
#define FADC_CFGR0_ADDR       0xF0100320     /* "Configuration Register Channel 0" */
#define FADC_CFGR1_ADDR       0xF0100324     /* "Configuration Register Channel 1" */
#define FADC_ACR0_ADDR        0xF0100330     /* "Analog Control Register Channel 0" */
#define FADC_ACR1_ADDR        0xF0100334     /* "Analog Control Register Channel 1" */
#define FADC_RCH0_ADDR        0xF0100340     /* "Conversion Result Register Channel 0" */
#define FADC_RCH1_ADDR        0xF0100344     /* "Conversion Result Register Channel 1" */
#define FADC_FCR0_ADDR        0xF0100360     /* "Filter 0 Control Register" */
#define FADC_CRR0_ADDR        0xF0100364     /* "Filter 0 Current Result Register" */
#define FADC_IRR10_ADDR       0xF0100368     /* "Filter 0 Intermediate Result Register 1" */
#define FADC_IRR20_ADDR       0xF010036C     /* "Filter 0 Intermediate Result Register 2" */
#define FADC_IRR30_ADDR       0xF0100370     /* "Filter 0 Intermediate Result Register 3" */
#define FADC_FRR0_ADDR        0xF0100374     /* "Filter 0 Final Result Register" */
#define FADC_FCR1_ADDR        0xF0100380     /* "Filter 1 Control Register" */
#define FADC_CRR1_ADDR        0xF0100384     /* "Filter 1 Current Result Register" */
#define FADC_IRR11_ADDR       0xF0100388     /* "Filter 1 Intermediate Result Register 1" */
#define FADC_FRR1_ADDR        0xF0100394     /* "Filter 1 Final Result Register" */
#define FADC_SRC1_ADDR        0xF01003F8     /* "FADC Service Request Control Register 1" */
#define FADC_SRC0_ADDR        0xF01003FC     /* "FADC Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_FADC_ADDRESSES_H_ (block "FADC LL") */


