/* (c) HighTec EDV-Systeme GmbH */

/* block "DMA" of TriCore TC1798 (154 SFRs) */

#include <tc1798/dma/addr.h>

#include <tc1798/dma/masks.h>
#include <tc1798/dma/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/dma/types.h>
#include <tc1798/dma/sharetypes.h>

#ifndef _HAVE_TRICORE_DMA_H_
#define _HAVE_TRICORE_DMA_H_

#include <tricore-abs-noabs.h>

SFR_ABS (DMA_ADRCR00, DMA_ADRCRm_t, DMA_ADRCR00_ADDR); /* "DMA Channel 00 Address Control Register" */
SFR_ABS (DMA_ADRCR01, DMA_ADRCRm_t, DMA_ADRCR01_ADDR); /* "DMA Channel 01 Address Control Register" */
SFR_ABS (DMA_ADRCR02, DMA_ADRCRm_t, DMA_ADRCR02_ADDR); /* "DMA Channel 02 Address Control Register" */
SFR_ABS (DMA_ADRCR03, DMA_ADRCRm_t, DMA_ADRCR03_ADDR); /* "DMA Channel 03 Address Control Register" */
SFR_ABS (DMA_ADRCR04, DMA_ADRCRm_t, DMA_ADRCR04_ADDR); /* "DMA Channel 04 Address Control Register" */
SFR_ABS (DMA_ADRCR05, DMA_ADRCRm_t, DMA_ADRCR05_ADDR); /* "DMA Channel 05 Address Control Register" */
SFR_ABS (DMA_ADRCR06, DMA_ADRCRm_t, DMA_ADRCR06_ADDR); /* "DMA Channel 06 Address Control Register" */
SFR_ABS (DMA_ADRCR07, DMA_ADRCRm_t, DMA_ADRCR07_ADDR); /* "DMA Channel 07 Address Control Register" */
SFR_ABS (DMA_ADRCR10, DMA_ADRCRm_t, DMA_ADRCR10_ADDR); /* "DMA Channel 10 Address Control Register" */
SFR_ABS (DMA_ADRCR11, DMA_ADRCRm_t, DMA_ADRCR11_ADDR); /* "DMA Channel 11 Address Control Register" */
SFR_ABS (DMA_ADRCR12, DMA_ADRCRm_t, DMA_ADRCR12_ADDR); /* "DMA Channel 12 Address Control Register" */
SFR_ABS (DMA_ADRCR13, DMA_ADRCRm_t, DMA_ADRCR13_ADDR); /* "DMA Channel 13 Address Control Register" */
SFR_ABS (DMA_ADRCR14, DMA_ADRCRm_t, DMA_ADRCR14_ADDR); /* "DMA Channel 14 Address Control Register" */
SFR_ABS (DMA_ADRCR15, DMA_ADRCRm_t, DMA_ADRCR15_ADDR); /* "DMA Channel 15 Address Control Register" */
SFR_ABS (DMA_ADRCR16, DMA_ADRCRm_t, DMA_ADRCR16_ADDR); /* "DMA Channel 16 Address Control Register" */
SFR_ABS (DMA_ADRCR17, DMA_ADRCRm_t, DMA_ADRCR17_ADDR); /* "DMA Channel 17 Address Control Register" */
SFR_ABS (DMA_CHCR00, DMA_CHCRm_t, DMA_CHCR00_ADDR); /* "DMA Channel 00 Control Register" */
SFR_ABS (DMA_CHCR01, DMA_CHCRm_t, DMA_CHCR01_ADDR); /* "DMA Channel 01 Control Register" */
SFR_ABS (DMA_CHCR02, DMA_CHCRm_t, DMA_CHCR02_ADDR); /* "DMA Channel 02 Control Register" */
SFR_ABS (DMA_CHCR03, DMA_CHCRm_t, DMA_CHCR03_ADDR); /* "DMA Channel 03 Control Register" */
SFR_ABS (DMA_CHCR04, DMA_CHCRm_t, DMA_CHCR04_ADDR); /* "DMA Channel 04 Control Register" */
SFR_ABS (DMA_CHCR05, DMA_CHCRm_t, DMA_CHCR05_ADDR); /* "DMA Channel 05 Control Register" */
SFR_ABS (DMA_CHCR06, DMA_CHCRm_t, DMA_CHCR06_ADDR); /* "DMA Channel 06 Control Register" */
SFR_ABS (DMA_CHCR07, DMA_CHCRm_t, DMA_CHCR07_ADDR); /* "DMA Channel 07 Control Register" */
SFR_ABS (DMA_CHCR10, DMA_CHCRm_t, DMA_CHCR10_ADDR); /* "DMA Channel 10 Control Register" */
SFR_ABS (DMA_CHCR11, DMA_CHCRm_t, DMA_CHCR11_ADDR); /* "DMA Channel 11 Control Register" */
SFR_ABS (DMA_CHCR12, DMA_CHCRm_t, DMA_CHCR12_ADDR); /* "DMA Channel 12 Control Register" */
SFR_ABS (DMA_CHCR13, DMA_CHCRm_t, DMA_CHCR13_ADDR); /* "DMA Channel 13 Control Register" */
SFR_ABS (DMA_CHCR14, DMA_CHCRm_t, DMA_CHCR14_ADDR); /* "DMA Channel 14 Control Register" */
SFR_ABS (DMA_CHCR15, DMA_CHCRm_t, DMA_CHCR15_ADDR); /* "DMA Channel 15 Control Register" */
SFR_ABS (DMA_CHCR16, DMA_CHCRm_t, DMA_CHCR16_ADDR); /* "DMA Channel 16 Control Register" */
SFR_ABS (DMA_CHCR17, DMA_CHCRm_t, DMA_CHCR17_ADDR); /* "DMA Channel 17 Control Register" */
SFR_ABS (DMA_CHICR00, DMA_CHICRm_t, DMA_CHICR00_ADDR); /* "DMA Channel 00 Interrupt Control Register" */
SFR_ABS (DMA_CHICR01, DMA_CHICRm_t, DMA_CHICR01_ADDR); /* "DMA Channel 01 Interrupt Control Register" */
SFR_ABS (DMA_CHICR02, DMA_CHICRm_t, DMA_CHICR02_ADDR); /* "DMA Channel 02 Interrupt Control Register" */
SFR_ABS (DMA_CHICR03, DMA_CHICRm_t, DMA_CHICR03_ADDR); /* "DMA Channel 03 Interrupt Control Register" */
SFR_ABS (DMA_CHICR04, DMA_CHICRm_t, DMA_CHICR04_ADDR); /* "DMA Channel 04 Interrupt Control Register" */
SFR_ABS (DMA_CHICR05, DMA_CHICRm_t, DMA_CHICR05_ADDR); /* "DMA Channel 05 Interrupt Control Register" */
SFR_ABS (DMA_CHICR06, DMA_CHICRm_t, DMA_CHICR06_ADDR); /* "DMA Channel 06 Interrupt Control Register" */
SFR_ABS (DMA_CHICR07, DMA_CHICRm_t, DMA_CHICR07_ADDR); /* "DMA Channel 07 Interrupt Control Register" */
SFR_ABS (DMA_CHICR10, DMA_CHICRm_t, DMA_CHICR10_ADDR); /* "DMA Channel 10 Interrupt Control Register" */
SFR_ABS (DMA_CHICR11, DMA_CHICRm_t, DMA_CHICR11_ADDR); /* "DMA Channel 11 Interrupt Control Register" */
SFR_ABS (DMA_CHICR12, DMA_CHICRm_t, DMA_CHICR12_ADDR); /* "DMA Channel 12 Interrupt Control Register" */
SFR_ABS (DMA_CHICR13, DMA_CHICRm_t, DMA_CHICR13_ADDR); /* "DMA Channel 13 Interrupt Control Register" */
SFR_ABS (DMA_CHICR14, DMA_CHICRm_t, DMA_CHICR14_ADDR); /* "DMA Channel 14 Interrupt Control Register" */
SFR_ABS (DMA_CHICR15, DMA_CHICRm_t, DMA_CHICR15_ADDR); /* "DMA Channel 15 Interrupt Control Register" */
SFR_ABS (DMA_CHICR16, DMA_CHICRm_t, DMA_CHICR16_ADDR); /* "DMA Channel 16 Interrupt Control Register" */
SFR_ABS (DMA_CHICR17, DMA_CHICRm_t, DMA_CHICR17_ADDR); /* "DMA Channel 17 Interrupt Control Register" */
SFR_ABS (DMA_CHRSTR, DMA_CHRSTR_t, DMA_CHRSTR_ADDR); /* "DMA Channel Reset Request Register" */
SFR_ABS (DMA_CHSR00, DMA_CHSRm_t, DMA_CHSR00_ADDR); /* "DMA Channel 00 Status Register" */
SFR_ABS (DMA_CHSR01, DMA_CHSRm_t, DMA_CHSR01_ADDR); /* "DMA Channel 01 Status Register" */
SFR_ABS (DMA_CHSR02, DMA_CHSRm_t, DMA_CHSR02_ADDR); /* "DMA Channel 02 Status Register" */
SFR_ABS (DMA_CHSR03, DMA_CHSRm_t, DMA_CHSR03_ADDR); /* "DMA Channel 03 Status Register" */
SFR_ABS (DMA_CHSR04, DMA_CHSRm_t, DMA_CHSR04_ADDR); /* "DMA Channel 04 Status Register" */
SFR_ABS (DMA_CHSR05, DMA_CHSRm_t, DMA_CHSR05_ADDR); /* "DMA Channel 05 Status Register" */
SFR_ABS (DMA_CHSR06, DMA_CHSRm_t, DMA_CHSR06_ADDR); /* "DMA Channel 06 Status Register" */
SFR_ABS (DMA_CHSR07, DMA_CHSRm_t, DMA_CHSR07_ADDR); /* "DMA Channel 07 Status Register" */
SFR_ABS (DMA_CHSR10, DMA_CHSRm_t, DMA_CHSR10_ADDR); /* "DMA Channel 10 Status Register" */
SFR_ABS (DMA_CHSR11, DMA_CHSRm_t, DMA_CHSR11_ADDR); /* "DMA Channel 11 Status Register" */
SFR_ABS (DMA_CHSR12, DMA_CHSRm_t, DMA_CHSR12_ADDR); /* "DMA Channel 12 Status Register" */
SFR_ABS (DMA_CHSR13, DMA_CHSRm_t, DMA_CHSR13_ADDR); /* "DMA Channel 13 Status Register" */
SFR_ABS (DMA_CHSR14, DMA_CHSRm_t, DMA_CHSR14_ADDR); /* "DMA Channel 14 Status Register" */
SFR_ABS (DMA_CHSR15, DMA_CHSRm_t, DMA_CHSR15_ADDR); /* "DMA Channel 15 Status Register" */
SFR_ABS (DMA_CHSR16, DMA_CHSRm_t, DMA_CHSR16_ADDR); /* "DMA Channel 16 Status Register" */
SFR_ABS (DMA_CHSR17, DMA_CHSRm_t, DMA_CHSR17_ADDR); /* "DMA Channel 17 Status Register" */
SFR_ABS (DMA_CLC, DMA_CLC_t, DMA_CLC_ADDR);       /* "DMA Clock Control Register" */
SFR_ABS (DMA_CLRE, DMA_CLRE_t, DMA_CLRE_ADDR);    /* "DMA Clear Error Register" */
SFR_ABS (DMA_DADR00, DMA_DADRm_t, DMA_DADR00_ADDR); /* "DMA Channel 00 Destination Address Register" */
SFR_ABS (DMA_DADR01, DMA_DADRm_t, DMA_DADR01_ADDR); /* "DMA Channel 01 Destination Address Register" */
SFR_ABS (DMA_DADR02, DMA_DADRm_t, DMA_DADR02_ADDR); /* "DMA Channel 02 Destination Address Register" */
SFR_ABS (DMA_DADR03, DMA_DADRm_t, DMA_DADR03_ADDR); /* "DMA Channel 03 Destination Address Register" */
SFR_ABS (DMA_DADR04, DMA_DADRm_t, DMA_DADR04_ADDR); /* "DMA Channel 04 Destination Address Register" */
SFR_ABS (DMA_DADR05, DMA_DADRm_t, DMA_DADR05_ADDR); /* "DMA Channel 05 Destination Address Register" */
SFR_ABS (DMA_DADR06, DMA_DADRm_t, DMA_DADR06_ADDR); /* "DMA Channel 06 Destination Address Register" */
SFR_ABS (DMA_DADR07, DMA_DADRm_t, DMA_DADR07_ADDR); /* "DMA Channel 07 Destination Address Register" */
SFR_ABS (DMA_DADR10, DMA_DADRm_t, DMA_DADR10_ADDR); /* "DMA Channel 10 Destination Address Register" */
SFR_ABS (DMA_DADR11, DMA_DADRm_t, DMA_DADR11_ADDR); /* "DMA Channel 11 Destination Address Register" */
SFR_ABS (DMA_DADR12, DMA_DADRm_t, DMA_DADR12_ADDR); /* "DMA Channel 12 Destination Address Register" */
SFR_ABS (DMA_DADR13, DMA_DADRm_t, DMA_DADR13_ADDR); /* "DMA Channel 13 Destination Address Register" */
SFR_ABS (DMA_DADR14, DMA_DADRm_t, DMA_DADR14_ADDR); /* "DMA Channel 14 Destination Address Register" */
SFR_ABS (DMA_DADR15, DMA_DADRm_t, DMA_DADR15_ADDR); /* "DMA Channel 15 Destination Address Register" */
SFR_ABS (DMA_DADR16, DMA_DADRm_t, DMA_DADR16_ADDR); /* "DMA Channel 16 Destination Address Register" */
SFR_ABS (DMA_DADR17, DMA_DADRm_t, DMA_DADR17_ADDR); /* "DMA Channel 17 Destination Address Register" */
SFR_ABS (DMA_EER, DMA_EER_t, DMA_EER_ADDR);       /* "DMA Enable Error Register" */
SFR_ABS (DMA_ERRSR, DMA_ERRSR_t, DMA_ERRSR_ADDR); /* "DMA Error Status Register" */
SFR_ABS (DMA_GINTR, DMA_GINTR_t, DMA_GINTR_ADDR); /* "DMA Global Interrupt Set Register" */
SFR_ABS (DMA_HTREQ, DMA_HTREQ_t, DMA_HTREQ_ADDR); /* "DMA Hardware Transaction Request Register" */
SFR_ABS (DMA_ID, DMA_ID_t, DMA_ID_ADDR);          /* "Module Identification Register" */
SFR_ABS (DMA_INTCR, DMA_INTCR_t, DMA_INTCR_ADDR); /* "DMA Interrupt Clear Register" */
SFR_ABS (DMA_INTSR, DMA_INTSR_t, DMA_INTSR_ADDR); /* "DMA Interrupt Status Register" */
SFR_ABS (DMA_ME0AENR0, DMA_MEnAENRm_t, DMA_ME0AENR0_ADDR); /* "DMA Move Engine 0 Access Enable Register 0" */
SFR_ABS (DMA_ME0AENR1, DMA_MEnAENRm_t, DMA_ME0AENR1_ADDR); /* "DMA Move Engine 0 Access Enable Register 1" */
SFR_ABS (DMA_ME0ARR0, DMA_MEnARRm_t, DMA_ME0ARR0_ADDR); /* "DMA Move Engine 0 Access Range Register 0" */
SFR_ABS (DMA_ME0ARR1, DMA_MEnARRm_t, DMA_ME0ARR1_ADDR); /* "DMA Move Engine 0 Access Range Register 1" */
SFR_ABS (DMA_ME0PR, DMA_MEmPR_t, DMA_ME0PR_ADDR); /* "DMA Move Engine 0 Pattern Register" */
SFR_ABS (DMA_ME0R, DMA_MEmR_t, DMA_ME0R_ADDR);    /* "DMA Move Engine 0 Read Register" */
SFR_ABS (DMA_ME1AENR0, DMA_MEnAENRm_t, DMA_ME1AENR0_ADDR); /* "DMA Move Engine 1 Access Enable Register 0" */
SFR_ABS (DMA_ME1AENR1, DMA_MEnAENRm_t, DMA_ME1AENR1_ADDR); /* "DMA Move Engine 1 Access Enable Register 1" */
SFR_ABS (DMA_ME1ARR0, DMA_MEnARRm_t, DMA_ME1ARR0_ADDR); /* "DMA Move Engine 1 Access Range Register 0" */
SFR_ABS (DMA_ME1ARR1, DMA_MEnARRm_t, DMA_ME1ARR1_ADDR); /* "DMA Move Engine 1 Access Range Register 1" */
SFR_ABS (DMA_ME1PR, DMA_MEmPR_t, DMA_ME1PR_ADDR); /* "DMA Move Engine 1Pattern Register" */
SFR_ABS (DMA_ME1R, DMA_MEmR_t, DMA_ME1R_ADDR);    /* "DMA Move Engine 1 Read Register" */
SFR_ABS (DMA_MESR, DMA_MESR_t, DMA_MESR_ADDR);    /* "DMA Move Engine Status Register" */
SFR_ABS (DMA_MLI0SRC0, DMA_MLInSRCm_t, DMA_MLI0SRC0_ADDR); /* "DMA MLI0 Service Request Control Register 0" */
SFR_ABS (DMA_MLI0SRC1, DMA_MLInSRCm_t, DMA_MLI0SRC1_ADDR); /* "DMA MLI0 Service Request Control Register 1" */
SFR_ABS (DMA_MLI0SRC2, DMA_MLInSRCm_t, DMA_MLI0SRC2_ADDR); /* "DMA MLI0 Service Request Control Register 2" */
SFR_ABS (DMA_MLI0SRC3, DMA_MLInSRCm_t, DMA_MLI0SRC3_ADDR); /* "DMA MLI0 Service Request Control Register 3" */
SFR_ABS (DMA_MLI1SRC0, DMA_MLInSRCm_t, DMA_MLI1SRC0_ADDR); /* "DMA MLI1 Service Request Control Register 0" */
SFR_ABS (DMA_MLI1SRC1, DMA_MLInSRCm_t, DMA_MLI1SRC1_ADDR); /* "DMA MLI1 Service Request Control Register 1" */
SFR_ABS (DMA_OCDSR, DMA_OCDSR_t, DMA_OCDSR_ADDR); /* "DMA OCDS Register" */
SFR_ABS (DMA_SADR00, DMA_SADRm_t, DMA_SADR00_ADDR); /* "DMA Channel 00 Source Address Register" */
SFR_ABS (DMA_SADR01, DMA_SADRm_t, DMA_SADR01_ADDR); /* "DMA Channel 01 Source Address Register" */
SFR_ABS (DMA_SADR02, DMA_SADRm_t, DMA_SADR02_ADDR); /* "DMA Channel 02 Source Address Register" */
SFR_ABS (DMA_SADR03, DMA_SADRm_t, DMA_SADR03_ADDR); /* "DMA Channel 03 Source Address Register" */
SFR_ABS (DMA_SADR04, DMA_SADRm_t, DMA_SADR04_ADDR); /* "DMA Channel 04 Source Address Register" */
SFR_ABS (DMA_SADR05, DMA_SADRm_t, DMA_SADR05_ADDR); /* "DMA Channel 05 Source Address Register" */
SFR_ABS (DMA_SADR06, DMA_SADRm_t, DMA_SADR06_ADDR); /* "DMA Channel 06 Source Address Register" */
SFR_ABS (DMA_SADR07, DMA_SADRm_t, DMA_SADR07_ADDR); /* "DMA Channel 07 Source Address Register" */
SFR_ABS (DMA_SADR10, DMA_SADRm_t, DMA_SADR10_ADDR); /* "DMA Channel 10 Source Address Register" */
SFR_ABS (DMA_SADR11, DMA_SADRm_t, DMA_SADR11_ADDR); /* "DMA Channel 11 Source Address Register" */
SFR_ABS (DMA_SADR12, DMA_SADRm_t, DMA_SADR12_ADDR); /* "DMA Channel 12 Source Address Register" */
SFR_ABS (DMA_SADR13, DMA_SADRm_t, DMA_SADR13_ADDR); /* "DMA Channel 13 Source Address Register" */
SFR_ABS (DMA_SADR14, DMA_SADRm_t, DMA_SADR14_ADDR); /* "DMA Channel 14 Source Address Register" */
SFR_ABS (DMA_SADR15, DMA_SADRm_t, DMA_SADR15_ADDR); /* "DMA Channel 15 Source Address Register" */
SFR_ABS (DMA_SADR16, DMA_SADRm_t, DMA_SADR16_ADDR); /* "DMA Channel 16 Source Address Register" */
SFR_ABS (DMA_SADR17, DMA_SADRm_t, DMA_SADR17_ADDR); /* "DMA Channel 17 Source Address Register" */
SFR_ABS (DMA_SHADR00, DMA_SHADRm_t, DMA_SHADR00_ADDR); /* "DMA Channel 00 Shadow Address Register" */
SFR_ABS (DMA_SHADR01, DMA_SHADRm_t, DMA_SHADR01_ADDR); /* "DMA Channel 01 Shadow Address Register" */
SFR_ABS (DMA_SHADR02, DMA_SHADRm_t, DMA_SHADR02_ADDR); /* "DMA Channel 02 Shadow Address Register" */
SFR_ABS (DMA_SHADR03, DMA_SHADRm_t, DMA_SHADR03_ADDR); /* "DMA Channel 03 Shadow Address Register" */
SFR_ABS (DMA_SHADR04, DMA_SHADRm_t, DMA_SHADR04_ADDR); /* "DMA Channel 04 Shadow Address Register" */
SFR_ABS (DMA_SHADR05, DMA_SHADRm_t, DMA_SHADR05_ADDR); /* "DMA Channel 05 Shadow Address Register" */
SFR_ABS (DMA_SHADR06, DMA_SHADRm_t, DMA_SHADR06_ADDR); /* "DMA Channel 06 Shadow Address Register" */
SFR_ABS (DMA_SHADR07, DMA_SHADRm_t, DMA_SHADR07_ADDR); /* "DMA Channel 07 Shadow Address Register" */
SFR_ABS (DMA_SHADR10, DMA_SHADRm_t, DMA_SHADR10_ADDR); /* "DMA Channel 10 Shadow Address Register" */
SFR_ABS (DMA_SHADR11, DMA_SHADRm_t, DMA_SHADR11_ADDR); /* "DMA Channel 11 Shadow Address Register" */
SFR_ABS (DMA_SHADR12, DMA_SHADRm_t, DMA_SHADR12_ADDR); /* "DMA Channel 12 Shadow Address Register" */
SFR_ABS (DMA_SHADR13, DMA_SHADRm_t, DMA_SHADR13_ADDR); /* "DMA Channel 13 Shadow Address Register" */
SFR_ABS (DMA_SHADR14, DMA_SHADRm_t, DMA_SHADR14_ADDR); /* "DMA Channel 14 Shadow Address Register" */
SFR_ABS (DMA_SHADR15, DMA_SHADRm_t, DMA_SHADR15_ADDR); /* "DMA Channel 15 Shadow Address Register" */
SFR_ABS (DMA_SHADR16, DMA_SHADRm_t, DMA_SHADR16_ADDR); /* "DMA Channel 16 Shadow Address Register" */
SFR_ABS (DMA_SHADR17, DMA_SHADRm_t, DMA_SHADR17_ADDR); /* "DMA Channel 17 Shadow Address Register" */
SFR_ABS (DMA_SRC0, DMA_SRCm_t, DMA_SRC0_ADDR);    /* "DMA Service Request Control Register 0" */
SFR_ABS (DMA_SRC1, DMA_SRCm_t, DMA_SRC1_ADDR);    /* "DMA Service Request Control Register 1" */
SFR_ABS (DMA_SRC2, DMA_SRCm_t, DMA_SRC2_ADDR);    /* "DMA Service Request Control Register 2" */
SFR_ABS (DMA_SRC3, DMA_SRCm_t, DMA_SRC3_ADDR);    /* "DMA Service Request Control Register 3" */
SFR_ABS (DMA_SRC4, DMA_SRCm_t, DMA_SRC4_ADDR);    /* "DMA Service Request Control Register 4" */
SFR_ABS (DMA_SRC5, DMA_SRCm_t, DMA_SRC5_ADDR);    /* "DMA Service Request Control Register 5" */
SFR_ABS (DMA_SRC6, DMA_SRCm_t, DMA_SRC6_ADDR);    /* "DMA Service Request Control Register 6" */
SFR_ABS (DMA_SRC7, DMA_SRCm_t, DMA_SRC7_ADDR);    /* "DMA Service Request Control Register 7" */
SFR_ABS (DMA_STREQ, DMA_STREQ_t, DMA_STREQ_ADDR); /* "DMA Software Transaction Request Register" */
SFR_ABS (DMA_SUSPMR, DMA_SUSPMR_t, DMA_SUSPMR_ADDR); /* "DMA Suspend Mode Register" */
SFR_ABS (DMA_TRSR, DMA_TRSR_t, DMA_TRSR_ADDR);    /* "DMA Transaction Request State Register" */
SFR_ABS (DMA_WRPSR, DMA_WRPSR_t, DMA_WRPSR_ADDR); /* "DMA Wrap Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_DMA_H_ (block "DMA") */


