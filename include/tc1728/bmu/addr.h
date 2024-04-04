/* (c) HighTec EDV-Systeme GmbH */

/* block "BMU" of TriCore TC1728 (15 SFRs) */

#ifndef _HAVE_TRICORE_BMU_ADDRESSES_H_
#define _HAVE_TRICORE_BMU_ADDRESSES_H_

#define BMU_CLC_ADDR          0xF0323000     /* "Control Clock Register" */
#define BMU_ID_ADDR           0xF0323008     /* "Module Identification Register" */
#define BMU_CTL_ADDR          0xF0323020     /* "Transaction Filtering Control" */
#define BMU_PTR_ADDR          0xF0323024     /* "Pointer Information for Bus Transaction Fifo" */
#define BMU_FULLNESS_ADDR     0xF0323028     /* "Fullness Information for Bus Transaction Fifo" */
#define BMU_PSET0_ADDR        0xF0323030     /* "Peripheral Set 0 Configuration" */
#define BMU_PSET1_ADDR        0xF0323034     /* "Peripheral Set 1 Configuration" */
#define BMU_TID_ADDR          0xF0323038     /* "FPI Transaction ID Set 0 Configuration" */
#define BMU_FMCTL_ADDR        0xF0323040     /* "Fifo Monitor control register" */
#define BMU_FMSTS_ADDR        0xF0323044     /* "Fifo Monitor Status Register" */
#define BMU_FMTH_ADDR         0xF0323048     /* "Fifo Monitor: Fullness Threshold Register" */
#define BMU_SMACON_ADDR       0xF0323050     /* "SIST Mode Access Control Register" */
#define BMU_MIECON_ADDR       0xF0323054     /* "Memory Integrity Error Control Register" */
#define BMU_MIECON2_ADDR      0xF0323058     /* "Memory Integrity Error Control 2 Register" */
#define BMU_SRC_ADDR          0xF03230FC     /* "Service Request Control Register" */


#endif /* _HAVE_TRICORE_BMU_ADDRESSES_H_ (block "BMU") */


