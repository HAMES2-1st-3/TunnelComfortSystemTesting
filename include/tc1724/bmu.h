/* (c) HighTec EDV-Systeme GmbH */

/* block "BMU" of TriCore TC1724 (15 SFRs) */

#include <tc1724/bmu/addr.h>

#include <tc1724/bmu/masks.h>
#include <tc1724/bmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1724/bmu/types.h>
#include <tc1724/bmu/sharetypes.h>

#ifndef _HAVE_TRICORE_BMU_H_
#define _HAVE_TRICORE_BMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (BMU_CLC, BMU_CLC_t, BMU_CLC_ADDR);     /* "Control Clock Register" */
SFR_NOABS (BMU_CTL, BMU_CTL_t, BMU_CTL_ADDR);     /* "Transaction Filtering Control" */
SFR_NOABS (BMU_FMCTL, BMU_FMCTL_t, BMU_FMCTL_ADDR); /* "Fifo Monitor control register" */
SFR_NOABS (BMU_FMSTS, BMU_FMSTS_t, BMU_FMSTS_ADDR); /* "Fifo Monitor Status Register" */
SFR_NOABS (BMU_FMTH, BMU_FMTH_t, BMU_FMTH_ADDR);  /* "Fifo Monitor: Fullness Threshold Register" */
SFR_NOABS (BMU_FULLNESS, BMU_FULLNESS_t, BMU_FULLNESS_ADDR); /* "Fullness Information for Bus Transaction Fifo" */
SFR_NOABS (BMU_ID, BMU_ID_t, BMU_ID_ADDR);        /* "Module Identification Register" */
SFR_NOABS (BMU_MIECON, BMU_MIECON_t, BMU_MIECON_ADDR); /* "Memory Integrity Error Control Register" */
SFR_NOABS (BMU_MIECON2, BMU_MIECON2_t, BMU_MIECON2_ADDR); /* "Memory Integrity Error Control 2 Register" */
SFR_NOABS (BMU_PSET0, BMU_PSETm_t, BMU_PSET0_ADDR); /* "Peripheral Set 0 Configuration" */
SFR_NOABS (BMU_PSET1, BMU_PSETm_t, BMU_PSET1_ADDR); /* "Peripheral Set 1 Configuration" */
SFR_NOABS (BMU_PTR, BMU_PTR_t, BMU_PTR_ADDR);     /* "Pointer Information for Bus Transaction Fifo" */
SFR_NOABS (BMU_SMACON, BMU_SMACON_t, BMU_SMACON_ADDR); /* "SIST Mode Access Control Register" */
SFR_NOABS (BMU_SRC, BMU_SRC_t, BMU_SRC_ADDR);     /* "Service Request Control Register" */
SFR_NOABS (BMU_TID, BMU_TID_t, BMU_TID_ADDR);     /* "FPI Transaction ID Set 0 Configuration" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_BMU_H_ (block "BMU") */


