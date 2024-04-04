/* (c) HighTec EDV-Systeme GmbH */

/* block "SDMA" of TriCore TC1791 (138 SFRs) */

#ifndef _HAVE_TRICORE_SDMA_ADDRESSES_H_
#define _HAVE_TRICORE_SDMA_ADDRESSES_H_

#define SDMA_CLC_ADDR         0xF0003800     /* "SDMA Clock Control Register" */
#define SDMA_ID_ADDR          0xF0003808     /* "Module Identification Register" */
#define SDMA_CHRSTR_ADDR      0xF0003810     /* "SDMA Channel Reset Request Register" */
#define SDMA_TRSR_ADDR        0xF0003814     /* "SDMA Transaction Request State Register" */
#define SDMA_STREQ_ADDR       0xF0003818     /* "SDMA Software Transaction Request Register" */
#define SDMA_HTREQ_ADDR       0xF000381C     /* "SDMA Hardware Transaction Request Register" */
#define SDMA_EER_ADDR         0xF0003820     /* "SDMA Enable Error Register" */
#define SDMA_ERRSR_ADDR       0xF0003824     /* "SDMA Error Status Register" */
#define SDMA_CLRE_ADDR        0xF0003828     /* "SDMA Clear Error Register" */
#define SDMA_GINTR_ADDR       0xF000382C     /* "SDMA Global Interrupt Set Register" */
#define SDMA_MESR_ADDR        0xF0003830     /* "SDMA Move Engine Status Register" */
#define SDMA_ME0R_ADDR        0xF0003834     /* "SDMA Move Engine 0 Read Register" */
#define SDMA_ME0PR_ADDR       0xF000383C     /* "SDMA Move Engine 0 Pattern Register" */
#define SDMA_INTSR_ADDR       0xF0003854     /* "SDMA Interrupt Status Register" */
#define SDMA_INTCR_ADDR       0xF0003858     /* "SDMA Interrupt Clear Register" */
#define SDMA_WRPSR_ADDR       0xF000385C     /* "SDMA Wrap Status Register" */
#define SDMA_OCDSR_ADDR       0xF0003864     /* "SDMA OCDS Register" */
#define SDMA_SUSPMR_ADDR      0xF0003868     /* "SDMA Suspend Mode Register" */
#define SDMA_CHSR00_ADDR      0xF0003880     /* "SDMA Channel 00 Status Register" */
#define SDMA_CHCR00_ADDR      0xF0003884     /* "SDMA Channel 00 Control Register" */
#define SDMA_CHICR00_ADDR     0xF0003888     /* "SDMA Channel 00 Interrupt Control Register" */
#define SDMA_ADRCR00_ADDR     0xF000388C     /* "SDMA Channel 00 Address Control Register" */
#define SDMA_SADR00_ADDR      0xF0003890     /* "SDMA Channel 00 Source Address Register" */
#define SDMA_DADR00_ADDR      0xF0003894     /* "SDMA Channel 00 Destination Address Register" */
#define SDMA_SHADR00_ADDR     0xF0003898     /* "SDMA Channel 00 Shadow Address Register" */
#define SDMA_CHSR01_ADDR      0xF00038A0     /* "SDMA Channel 01 Status Register" */
#define SDMA_CHCR01_ADDR      0xF00038A4     /* "SDMA Channel 01 Control Register" */
#define SDMA_CHICR01_ADDR     0xF00038A8     /* "SDMA Channel 01 Interrupt Control Register" */
#define SDMA_ADRCR01_ADDR     0xF00038AC     /* "SDMA Channel 01 Address Control Register" */
#define SDMA_SADR01_ADDR      0xF00038B0     /* "SDMA Channel 01 Source Address Register" */
#define SDMA_DADR01_ADDR      0xF00038B4     /* "SDMA Channel 01 Destination Address Register" */
#define SDMA_SHADR01_ADDR     0xF00038B8     /* "SDMA Channel 01 Shadow Address Register" */
#define SDMA_CHSR02_ADDR      0xF00038C0     /* "SDMA Channel 02 Status Register" */
#define SDMA_CHCR02_ADDR      0xF00038C4     /* "SDMA Channel 02 Control Register" */
#define SDMA_CHICR02_ADDR     0xF00038C8     /* "SDMA Channel 02 Interrupt Control Register" */
#define SDMA_ADRCR02_ADDR     0xF00038CC     /* "SDMA Channel 02 Address Control Register" */
#define SDMA_SADR02_ADDR      0xF00038D0     /* "SDMA Channel 02 Source Address Register" */
#define SDMA_DADR02_ADDR      0xF00038D4     /* "SDMA Channel 02 Destination Address Register" */
#define SDMA_SHADR02_ADDR     0xF00038D8     /* "SDMA Channel 02 Shadow Address Register" */
#define SDMA_CHSR03_ADDR      0xF00038E0     /* "SDMA Channel 03 Status Register" */
#define SDMA_CHCR03_ADDR      0xF00038E4     /* "SDMA Channel 03 Control Register" */
#define SDMA_CHICR03_ADDR     0xF00038E8     /* "SDMA Channel 03 Interrupt Control Register" */
#define SDMA_ADRCR03_ADDR     0xF00038EC     /* "SDMA Channel 03 Address Control Register" */
#define SDMA_SADR03_ADDR      0xF00038F0     /* "SDMA Channel 03 Source Address Register" */
#define SDMA_DADR03_ADDR      0xF00038F4     /* "SDMA Channel 03 Destination Address Register" */
#define SDMA_SHADR03_ADDR     0xF00038F8     /* "SDMA Channel 03 Shadow Address Register" */
#define SDMA_CHSR04_ADDR      0xF0003900     /* "SDMA Channel 04 Status Register" */
#define SDMA_CHCR04_ADDR      0xF0003904     /* "SDMA Channel 04 Control Register" */
#define SDMA_CHICR04_ADDR     0xF0003908     /* "SDMA Channel 04 Interrupt Control Register" */
#define SDMA_ADRCR04_ADDR     0xF000390C     /* "SDMA Channel 04 Address Control Register" */
#define SDMA_SADR04_ADDR      0xF0003910     /* "SDMA Channel 04 Source Address Register" */
#define SDMA_DADR04_ADDR      0xF0003914     /* "SDMA Channel 04 Destination Address Register" */
#define SDMA_SHADR04_ADDR     0xF0003918     /* "SDMA Channel 04 Shadow Address Register" */
#define SDMA_CHSR05_ADDR      0xF0003920     /* "SDMA Channel 05 Status Register" */
#define SDMA_CHCR05_ADDR      0xF0003924     /* "SDMA Channel 05 Control Register" */
#define SDMA_CHICR05_ADDR     0xF0003928     /* "SDMA Channel 05 Interrupt Control Register" */
#define SDMA_ADRCR05_ADDR     0xF000392C     /* "SDMA Channel 05 Address Control Register" */
#define SDMA_SADR05_ADDR      0xF0003930     /* "SDMA Channel 05 Source Address Register" */
#define SDMA_DADR05_ADDR      0xF0003934     /* "SDMA Channel 05 Destination Address Register" */
#define SDMA_SHADR05_ADDR     0xF0003938     /* "SDMA Channel 05 Shadow Address Register" */
#define SDMA_CHSR06_ADDR      0xF0003940     /* "SDMA Channel 06 Status Register" */
#define SDMA_CHCR06_ADDR      0xF0003944     /* "SDMA Channel 06 Control Register" */
#define SDMA_CHICR06_ADDR     0xF0003948     /* "SDMA Channel 06 Interrupt Control Register" */
#define SDMA_ADRCR06_ADDR     0xF000394C     /* "SDMA Channel 06 Address Control Register" */
#define SDMA_SADR06_ADDR      0xF0003950     /* "SDMA Channel 06 Source Address Register" */
#define SDMA_DADR06_ADDR      0xF0003954     /* "SDMA Channel 06 Destination Address Register" */
#define SDMA_SHADR06_ADDR     0xF0003958     /* "SDMA Channel 06 Shadow Address Register" */
#define SDMA_CHSR07_ADDR      0xF0003960     /* "SDMA Channel 07 Status Register" */
#define SDMA_CHCR07_ADDR      0xF0003964     /* "SDMA Channel 07 Control Register" */
#define SDMA_CHICR07_ADDR     0xF0003968     /* "SDMA Channel 07 Interrupt Control Register" */
#define SDMA_ADRCR07_ADDR     0xF000396C     /* "SDMA Channel 07 Address Control Register" */
#define SDMA_SADR07_ADDR      0xF0003970     /* "SDMA Channel 07 Source Address Register" */
#define SDMA_DADR07_ADDR      0xF0003974     /* "SDMA Channel 07 Destination Address Register" */
#define SDMA_SHADR07_ADDR     0xF0003978     /* "SDMA Channel 07 Shadow Address Register" */
#define SDMA_SAMIN00_ADDR     0xF0003980     /* "SDMA Channel 00 Source Address Lower Boundary Register" */
#define SDMA_SAMAX00_ADDR     0xF0003984     /* "SDMA Channel 00 Source Address Lower Boundary Register" */
#define SDMA_DAMIN00_ADDR     0xF0003988     /* "SDMA Channel 00 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX00_ADDR     0xF000398C     /* "SDMA Channel 00 Destination Address Upper Boundary Register" */
#define SDMA_SCRC00_ADDR      0xF0003990     /* "SDMA Channel 00 Source Address CRC Register" */
#define SDMA_DCRC00_ADDR      0xF0003994     /* "SDMA Channel 00 Destination Address CRC Register" */
#define SDMA_RDCRC00_ADDR     0xF0003998     /* "SDMA Channel 00 Read Data CRC Register" */
#define SDMA_SAMIN01_ADDR     0xF00039A0     /* "SDMA Channel 01 Source Address Lower Boundary Register" */
#define SDMA_SAMAX01_ADDR     0xF00039A4     /* "SDMA Channel 01 Source Address Lower Boundary Register" */
#define SDMA_DAMIN01_ADDR     0xF00039A8     /* "SDMA Channel 01 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX01_ADDR     0xF00039AC     /* "SDMA Channel 01 Destination Address Upper Boundary Register" */
#define SDMA_SCRC01_ADDR      0xF00039B0     /* "SDMA Channel 01 Source Address CRC Register" */
#define SDMA_DCRC01_ADDR      0xF00039B4     /* "SDMA Channel 01 Destination Address CRC Register" */
#define SDMA_RDCRC01_ADDR     0xF00039B8     /* "SDMA Channel 01 Read Data CRC Register" */
#define SDMA_SAMIN02_ADDR     0xF00039C0     /* "SDMA Channel 02 Source Address Lower Boundary Register" */
#define SDMA_SAMAX02_ADDR     0xF00039C4     /* "SDMA Channel 02 Source Address Lower Boundary Register" */
#define SDMA_DAMIN02_ADDR     0xF00039C8     /* "SDMA Channel 02 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX02_ADDR     0xF00039CC     /* "SDMA Channel 02 Destination Address Upper Boundary Register" */
#define SDMA_SCRC02_ADDR      0xF00039D0     /* "SDMA Channel 02 Source Address CRC Register" */
#define SDMA_DCRC02_ADDR      0xF00039D4     /* "SDMA Channel 02 Destination Address CRC Register" */
#define SDMA_RDCRC02_ADDR     0xF00039D8     /* "SDMA Channel 02 Read Data CRC Register" */
#define SDMA_SAMIN03_ADDR     0xF00039E0     /* "SDMA Channel 03 Source Address Lower Boundary Register" */
#define SDMA_SAMAX03_ADDR     0xF00039E4     /* "SDMA Channel 03 Source Address Lower Boundary Register" */
#define SDMA_DAMIN03_ADDR     0xF00039E8     /* "SDMA Channel 03 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX03_ADDR     0xF00039EC     /* "SDMA Channel 03 Destination Address Upper Boundary Register" */
#define SDMA_SCRC03_ADDR      0xF00039F0     /* "SDMA Channel 03 Source Address CRC Register" */
#define SDMA_DCRC03_ADDR      0xF00039F4     /* "SDMA Channel 03 Destination Address CRC Register" */
#define SDMA_RDCRC03_ADDR     0xF00039F8     /* "SDMA Channel 03 Read Data CRC Register" */
#define SDMA_SAMIN04_ADDR     0xF0003A00     /* "SDMA Channel 04 Source Address Lower Boundary Register" */
#define SDMA_SAMAX04_ADDR     0xF0003A04     /* "SDMA Channel 04 Source Address Lower Boundary Register" */
#define SDMA_DAMIN04_ADDR     0xF0003A08     /* "SDMA Channel 04 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX04_ADDR     0xF0003A0C     /* "SDMA Channel 04 Destination Address Upper Boundary Register" */
#define SDMA_SCRC04_ADDR      0xF0003A10     /* "SDMA Channel 04 Source Address CRC Register" */
#define SDMA_DCRC04_ADDR      0xF0003A14     /* "SDMA Channel 04 Destination Address CRC Register" */
#define SDMA_RDCRC04_ADDR     0xF0003A18     /* "SDMA Channel 04 Read Data CRC Register" */
#define SDMA_SAMIN05_ADDR     0xF0003A20     /* "SDMA Channel 05 Source Address Lower Boundary Register" */
#define SDMA_SAMAX05_ADDR     0xF0003A24     /* "SDMA Channel 05 Source Address Lower Boundary Register" */
#define SDMA_DAMIN05_ADDR     0xF0003A28     /* "SDMA Channel 05 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX05_ADDR     0xF0003A2C     /* "SDMA Channel 05 Destination Address Upper Boundary Register" */
#define SDMA_SCRC05_ADDR      0xF0003A30     /* "SDMA Channel 05 Source Address CRC Register" */
#define SDMA_DCRC05_ADDR      0xF0003A34     /* "SDMA Channel 05 Destination Address CRC Register" */
#define SDMA_RDCRC05_ADDR     0xF0003A38     /* "SDMA Channel 05 Read Data CRC Register" */
#define SDMA_SAMIN06_ADDR     0xF0003A40     /* "SDMA Channel 06 Source Address Lower Boundary Register" */
#define SDMA_SAMAX06_ADDR     0xF0003A44     /* "SDMA Channel 06 Source Address Lower Boundary Register" */
#define SDMA_DAMIN06_ADDR     0xF0003A48     /* "SDMA Channel 06 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX06_ADDR     0xF0003A4C     /* "SDMA Channel 06 Destination Address Upper Boundary Register" */
#define SDMA_SCRC06_ADDR      0xF0003A50     /* "SDMA Channel 06 Source Address CRC Register" */
#define SDMA_DCRC06_ADDR      0xF0003A54     /* "SDMA Channel 06 Destination Address CRC Register" */
#define SDMA_RDCRC06_ADDR     0xF0003A58     /* "SDMA Channel 06 Read Data CRC Register" */
#define SDMA_SAMIN07_ADDR     0xF0003A60     /* "SDMA Channel 07 Source Address Lower Boundary Register" */
#define SDMA_SAMAX07_ADDR     0xF0003A64     /* "SDMA Channel 07 Source Address Lower Boundary Register" */
#define SDMA_DAMIN07_ADDR     0xF0003A68     /* "SDMA Channel 07 Destination Address Lower Boundary Register" */
#define SDMA_DAMAX07_ADDR     0xF0003A6C     /* "SDMA Channel 07 Destination Address Upper Boundary Register" */
#define SDMA_SCRC07_ADDR      0xF0003A70     /* "SDMA Channel 07 Source Address CRC Register" */
#define SDMA_DCRC07_ADDR      0xF0003A74     /* "SDMA Channel 07 Destination Address CRC Register" */
#define SDMA_RDCRC07_ADDR     0xF0003A78     /* "SDMA Channel 07 Read Data CRC Register" */
#define SDMA_SRC7_ADDR        0xF0003AE0     /* "SDMA Service Request Control Register 7" */
#define SDMA_SRC6_ADDR        0xF0003AE4     /* "SDMA Service Request Control Register 6" */
#define SDMA_SRC5_ADDR        0xF0003AE8     /* "SDMA Service Request Control Register 5" */
#define SDMA_SRC4_ADDR        0xF0003AEC     /* "SDMA Service Request Control Register 4" */
#define SDMA_SRC3_ADDR        0xF0003AF0     /* "SDMA Service Request Control Register 3" */
#define SDMA_SRC2_ADDR        0xF0003AF4     /* "SDMA Service Request Control Register 2" */
#define SDMA_SRC1_ADDR        0xF0003AF8     /* "SDMA Service Request Control Register 1" */
#define SDMA_SRC0_ADDR        0xF0003AFC     /* "SDMA Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_SDMA_ADDRESSES_H_ (block "SDMA") */


