/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CSFR" of TriCore TC1792 (11 SFRs) */

#ifndef _HAVE_TRICORE_CSFR_ADDRESSES_H_
#define _HAVE_TRICORE_CSFR_ADDRESSES_H_

#define PCXI_ADDR             0xF7E1FE00     /* "Previous Context Information Register" */
#define PSW_ADDR              0xF7E1FE04     /* "Program Status Word" */
#define PC_ADDR               0xF7E1FE08     /* "Program Counter" */
#define SYSCON_ADDR           0xF7E1FE14     /* "System Configuration Register" */
#define CPU_ID_ADDR           0xF7E1FE18     /* "CPU Identification Register" */
#define BIV_ADDR              0xF7E1FE20     /* "Interrupt Vector Table Pointer" */
#define BTV_ADDR              0xF7E1FE24     /* "Trap Vector Table Pointer" */
#define ISP_ADDR              0xF7E1FE28     /* "Interrupt Stack Pointer" */
#define ICR_ADDR              0xF7E1FE2C     /* "ICU Interrupt Control Register" */
#define FCX_ADDR              0xF7E1FE38     /* "Free Context List Head Pointer" */
#define LCX_ADDR              0xF7E1FE3C     /* "Free Context List Limit Pointer" */


#endif /* _HAVE_TRICORE_CSFR_ADDRESSES_H_ (block "CSFR") */


