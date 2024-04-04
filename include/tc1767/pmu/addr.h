/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "PMU" of TriCore TC1767 (14 SFRs) */

#ifndef _HAVE_TRICORE_PMU_ADDRESSES_H_
#define _HAVE_TRICORE_PMU_ADDRESSES_H_

#define PMU0_ID_ADDR          0xF8000508     /* "PMU0 Identification Register" */
#define PMU0_OVRCON_ADDR      0xF8000520     /* "Overlay RAM Control Register" */
#define FLASH0_ID_ADDR        0xF8002008     /* "Flash Module Identification Register" */
#define FLASH0_FSR_ADDR       0xF8002010     /* "Flash Status Register" */
#define FLASH0_FCON_ADDR      0xF8002014     /* "Flash Configuration Register" */
#define FLASH0_MARP_ADDR      0xF8002018     /* "Margin Control Register PFLASH" */
#define FLASH0_MARD_ADDR      0xF800201C     /* "Margin Control Register DFLASH" */
#define FLASH0_PROCON0_ADDR   0xF8002020     /* "Flash Protection Configuration Register User 0" */
#define FLASH0_PROCON1_ADDR   0xF8002024     /* "Flash Protection Configuration Register User 1" */
#define FLASH0_PROCON2_ADDR   0xF8002028     /* "Flash Protection Configuration Register User 2" */
#define FLASH0_CFTEST_ADDR    0xF8002100     /* "CPU Flash Test Register" */
#define FLASH0_ECCW_ADDR      0xF8002104     /* "ECC Write Register" */
#define FLASH0_ECCR_ADDR      0xF8002108     /* "ECC Read Register" */
#define FLASH0_FSCON_ADDR     0xF800210C     /* "Flash Size Configuration Register" */


#endif /* _HAVE_TRICORE_PMU_ADDRESSES_H_ (block "PMU") */


