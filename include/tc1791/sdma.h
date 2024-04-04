/* (c) HighTec EDV-Systeme GmbH */

/* block "SDMA" of TriCore TC1791 (138 SFRs) */

#include <tc1791/sdma/addr.h>

#include <tc1791/sdma/masks.h>
#include <tc1791/sdma/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/sdma/types.h>
#include <tc1791/sdma/sharetypes.h>

#ifndef _HAVE_TRICORE_SDMA_H_
#define _HAVE_TRICORE_SDMA_H_

#include <tricore-abs-noabs.h>

SFR_ABS (SDMA_ADRCR00, SDMA_ADRCRm_t, SDMA_ADRCR00_ADDR); /* "SDMA Channel 00 Address Control Register" */
SFR_ABS (SDMA_ADRCR01, SDMA_ADRCRm_t, SDMA_ADRCR01_ADDR); /* "SDMA Channel 01 Address Control Register" */
SFR_ABS (SDMA_ADRCR02, SDMA_ADRCRm_t, SDMA_ADRCR02_ADDR); /* "SDMA Channel 02 Address Control Register" */
SFR_ABS (SDMA_ADRCR03, SDMA_ADRCRm_t, SDMA_ADRCR03_ADDR); /* "SDMA Channel 03 Address Control Register" */
SFR_ABS (SDMA_ADRCR04, SDMA_ADRCRm_t, SDMA_ADRCR04_ADDR); /* "SDMA Channel 04 Address Control Register" */
SFR_ABS (SDMA_ADRCR05, SDMA_ADRCRm_t, SDMA_ADRCR05_ADDR); /* "SDMA Channel 05 Address Control Register" */
SFR_ABS (SDMA_ADRCR06, SDMA_ADRCRm_t, SDMA_ADRCR06_ADDR); /* "SDMA Channel 06 Address Control Register" */
SFR_ABS (SDMA_ADRCR07, SDMA_ADRCRm_t, SDMA_ADRCR07_ADDR); /* "SDMA Channel 07 Address Control Register" */
SFR_ABS (SDMA_CHCR00, SDMA_CHCRm_t, SDMA_CHCR00_ADDR); /* "SDMA Channel 00 Control Register" */
SFR_ABS (SDMA_CHCR01, SDMA_CHCRm_t, SDMA_CHCR01_ADDR); /* "SDMA Channel 01 Control Register" */
SFR_ABS (SDMA_CHCR02, SDMA_CHCRm_t, SDMA_CHCR02_ADDR); /* "SDMA Channel 02 Control Register" */
SFR_ABS (SDMA_CHCR03, SDMA_CHCRm_t, SDMA_CHCR03_ADDR); /* "SDMA Channel 03 Control Register" */
SFR_ABS (SDMA_CHCR04, SDMA_CHCRm_t, SDMA_CHCR04_ADDR); /* "SDMA Channel 04 Control Register" */
SFR_ABS (SDMA_CHCR05, SDMA_CHCRm_t, SDMA_CHCR05_ADDR); /* "SDMA Channel 05 Control Register" */
SFR_ABS (SDMA_CHCR06, SDMA_CHCRm_t, SDMA_CHCR06_ADDR); /* "SDMA Channel 06 Control Register" */
SFR_ABS (SDMA_CHCR07, SDMA_CHCRm_t, SDMA_CHCR07_ADDR); /* "SDMA Channel 07 Control Register" */
SFR_ABS (SDMA_CHICR00, SDMA_CHICRm_t, SDMA_CHICR00_ADDR); /* "SDMA Channel 00 Interrupt Control Register" */
SFR_ABS (SDMA_CHICR01, SDMA_CHICRm_t, SDMA_CHICR01_ADDR); /* "SDMA Channel 01 Interrupt Control Register" */
SFR_ABS (SDMA_CHICR02, SDMA_CHICRm_t, SDMA_CHICR02_ADDR); /* "SDMA Channel 02 Interrupt Control Register" */
SFR_ABS (SDMA_CHICR03, SDMA_CHICRm_t, SDMA_CHICR03_ADDR); /* "SDMA Channel 03 Interrupt Control Register" */
SFR_ABS (SDMA_CHICR04, SDMA_CHICRm_t, SDMA_CHICR04_ADDR); /* "SDMA Channel 04 Interrupt Control Register" */
SFR_ABS (SDMA_CHICR05, SDMA_CHICRm_t, SDMA_CHICR05_ADDR); /* "SDMA Channel 05 Interrupt Control Register" */
SFR_ABS (SDMA_CHICR06, SDMA_CHICRm_t, SDMA_CHICR06_ADDR); /* "SDMA Channel 06 Interrupt Control Register" */
SFR_ABS (SDMA_CHICR07, SDMA_CHICRm_t, SDMA_CHICR07_ADDR); /* "SDMA Channel 07 Interrupt Control Register" */
SFR_ABS (SDMA_CHRSTR, SDMA_CHRSTR_t, SDMA_CHRSTR_ADDR); /* "SDMA Channel Reset Request Register" */
SFR_ABS (SDMA_CHSR00, SDMA_CHSRm_t, SDMA_CHSR00_ADDR); /* "SDMA Channel 00 Status Register" */
SFR_ABS (SDMA_CHSR01, SDMA_CHSRm_t, SDMA_CHSR01_ADDR); /* "SDMA Channel 01 Status Register" */
SFR_ABS (SDMA_CHSR02, SDMA_CHSRm_t, SDMA_CHSR02_ADDR); /* "SDMA Channel 02 Status Register" */
SFR_ABS (SDMA_CHSR03, SDMA_CHSRm_t, SDMA_CHSR03_ADDR); /* "SDMA Channel 03 Status Register" */
SFR_ABS (SDMA_CHSR04, SDMA_CHSRm_t, SDMA_CHSR04_ADDR); /* "SDMA Channel 04 Status Register" */
SFR_ABS (SDMA_CHSR05, SDMA_CHSRm_t, SDMA_CHSR05_ADDR); /* "SDMA Channel 05 Status Register" */
SFR_ABS (SDMA_CHSR06, SDMA_CHSRm_t, SDMA_CHSR06_ADDR); /* "SDMA Channel 06 Status Register" */
SFR_ABS (SDMA_CHSR07, SDMA_CHSRm_t, SDMA_CHSR07_ADDR); /* "SDMA Channel 07 Status Register" */
SFR_ABS (SDMA_CLC, SDMA_CLC_t, SDMA_CLC_ADDR);    /* "SDMA Clock Control Register" */
SFR_ABS (SDMA_CLRE, SDMA_CLRE_t, SDMA_CLRE_ADDR); /* "SDMA Clear Error Register" */
SFR_ABS (SDMA_DADR00, SDMA_DADRm_t, SDMA_DADR00_ADDR); /* "SDMA Channel 00 Destination Address Register" */
SFR_ABS (SDMA_DADR01, SDMA_DADRm_t, SDMA_DADR01_ADDR); /* "SDMA Channel 01 Destination Address Register" */
SFR_ABS (SDMA_DADR02, SDMA_DADRm_t, SDMA_DADR02_ADDR); /* "SDMA Channel 02 Destination Address Register" */
SFR_ABS (SDMA_DADR03, SDMA_DADRm_t, SDMA_DADR03_ADDR); /* "SDMA Channel 03 Destination Address Register" */
SFR_ABS (SDMA_DADR04, SDMA_DADRm_t, SDMA_DADR04_ADDR); /* "SDMA Channel 04 Destination Address Register" */
SFR_ABS (SDMA_DADR05, SDMA_DADRm_t, SDMA_DADR05_ADDR); /* "SDMA Channel 05 Destination Address Register" */
SFR_ABS (SDMA_DADR06, SDMA_DADRm_t, SDMA_DADR06_ADDR); /* "SDMA Channel 06 Destination Address Register" */
SFR_ABS (SDMA_DADR07, SDMA_DADRm_t, SDMA_DADR07_ADDR); /* "SDMA Channel 07 Destination Address Register" */
SFR_ABS (SDMA_DAMAX00, SDMA_DAMAXm_t, SDMA_DAMAX00_ADDR); /* "SDMA Channel 00 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMAX01, SDMA_DAMAXm_t, SDMA_DAMAX01_ADDR); /* "SDMA Channel 01 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMAX02, SDMA_DAMAXm_t, SDMA_DAMAX02_ADDR); /* "SDMA Channel 02 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMAX03, SDMA_DAMAXm_t, SDMA_DAMAX03_ADDR); /* "SDMA Channel 03 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMAX04, SDMA_DAMAXm_t, SDMA_DAMAX04_ADDR); /* "SDMA Channel 04 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMAX05, SDMA_DAMAXm_t, SDMA_DAMAX05_ADDR); /* "SDMA Channel 05 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMAX06, SDMA_DAMAXm_t, SDMA_DAMAX06_ADDR); /* "SDMA Channel 06 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMAX07, SDMA_DAMAXm_t, SDMA_DAMAX07_ADDR); /* "SDMA Channel 07 Destination Address Upper Boundary Register" */
SFR_ABS (SDMA_DAMIN00, SDMA_DAMINm_t, SDMA_DAMIN00_ADDR); /* "SDMA Channel 00 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DAMIN01, SDMA_DAMINm_t, SDMA_DAMIN01_ADDR); /* "SDMA Channel 01 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DAMIN02, SDMA_DAMINm_t, SDMA_DAMIN02_ADDR); /* "SDMA Channel 02 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DAMIN03, SDMA_DAMINm_t, SDMA_DAMIN03_ADDR); /* "SDMA Channel 03 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DAMIN04, SDMA_DAMINm_t, SDMA_DAMIN04_ADDR); /* "SDMA Channel 04 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DAMIN05, SDMA_DAMINm_t, SDMA_DAMIN05_ADDR); /* "SDMA Channel 05 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DAMIN06, SDMA_DAMINm_t, SDMA_DAMIN06_ADDR); /* "SDMA Channel 06 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DAMIN07, SDMA_DAMINm_t, SDMA_DAMIN07_ADDR); /* "SDMA Channel 07 Destination Address Lower Boundary Register" */
SFR_ABS (SDMA_DCRC00, SDMA_DCRCm_t, SDMA_DCRC00_ADDR); /* "SDMA Channel 00 Destination Address CRC Register" */
SFR_ABS (SDMA_DCRC01, SDMA_DCRCm_t, SDMA_DCRC01_ADDR); /* "SDMA Channel 01 Destination Address CRC Register" */
SFR_ABS (SDMA_DCRC02, SDMA_DCRCm_t, SDMA_DCRC02_ADDR); /* "SDMA Channel 02 Destination Address CRC Register" */
SFR_ABS (SDMA_DCRC03, SDMA_DCRCm_t, SDMA_DCRC03_ADDR); /* "SDMA Channel 03 Destination Address CRC Register" */
SFR_ABS (SDMA_DCRC04, SDMA_DCRCm_t, SDMA_DCRC04_ADDR); /* "SDMA Channel 04 Destination Address CRC Register" */
SFR_ABS (SDMA_DCRC05, SDMA_DCRCm_t, SDMA_DCRC05_ADDR); /* "SDMA Channel 05 Destination Address CRC Register" */
SFR_ABS (SDMA_DCRC06, SDMA_DCRCm_t, SDMA_DCRC06_ADDR); /* "SDMA Channel 06 Destination Address CRC Register" */
SFR_ABS (SDMA_DCRC07, SDMA_DCRCm_t, SDMA_DCRC07_ADDR); /* "SDMA Channel 07 Destination Address CRC Register" */
SFR_ABS (SDMA_EER, SDMA_EER_t, SDMA_EER_ADDR);    /* "SDMA Enable Error Register" */
SFR_ABS (SDMA_ERRSR, SDMA_ERRSR_t, SDMA_ERRSR_ADDR); /* "SDMA Error Status Register" */
SFR_ABS (SDMA_GINTR, SDMA_GINTR_t, SDMA_GINTR_ADDR); /* "SDMA Global Interrupt Set Register" */
SFR_ABS (SDMA_HTREQ, SDMA_HTREQ_t, SDMA_HTREQ_ADDR); /* "SDMA Hardware Transaction Request Register" */
SFR_ABS (SDMA_ID, SDMA_ID_t, SDMA_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (SDMA_INTCR, SDMA_INTCR_t, SDMA_INTCR_ADDR); /* "SDMA Interrupt Clear Register" */
SFR_ABS (SDMA_INTSR, SDMA_INTSR_t, SDMA_INTSR_ADDR); /* "SDMA Interrupt Status Register" */
SFR_ABS (SDMA_ME0PR, SDMA_ME0PR_t, SDMA_ME0PR_ADDR); /* "SDMA Move Engine 0 Pattern Register" */
SFR_ABS (SDMA_ME0R, SDMA_ME0R_t, SDMA_ME0R_ADDR); /* "SDMA Move Engine 0 Read Register" */
SFR_ABS (SDMA_MESR, SDMA_MESR_t, SDMA_MESR_ADDR); /* "SDMA Move Engine Status Register" */
SFR_ABS (SDMA_OCDSR, SDMA_OCDSR_t, SDMA_OCDSR_ADDR); /* "SDMA OCDS Register" */
SFR_ABS (SDMA_RDCRC00, SDMA_RDCRCm_t, SDMA_RDCRC00_ADDR); /* "SDMA Channel 00 Read Data CRC Register" */
SFR_ABS (SDMA_RDCRC01, SDMA_RDCRCm_t, SDMA_RDCRC01_ADDR); /* "SDMA Channel 01 Read Data CRC Register" */
SFR_ABS (SDMA_RDCRC02, SDMA_RDCRCm_t, SDMA_RDCRC02_ADDR); /* "SDMA Channel 02 Read Data CRC Register" */
SFR_ABS (SDMA_RDCRC03, SDMA_RDCRCm_t, SDMA_RDCRC03_ADDR); /* "SDMA Channel 03 Read Data CRC Register" */
SFR_ABS (SDMA_RDCRC04, SDMA_RDCRCm_t, SDMA_RDCRC04_ADDR); /* "SDMA Channel 04 Read Data CRC Register" */
SFR_ABS (SDMA_RDCRC05, SDMA_RDCRCm_t, SDMA_RDCRC05_ADDR); /* "SDMA Channel 05 Read Data CRC Register" */
SFR_ABS (SDMA_RDCRC06, SDMA_RDCRCm_t, SDMA_RDCRC06_ADDR); /* "SDMA Channel 06 Read Data CRC Register" */
SFR_ABS (SDMA_RDCRC07, SDMA_RDCRCm_t, SDMA_RDCRC07_ADDR); /* "SDMA Channel 07 Read Data CRC Register" */
SFR_ABS (SDMA_SADR00, SDMA_SADRm_t, SDMA_SADR00_ADDR); /* "SDMA Channel 00 Source Address Register" */
SFR_ABS (SDMA_SADR01, SDMA_SADRm_t, SDMA_SADR01_ADDR); /* "SDMA Channel 01 Source Address Register" */
SFR_ABS (SDMA_SADR02, SDMA_SADRm_t, SDMA_SADR02_ADDR); /* "SDMA Channel 02 Source Address Register" */
SFR_ABS (SDMA_SADR03, SDMA_SADRm_t, SDMA_SADR03_ADDR); /* "SDMA Channel 03 Source Address Register" */
SFR_ABS (SDMA_SADR04, SDMA_SADRm_t, SDMA_SADR04_ADDR); /* "SDMA Channel 04 Source Address Register" */
SFR_ABS (SDMA_SADR05, SDMA_SADRm_t, SDMA_SADR05_ADDR); /* "SDMA Channel 05 Source Address Register" */
SFR_ABS (SDMA_SADR06, SDMA_SADRm_t, SDMA_SADR06_ADDR); /* "SDMA Channel 06 Source Address Register" */
SFR_ABS (SDMA_SADR07, SDMA_SADRm_t, SDMA_SADR07_ADDR); /* "SDMA Channel 07 Source Address Register" */
SFR_ABS (SDMA_SAMAX00, SDMA_SAMAXm_t, SDMA_SAMAX00_ADDR); /* "SDMA Channel 00 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMAX01, SDMA_SAMAXm_t, SDMA_SAMAX01_ADDR); /* "SDMA Channel 01 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMAX02, SDMA_SAMAXm_t, SDMA_SAMAX02_ADDR); /* "SDMA Channel 02 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMAX03, SDMA_SAMAXm_t, SDMA_SAMAX03_ADDR); /* "SDMA Channel 03 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMAX04, SDMA_SAMAXm_t, SDMA_SAMAX04_ADDR); /* "SDMA Channel 04 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMAX05, SDMA_SAMAXm_t, SDMA_SAMAX05_ADDR); /* "SDMA Channel 05 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMAX06, SDMA_SAMAXm_t, SDMA_SAMAX06_ADDR); /* "SDMA Channel 06 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMAX07, SDMA_SAMAXm_t, SDMA_SAMAX07_ADDR); /* "SDMA Channel 07 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN00, SDMA_SAMINm_t, SDMA_SAMIN00_ADDR); /* "SDMA Channel 00 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN01, SDMA_SAMINm_t, SDMA_SAMIN01_ADDR); /* "SDMA Channel 01 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN02, SDMA_SAMINm_t, SDMA_SAMIN02_ADDR); /* "SDMA Channel 02 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN03, SDMA_SAMINm_t, SDMA_SAMIN03_ADDR); /* "SDMA Channel 03 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN04, SDMA_SAMINm_t, SDMA_SAMIN04_ADDR); /* "SDMA Channel 04 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN05, SDMA_SAMINm_t, SDMA_SAMIN05_ADDR); /* "SDMA Channel 05 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN06, SDMA_SAMINm_t, SDMA_SAMIN06_ADDR); /* "SDMA Channel 06 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SAMIN07, SDMA_SAMINm_t, SDMA_SAMIN07_ADDR); /* "SDMA Channel 07 Source Address Lower Boundary Register" */
SFR_ABS (SDMA_SCRC00, SDMA_SCRCm_t, SDMA_SCRC00_ADDR); /* "SDMA Channel 00 Source Address CRC Register" */
SFR_ABS (SDMA_SCRC01, SDMA_SCRCm_t, SDMA_SCRC01_ADDR); /* "SDMA Channel 01 Source Address CRC Register" */
SFR_ABS (SDMA_SCRC02, SDMA_SCRCm_t, SDMA_SCRC02_ADDR); /* "SDMA Channel 02 Source Address CRC Register" */
SFR_ABS (SDMA_SCRC03, SDMA_SCRCm_t, SDMA_SCRC03_ADDR); /* "SDMA Channel 03 Source Address CRC Register" */
SFR_ABS (SDMA_SCRC04, SDMA_SCRCm_t, SDMA_SCRC04_ADDR); /* "SDMA Channel 04 Source Address CRC Register" */
SFR_ABS (SDMA_SCRC05, SDMA_SCRCm_t, SDMA_SCRC05_ADDR); /* "SDMA Channel 05 Source Address CRC Register" */
SFR_ABS (SDMA_SCRC06, SDMA_SCRCm_t, SDMA_SCRC06_ADDR); /* "SDMA Channel 06 Source Address CRC Register" */
SFR_ABS (SDMA_SCRC07, SDMA_SCRCm_t, SDMA_SCRC07_ADDR); /* "SDMA Channel 07 Source Address CRC Register" */
SFR_ABS (SDMA_SHADR00, SDMA_SHADRm_t, SDMA_SHADR00_ADDR); /* "SDMA Channel 00 Shadow Address Register" */
SFR_ABS (SDMA_SHADR01, SDMA_SHADRm_t, SDMA_SHADR01_ADDR); /* "SDMA Channel 01 Shadow Address Register" */
SFR_ABS (SDMA_SHADR02, SDMA_SHADRm_t, SDMA_SHADR02_ADDR); /* "SDMA Channel 02 Shadow Address Register" */
SFR_ABS (SDMA_SHADR03, SDMA_SHADRm_t, SDMA_SHADR03_ADDR); /* "SDMA Channel 03 Shadow Address Register" */
SFR_ABS (SDMA_SHADR04, SDMA_SHADRm_t, SDMA_SHADR04_ADDR); /* "SDMA Channel 04 Shadow Address Register" */
SFR_ABS (SDMA_SHADR05, SDMA_SHADRm_t, SDMA_SHADR05_ADDR); /* "SDMA Channel 05 Shadow Address Register" */
SFR_ABS (SDMA_SHADR06, SDMA_SHADRm_t, SDMA_SHADR06_ADDR); /* "SDMA Channel 06 Shadow Address Register" */
SFR_ABS (SDMA_SHADR07, SDMA_SHADRm_t, SDMA_SHADR07_ADDR); /* "SDMA Channel 07 Shadow Address Register" */
SFR_ABS (SDMA_SRC0, SDMA_SRCm_t, SDMA_SRC0_ADDR); /* "SDMA Service Request Control Register 0" */
SFR_ABS (SDMA_SRC1, SDMA_SRCm_t, SDMA_SRC1_ADDR); /* "SDMA Service Request Control Register 1" */
SFR_ABS (SDMA_SRC2, SDMA_SRCm_t, SDMA_SRC2_ADDR); /* "SDMA Service Request Control Register 2" */
SFR_ABS (SDMA_SRC3, SDMA_SRCm_t, SDMA_SRC3_ADDR); /* "SDMA Service Request Control Register 3" */
SFR_ABS (SDMA_SRC4, SDMA_SRCm_t, SDMA_SRC4_ADDR); /* "SDMA Service Request Control Register 4" */
SFR_ABS (SDMA_SRC5, SDMA_SRCm_t, SDMA_SRC5_ADDR); /* "SDMA Service Request Control Register 5" */
SFR_ABS (SDMA_SRC6, SDMA_SRCm_t, SDMA_SRC6_ADDR); /* "SDMA Service Request Control Register 6" */
SFR_ABS (SDMA_SRC7, SDMA_SRCm_t, SDMA_SRC7_ADDR); /* "SDMA Service Request Control Register 7" */
SFR_ABS (SDMA_STREQ, SDMA_STREQ_t, SDMA_STREQ_ADDR); /* "SDMA Software Transaction Request Register" */
SFR_ABS (SDMA_SUSPMR, SDMA_SUSPMR_t, SDMA_SUSPMR_ADDR); /* "SDMA Suspend Mode Register" */
SFR_ABS (SDMA_TRSR, SDMA_TRSR_t, SDMA_TRSR_ADDR); /* "SDMA Transaction Request State Register" */
SFR_ABS (SDMA_WRPSR, SDMA_WRPSR_t, SDMA_WRPSR_ADDR); /* "SDMA Wrap Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_SDMA_H_ (block "SDMA") */


