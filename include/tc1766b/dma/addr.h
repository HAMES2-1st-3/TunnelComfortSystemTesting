/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "DMA" of TriCore TC1766B (92 SFRs) */

#ifndef _HAVE_TRICORE_DMA_ADDRESSES_H_
#define _HAVE_TRICORE_DMA_ADDRESSES_H_

#define DMA_CLC_ADDR          0xF0003C00     /* "DMA Clock Control Register" */
#define DMA_ID_ADDR           0xF0003C08     /* "DMA Module Identification Register" */
#define DMA_CHRSTR_ADDR       0xF0003C10     /* "Channel Reset Request Register" */
#define DMA_TRSR_ADDR         0xF0003C14     /* "Transaction Request State Register" */
#define DMA_STREQ_ADDR        0xF0003C18     /* "Software Transaction Request Register" */
#define DMA_HTREQ_ADDR        0xF0003C1C     /* "Hardware Transaction Request Register" */
#define DMA_EER_ADDR          0xF0003C20     /* "Enable Error Register" */
#define DMA_ERRSR_ADDR        0xF0003C24     /* "Error Status Register" */
#define DMA_CLRE_ADDR         0xF0003C28     /* "Clear Error Register" */
#define DMA_GINTR_ADDR        0xF0003C2C     /* "DMA Global Interrupt Set Register" */
#define DMA_MESR_ADDR         0xF0003C30     /* "Move Engine Status Register" */
#define DMA_ME0R_ADDR         0xF0003C34     /* "Move Engine 0 Read Register" */
#define DMA_ME0PR_ADDR        0xF0003C3C     /* "Move Engine 0 Pattern Register" */
#define DMA_ME0AENR_ADDR      0xF0003C44     /* "Move Engine 0 Access Enable Register" */
#define DMA_ME0ARR_ADDR       0xF0003C48     /* "Move Engine 0 Access Range Register" */
#define DMA_INTSR_ADDR        0xF0003C54     /* "Interrupt Status Register" */
#define DMA_INTCR_ADDR        0xF0003C58     /* "Interrupt Clear Register" */
#define DMA_WRPSR_ADDR        0xF0003C5C     /* "Wrap Status Register" */
#define DMA_OCDSR_ADDR        0xF0003C64     /* "OCDS Register" */
#define DMA_SUSPMR_ADDR       0xF0003C68     /* "Suspend Mode Register" */
#define DMA_CHSR00_ADDR       0xF0003C80     /* "Channel 00 Status Register" */
#define DMA_CHCR00_ADDR       0xF0003C84     /* "DMA Channel 00 Control Register" */
#define DMA_CHICR00_ADDR      0xF0003C88     /* "DMA Channel 00 Interrupt Control Register" */
#define DMA_ADRCR00_ADDR      0xF0003C8C     /* "DMA Channel 00 Address Control Register" */
#define DMA_SADR00_ADDR       0xF0003C90     /* "DMA Channel 00 Source Address Register" */
#define DMA_DADR00_ADDR       0xF0003C94     /* "DMA Channel 00 Destination Address Register" */
#define DMA_SHADR00_ADDR      0xF0003C98     /* "Channel 00 Shadowed Address Register" */
#define DMA_CHSR01_ADDR       0xF0003CA0     /* "DMA Channel 01 Status Register" */
#define DMA_CHCR01_ADDR       0xF0003CA4     /* "DMA Channel 01 Control Register" */
#define DMA_CHICR01_ADDR      0xF0003CA8     /* "DMA Channel 01 Interrupt Control Register" */
#define DMA_ADRCR01_ADDR      0xF0003CAC     /* "DMA Channel 01 Address Control Register" */
#define DMA_SADR01_ADDR       0xF0003CB0     /* "DMA Channel 01 Source Address Register" */
#define DMA_DADR01_ADDR       0xF0003CB4     /* "DMA Channel 01 Destination Address Register" */
#define DMA_SHADR01_ADDR      0xF0003CB8     /* "DMA Channel 01 Shadowed Address Register" */
#define DMA_CHSR02_ADDR       0xF0003CC0     /* "DMA Channel 02 Status Register" */
#define DMA_CHCR02_ADDR       0xF0003CC4     /* "DMA Channel 02 Control Register" */
#define DMA_CHICR02_ADDR      0xF0003CC8     /* "DMA Channel 02 Interrupt Control Register" */
#define DMA_ADRCR02_ADDR      0xF0003CCC     /* "DMA Channel 02 Address Control Register" */
#define DMA_SADR02_ADDR       0xF0003CD0     /* "DMA Channel 02 Source Address Register" */
#define DMA_DADR02_ADDR       0xF0003CD4     /* "DMA Channel 02 Destination Address Register" */
#define DMA_SHADR02_ADDR      0xF0003CD8     /* "DMA Channel 02 Shadowed Address Register" */
#define DMA_CHSR03_ADDR       0xF0003CE0     /* "DMA Channel 03 Status Register" */
#define DMA_CHCR03_ADDR       0xF0003CE4     /* "DMA Channel 03 Control Register" */
#define DMA_CHICR03_ADDR      0xF0003CE8     /* "DMA Channel 03 Interrupt Control Register" */
#define DMA_ADRCR03_ADDR      0xF0003CEC     /* "DMA Channel 03 Address Control Register" */
#define DMA_SADR03_ADDR       0xF0003CF0     /* "DMA Channel 03 Source Address Register" */
#define DMA_DADR03_ADDR       0xF0003CF4     /* "DMA Channel 03 Destination Address Register" */
#define DMA_SHADR03_ADDR      0xF0003CF8     /* "DMA Channel 03 Shadowed Address Register" */
#define DMA_CHSR04_ADDR       0xF0003D00     /* "DMA Channel 04 Status Register" */
#define DMA_CHCR04_ADDR       0xF0003D04     /* "DMA Channel 04 Control Register" */
#define DMA_CHICR04_ADDR      0xF0003D08     /* "DMA Channel 04 Interrupt Control Register" */
#define DMA_ADRCR04_ADDR      0xF0003D0C     /* "DMA Channel 04 Address Control Register" */
#define DMA_SADR04_ADDR       0xF0003D10     /* "DMA Channel 04 Source Address Register" */
#define DMA_DADR04_ADDR       0xF0003D14     /* "DMA Channel 04 Destination Address Register" */
#define DMA_SHADR04_ADDR      0xF0003D18     /* "DMA Channel 04 Shadowed Address Register" */
#define DMA_CHSR05_ADDR       0xF0003D20     /* "DMA Channel 05 Status Register" */
#define DMA_CHCR05_ADDR       0xF0003D24     /* "DMA Channel 05 Control Register" */
#define DMA_CHICR05_ADDR      0xF0003D28     /* "DMA Channel 05 Interrupt Control Register" */
#define DMA_ADRCR05_ADDR      0xF0003D2C     /* "DMA Channel 05 Address Control Register" */
#define DMA_SADR05_ADDR       0xF0003D30     /* "DMA Channel 05 Source Address Register" */
#define DMA_DADR05_ADDR       0xF0003D34     /* "DMA Channel 05 Destination Address Register" */
#define DMA_SHADR05_ADDR      0xF0003D38     /* "DMA Channel 05 Shadowed Address Register" */
#define DMA_CHSR06_ADDR       0xF0003D40     /* "DMA Channel 06 Status Register" */
#define DMA_CHCR06_ADDR       0xF0003D44     /* "DMA Channel 06 Control Register" */
#define DMA_CHICR06_ADDR      0xF0003D48     /* "DMA Channel 06 Interrupt Control Register" */
#define DMA_ADRCR06_ADDR      0xF0003D4C     /* "DMA Channel 06 Address Control Register" */
#define DMA_SADR06_ADDR       0xF0003D50     /* "DMA Channel 06 Source Address Register" */
#define DMA_DADR06_ADDR       0xF0003D54     /* "DMA Channel 06 Destination Address Register" */
#define DMA_SHADR06_ADDR      0xF0003D58     /* "DMA Channel 06 Shadowed Address Register" */
#define DMA_CHSR07_ADDR       0xF0003D60     /* "DMA Channel 07 Status Register" */
#define DMA_CHCR07_ADDR       0xF0003D64     /* "DMA Channel 07 Control Register" */
#define DMA_CHICR07_ADDR      0xF0003D68     /* "DMA Channel 07 Interrupt Control Register" */
#define DMA_ADRCR07_ADDR      0xF0003D6C     /* "DMA Channel 07 Address Control Register" */
#define DMA_SADR07_ADDR       0xF0003D70     /* "DMA Channel 07 Source Address Register" */
#define DMA_DADR07_ADDR       0xF0003D74     /* "DMA Channel 07 Destination Address Register" */
#define DMA_SHADR07_ADDR      0xF0003D78     /* "DMA Channel 07 Shadowed Address Register" */
#define DMA_TOCTR_ADDR        0xF0003E80     /* "DMA Bus Time-Out Control Register" */
#define DMA_SYSSRC4_ADDR      0xF0003E8C     /* "System Interrupt Service Request Control Register 4" */
#define DMA_SYSSRC3_ADDR      0xF0003E90     /* "System Interrupt Service Request Control Register 3" */
#define DMA_SYSSRC2_ADDR      0xF0003E94     /* "System Interrupt Service Request Control Register 2" */
#define DMA_SYSSRC1_ADDR      0xF0003E98     /* "System Interrupt Service Request Control Register 1" */
#define DMA_SYSSRC0_ADDR      0xF0003E9C     /* "System Interrupt Service Request Control Register 0" */
#define DMA_MLI0SRC3_ADDR     0xF0003EA0     /* "MLI 0 Service Request Control Register 3" */
#define DMA_MLI0SRC2_ADDR     0xF0003EA4     /* "MLI 0 Service Request Control Register 2" */
#define DMA_MLI0SRC1_ADDR     0xF0003EA8     /* "MLI 0 Service Request Control Register 1" */
#define DMA_MLI0SRC0_ADDR     0xF0003EAC     /* "MLI 0 Service Request Control Register 0" */
#define DMA_MLI1SRC1_ADDR     0xF0003EB8     /* "MLI 1 Service Request Control Register 1" */
#define DMA_MLI1SRC0_ADDR     0xF0003EBC     /* "MLI 1 Service Request Control Register 0" */
#define DMA_SRC3_ADDR         0xF0003EF0     /* "DMA Service Request Control Register 3" */
#define DMA_SRC2_ADDR         0xF0003EF4     /* "DMA Service Request Control Register 2" */
#define DMA_SRC1_ADDR         0xF0003EF8     /* "DMA Service Request Control Register 1" */
#define DMA_SRC0_ADDR         0xF0003EFC     /* "DMA Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_DMA_ADDRESSES_H_ (block "DMA") */


