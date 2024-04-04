/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "DMA" of TriCore TC1197 (154 SFRs) */

#ifndef _HAVE_TRICORE_DMA_ADDRESSES_H_
#define _HAVE_TRICORE_DMA_ADDRESSES_H_

#define DMA_CLC_ADDR          0xF0003C00     /* "DMA Clock Control Register" */
#define DMA_ID_ADDR           0xF0003C08     /* "Module Identification Register" */
#define DMA_CHRSTR_ADDR       0xF0003C10     /* "DMA Channel Reset Request Register" */
#define DMA_TRSR_ADDR         0xF0003C14     /* "DMA Transaction Request State Register" */
#define DMA_STREQ_ADDR        0xF0003C18     /* "DMA Software Transaction Request Register" */
#define DMA_HTREQ_ADDR        0xF0003C1C     /* "DMA Hardware Transaction Request Register" */
#define DMA_EER_ADDR          0xF0003C20     /* "DMA Enable Error Register" */
#define DMA_ERRSR_ADDR        0xF0003C24     /* "DMA Error Status Register" */
#define DMA_CLRE_ADDR         0xF0003C28     /* "DMA Clear Error Register" */
#define DMA_GINTR_ADDR        0xF0003C2C     /* "DMA Global Interrupt Set Register" */
#define DMA_MESR_ADDR         0xF0003C30     /* "DMA Move Engine Status Register" */
#define DMA_ME0R_ADDR         0xF0003C34     /* "DMA Move Engine 0 Read Register" */
#define DMA_ME1R_ADDR         0xF0003C38     /* "DMA Move Engine 1 Read Register" */
#define DMA_ME0PR_ADDR        0xF0003C3C     /* "DMA Move Engine 0 Pattern Register" */
#define DMA_ME1PR_ADDR        0xF0003C40     /* "DMA Move Engine 1Pattern Register" */
#define DMA_ME0AENR_ADDR      0xF0003C44     /* "DMA Move Engine 0 Access Enable Register" */
#define DMA_ME0ARR_ADDR       0xF0003C48     /* "DMA Move Engine 0 Access Range Register" */
#define DMA_ME1AENR_ADDR      0xF0003C4C     /* "DMA Move Engine 1Access Enable Register" */
#define DMA_ME1ARR_ADDR       0xF0003C50     /* "DMA Move Engine 1Access Range Register" */
#define DMA_INTSR_ADDR        0xF0003C54     /* "DMA Interrupt Status Register" */
#define DMA_INTCR_ADDR        0xF0003C58     /* "DMA Interrupt Clear Register" */
#define DMA_WRPSR_ADDR        0xF0003C5C     /* "DMA Wrap Status Register" */
#define DMA_OCDSR_ADDR        0xF0003C64     /* "DMA OCDS Register" */
#define DMA_SUSPMR_ADDR       0xF0003C68     /* "DMA Suspend Mode Register" */
#define DMA_CHSR00_ADDR       0xF0003C80     /* "DMA Channel 00 Status Register" */
#define DMA_CHCR00_ADDR       0xF0003C84     /* "DMA Channel 00 Control Register" */
#define DMA_CHICR00_ADDR      0xF0003C88     /* "DMA Channel 00 Interrupt Control Register" */
#define DMA_ADRCR00_ADDR      0xF0003C8C     /* "DMA Channel 00 Address Control Register" */
#define DMA_SADR00_ADDR       0xF0003C90     /* "DMA Channel 00 Source Address Register" */
#define DMA_DADR00_ADDR       0xF0003C94     /* "DMA Channel 00 Destination Address Register" */
#define DMA_SHADR00_ADDR      0xF0003C98     /* "DMA Channel 00 Shadow Address Register" */
#define DMA_CHSR01_ADDR       0xF0003CA0     /* "DMA Channel 01 Status Register" */
#define DMA_CHCR01_ADDR       0xF0003CA4     /* "DMA Channel 01 Control Register" */
#define DMA_CHICR01_ADDR      0xF0003CA8     /* "DMA Channel 01 Interrupt Control Register" */
#define DMA_ADRCR01_ADDR      0xF0003CAC     /* "DMA Channel 01 Address Control Register" */
#define DMA_SADR01_ADDR       0xF0003CB0     /* "DMA Channel 01 Source Address Register" */
#define DMA_DADR01_ADDR       0xF0003CB4     /* "DMA Channel 01 Destination Address Register" */
#define DMA_SHADR01_ADDR      0xF0003CB8     /* "DMA Channel 01 Shadow Address Register" */
#define DMA_CHSR02_ADDR       0xF0003CC0     /* "DMA Channel 02 Status Register" */
#define DMA_CHCR02_ADDR       0xF0003CC4     /* "DMA Channel 02 Control Register" */
#define DMA_CHICR02_ADDR      0xF0003CC8     /* "DMA Channel 02 Interrupt Control Register" */
#define DMA_ADRCR02_ADDR      0xF0003CCC     /* "DMA Channel 02 Address Control Register" */
#define DMA_SADR02_ADDR       0xF0003CD0     /* "DMA Channel 02 Source Address Register" */
#define DMA_DADR02_ADDR       0xF0003CD4     /* "DMA Channel 02 Destination Address Register" */
#define DMA_SHADR02_ADDR      0xF0003CD8     /* "DMA Channel 02 Shadow Address Register" */
#define DMA_CHSR03_ADDR       0xF0003CE0     /* "DMA Channel 03 Status Register" */
#define DMA_CHCR03_ADDR       0xF0003CE4     /* "DMA Channel 03 Control Register" */
#define DMA_CHICR03_ADDR      0xF0003CE8     /* "DMA Channel 03 Interrupt Control Register" */
#define DMA_ADRCR03_ADDR      0xF0003CEC     /* "DMA Channel 03 Address Control Register" */
#define DMA_SADR03_ADDR       0xF0003CF0     /* "DMA Channel 03 Source Address Register" */
#define DMA_DADR03_ADDR       0xF0003CF4     /* "DMA Channel 03 Destination Address Register" */
#define DMA_SHADR03_ADDR      0xF0003CF8     /* "DMA Channel 03 Shadow Address Register" */
#define DMA_CHSR04_ADDR       0xF0003D00     /* "DMA Channel 04 Status Register" */
#define DMA_CHCR04_ADDR       0xF0003D04     /* "DMA Channel 04 Control Register" */
#define DMA_CHICR04_ADDR      0xF0003D08     /* "DMA Channel 04 Interrupt Control Register" */
#define DMA_ADRCR04_ADDR      0xF0003D0C     /* "DMA Channel 04 Address Control Register" */
#define DMA_SADR04_ADDR       0xF0003D10     /* "DMA Channel 04 Source Address Register" */
#define DMA_DADR04_ADDR       0xF0003D14     /* "DMA Channel 04 Destination Address Register" */
#define DMA_SHADR04_ADDR      0xF0003D18     /* "DMA Channel 04 Shadow Address Register" */
#define DMA_CHSR05_ADDR       0xF0003D20     /* "DMA Channel 05 Status Register" */
#define DMA_CHCR05_ADDR       0xF0003D24     /* "DMA Channel 05 Control Register" */
#define DMA_CHICR05_ADDR      0xF0003D28     /* "DMA Channel 05 Interrupt Control Register" */
#define DMA_ADRCR05_ADDR      0xF0003D2C     /* "DMA Channel 05 Address Control Register" */
#define DMA_SADR05_ADDR       0xF0003D30     /* "DMA Channel 05 Source Address Register" */
#define DMA_DADR05_ADDR       0xF0003D34     /* "DMA Channel 05 Destination Address Register" */
#define DMA_SHADR05_ADDR      0xF0003D38     /* "DMA Channel 05 Shadow Address Register" */
#define DMA_CHSR06_ADDR       0xF0003D40     /* "DMA Channel 06 Status Register" */
#define DMA_CHCR06_ADDR       0xF0003D44     /* "DMA Channel 06 Control Register" */
#define DMA_CHICR06_ADDR      0xF0003D48     /* "DMA Channel 06 Interrupt Control Register" */
#define DMA_ADRCR06_ADDR      0xF0003D4C     /* "DMA Channel 06 Address Control Register" */
#define DMA_SADR06_ADDR       0xF0003D50     /* "DMA Channel 06 Source Address Register" */
#define DMA_DADR06_ADDR       0xF0003D54     /* "DMA Channel 06 Destination Address Register" */
#define DMA_SHADR06_ADDR      0xF0003D58     /* "DMA Channel 06 Shadow Address Register" */
#define DMA_CHSR07_ADDR       0xF0003D60     /* "DMA Channel 07 Status Register" */
#define DMA_CHCR07_ADDR       0xF0003D64     /* "DMA Channel 07 Control Register" */
#define DMA_CHICR07_ADDR      0xF0003D68     /* "DMA Channel 07 Interrupt Control Register" */
#define DMA_ADRCR07_ADDR      0xF0003D6C     /* "DMA Channel 07 Address Control Register" */
#define DMA_SADR07_ADDR       0xF0003D70     /* "DMA Channel 07 Source Address Register" */
#define DMA_DADR07_ADDR       0xF0003D74     /* "DMA Channel 07 Destination Address Register" */
#define DMA_SHADR07_ADDR      0xF0003D78     /* "DMA Channel 07 Shadow Address Register" */
#define DMA_CHSR10_ADDR       0xF0003D80     /* "DMA Channel 10 Status Register" */
#define DMA_CHCR10_ADDR       0xF0003D84     /* "DMA Channel 10 Control Register" */
#define DMA_CHICR10_ADDR      0xF0003D88     /* "DMA Channel 10 Interrupt Control Register" */
#define DMA_ADRCR10_ADDR      0xF0003D8C     /* "DMA Channel 10 Address Control Register" */
#define DMA_SADR10_ADDR       0xF0003D90     /* "DMA Channel 10 Source Address Register" */
#define DMA_DADR10_ADDR       0xF0003D94     /* "DMA Channel 10 Destination Address Register" */
#define DMA_SHADR10_ADDR      0xF0003D98     /* "DMA Channel 10 Shadow Address Register" */
#define DMA_CHSR11_ADDR       0xF0003DA0     /* "DMA Channel 11 Status Register" */
#define DMA_CHCR11_ADDR       0xF0003DA4     /* "DMA Channel 11 Control Register" */
#define DMA_CHICR11_ADDR      0xF0003DA8     /* "DMA Channel 11 Interrupt Control Register" */
#define DMA_ADRCR11_ADDR      0xF0003DAC     /* "DMA Channel 11 Address Control Register" */
#define DMA_SADR11_ADDR       0xF0003DB0     /* "DMA Channel 11 Source Address Register" */
#define DMA_DADR11_ADDR       0xF0003DB4     /* "DMA Channel 11 Destination Address Register" */
#define DMA_SHADR11_ADDR      0xF0003DB8     /* "DMA Channel 11 Shadow Address Register" */
#define DMA_CHSR12_ADDR       0xF0003DC0     /* "DMA Channel 12 Status Register" */
#define DMA_CHCR12_ADDR       0xF0003DC4     /* "DMA Channel 12 Control Register" */
#define DMA_CHICR12_ADDR      0xF0003DC8     /* "DMA Channel 12 Interrupt Control Register" */
#define DMA_ADRCR12_ADDR      0xF0003DCC     /* "DMA Channel 12 Address Control Register" */
#define DMA_SADR12_ADDR       0xF0003DD0     /* "DMA Channel 12 Source Address Register" */
#define DMA_DADR12_ADDR       0xF0003DD4     /* "DMA Channel 12 Destination Address Register" */
#define DMA_SHADR12_ADDR      0xF0003DD8     /* "DMA Channel 12 Shadow Address Register" */
#define DMA_CHSR13_ADDR       0xF0003DE0     /* "DMA Channel 13 Status Register" */
#define DMA_CHCR13_ADDR       0xF0003DE4     /* "DMA Channel 13 Control Register" */
#define DMA_CHICR13_ADDR      0xF0003DE8     /* "DMA Channel 13 Interrupt Control Register" */
#define DMA_ADRCR13_ADDR      0xF0003DEC     /* "DMA Channel 13 Address Control Register" */
#define DMA_SADR13_ADDR       0xF0003DF0     /* "DMA Channel 13 Source Address Register" */
#define DMA_DADR13_ADDR       0xF0003DF4     /* "DMA Channel 13 Destination Address Register" */
#define DMA_SHADR13_ADDR      0xF0003DF8     /* "DMA Channel 13 Shadow Address Register" */
#define DMA_CHSR14_ADDR       0xF0003E00     /* "DMA Channel 14 Status Register" */
#define DMA_CHCR14_ADDR       0xF0003E04     /* "DMA Channel 14 Control Register" */
#define DMA_CHICR14_ADDR      0xF0003E08     /* "DMA Channel 14 Interrupt Control Register" */
#define DMA_ADRCR14_ADDR      0xF0003E0C     /* "DMA Channel 14 Address Control Register" */
#define DMA_SADR14_ADDR       0xF0003E10     /* "DMA Channel 14 Source Address Register" */
#define DMA_DADR14_ADDR       0xF0003E14     /* "DMA Channel 14 Destination Address Register" */
#define DMA_SHADR14_ADDR      0xF0003E18     /* "DMA Channel 14 Shadow Address Register" */
#define DMA_CHSR15_ADDR       0xF0003E20     /* "DMA Channel 15 Status Register" */
#define DMA_CHCR15_ADDR       0xF0003E24     /* "DMA Channel 15 Control Register" */
#define DMA_CHICR15_ADDR      0xF0003E28     /* "DMA Channel 15 Interrupt Control Register" */
#define DMA_ADRCR15_ADDR      0xF0003E2C     /* "DMA Channel 15 Address Control Register" */
#define DMA_SADR15_ADDR       0xF0003E30     /* "DMA Channel 15 Source Address Register" */
#define DMA_DADR15_ADDR       0xF0003E34     /* "DMA Channel 15 Destination Address Register" */
#define DMA_SHADR15_ADDR      0xF0003E38     /* "DMA Channel 15 Shadow Address Register" */
#define DMA_CHSR16_ADDR       0xF0003E40     /* "DMA Channel 16 Status Register" */
#define DMA_CHCR16_ADDR       0xF0003E44     /* "DMA Channel 16 Control Register" */
#define DMA_CHICR16_ADDR      0xF0003E48     /* "DMA Channel 16 Interrupt Control Register" */
#define DMA_ADRCR16_ADDR      0xF0003E4C     /* "DMA Channel 16 Address Control Register" */
#define DMA_SADR16_ADDR       0xF0003E50     /* "DMA Channel 16 Source Address Register" */
#define DMA_DADR16_ADDR       0xF0003E54     /* "DMA Channel 16 Destination Address Register" */
#define DMA_SHADR16_ADDR      0xF0003E58     /* "DMA Channel 16 Shadow Address Register" */
#define DMA_CHSR17_ADDR       0xF0003E60     /* "DMA Channel 17 Status Register" */
#define DMA_CHCR17_ADDR       0xF0003E64     /* "DMA Channel 17 Control Register" */
#define DMA_CHICR17_ADDR      0xF0003E68     /* "DMA Channel 17 Interrupt Control Register" */
#define DMA_ADRCR17_ADDR      0xF0003E6C     /* "DMA Channel 17 Address Control Register" */
#define DMA_SADR17_ADDR       0xF0003E70     /* "DMA Channel 17 Source Address Register" */
#define DMA_DADR17_ADDR       0xF0003E74     /* "DMA Channel 17 Destination Address Register" */
#define DMA_SHADR17_ADDR      0xF0003E78     /* "DMA Channel 17 Shadow Address Register" */
#define DMA_MLI0SRC3_ADDR     0xF0003EA0     /* "DMA MLI0 Service Request Control Register 3" */
#define DMA_MLI0SRC2_ADDR     0xF0003EA4     /* "DMA MLI0 Service Request Control Register 2" */
#define DMA_MLI0SRC1_ADDR     0xF0003EA8     /* "DMA MLI0 Service Request Control Register 1" */
#define DMA_MLI0SRC0_ADDR     0xF0003EAC     /* "DMA MLI0 Service Request Control Register 0" */
#define DMA_MLI1SRC1_ADDR     0xF0003EB8     /* "DMA MLI1 Service Request Control Register 1" */
#define DMA_MLI1SRC0_ADDR     0xF0003EBC     /* "DMA MLI1 Service Request Control Register 0" */
#define DMA_SRC7_ADDR         0xF0003EE0     /* "DMA Service Request Control Register 7" */
#define DMA_SRC6_ADDR         0xF0003EE4     /* "DMA Service Request Control Register 6" */
#define DMA_SRC5_ADDR         0xF0003EE8     /* "DMA Service Request Control Register 5" */
#define DMA_SRC4_ADDR         0xF0003EEC     /* "DMA Service Request Control Register 4" */
#define DMA_SRC3_ADDR         0xF0003EF0     /* "DMA Service Request Control Register 3" */
#define DMA_SRC2_ADDR         0xF0003EF4     /* "DMA Service Request Control Register 2" */
#define DMA_SRC1_ADDR         0xF0003EF8     /* "DMA Service Request Control Register 1" */
#define DMA_SRC0_ADDR         0xF0003EFC     /* "DMA Service Request Control Register 0" */
#define MCHK_ID_ADDR          0xF010C208     /* "Module Identification Register" */
#define MCHK_IR_ADDR          0xF010C210     /* "Memory Checker Input Register" */
#define MCHK_RR_ADDR          0xF010C214     /* "Memory Checker Result Register" */
#define MCHK_WR_ADDR          0xF010C220     /* "Memory Checker Write Register" */


#endif /* _HAVE_TRICORE_DMA_ADDRESSES_H_ (block "DMA") */


