/* (c) HighTec EDV-Systeme GmbH */

/* block "CCU61" of TriCore TC1791 (42 SFRs) */

#include <tc1791/ccu61/addr.h>

#include <tc1791/ccu61/masks.h>
#include <tc1791/ccu60-63/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/ccu61/types.h>
#include <tc1791/ccu60-63/sharetypes.h>

#ifndef _HAVE_TRICORE_CCU61_H_
#define _HAVE_TRICORE_CCU61_H_

#include <tricore-abs-noabs.h>

SFR_ABS (CCU61_CC60R, CCUn_CCmR_t, CCU61_CC60R_ADDR); /* "Capture/Compare Register for Channel CC60" */
SFR_ABS (CCU61_CC60SR, CCUn_CCmSR_t, CCU61_CC60SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC60" */
SFR_ABS (CCU61_CC61R, CCUn_CCmR_t, CCU61_CC61R_ADDR); /* "Capture/Compare Register for Channel CC61" */
SFR_ABS (CCU61_CC61SR, CCUn_CCmSR_t, CCU61_CC61SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC61" */
SFR_ABS (CCU61_CC62R, CCUn_CCmR_t, CCU61_CC62R_ADDR); /* "Capture/Compare Register for Channel CC62" */
SFR_ABS (CCU61_CC62SR, CCUn_CCmSR_t, CCU61_CC62SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC62" */
SFR_ABS (CCU61_CC63R, CCUn_CCmR_t, CCU61_CC63R_ADDR); /* "Compare Register for T13" */
SFR_ABS (CCU61_CC63SR, CCUn_CCmSR_t, CCU61_CC63SR_ADDR); /* "Compare Shadow Register for T13" */
SFR_ABS (CCU61_CMPMODIF, CCUn_CMPMODIF_t, CCU61_CMPMODIF_ADDR); /* "Compare State Modification Register" */
SFR_ABS (CCU61_CMPSTAT, CCUn_CMPSTAT_t, CCU61_CMPSTAT_ADDR); /* "Compare State Register" */
SFR_ABS (CCU61_ID, CCUn_ID_t, CCU61_ID_ADDR);     /* "Module Identification Register" */
SFR_ABS (CCU61_IEN, CCUn_IEN_t, CCU61_IEN_ADDR);  /* "Interrupt Enable Register" */
SFR_ABS (CCU61_IMON, CCUn_IMON_t, CCU61_IMON_ADDR); /* "Input Monitoring Register" */
SFR_ABS (CCU61_INP, CCUn_INP_t, CCU61_INP_ADDR);  /* "Interrupt Node Pointer Register" */
SFR_ABS (CCU61_IS, CCUn_IS_t, CCU61_IS_ADDR);     /* "Interrupt Status Register" */
SFR_ABS (CCU61_ISR, CCUn_ISR_t, CCU61_ISR_ADDR);  /* "Interrupt Status Reset Register" */
SFR_ABS (CCU61_ISS, CCUn_ISS_t, CCU61_ISS_ADDR);  /* "Interrupt Status Set Register" */
SFR_ABS (CCU61_KSCFG, CCUn_KSCFG_t, CCU61_KSCFG_ADDR); /* "Kernel State Configuration Register" */
SFR_ABS (CCU61_KSCSR, CCUn_KSCSR_t, CCU61_KSCSR_ADDR); /* "Kernel State Control Sensitivity Register" */
SFR_ABS (CCU61_LI, CCUn_LI_t, CCU61_LI_ADDR);     /* "Lost Indicator Register" */
SFR_ABS (CCU61_MCFG, CCUn_MCFG_t, CCU61_MCFG_ADDR); /* "Module Configuration Register" */
SFR_ABS (CCU61_MCMCTR, CCUn_MCMCTR_t, CCU61_MCMCTR_ADDR); /* "Multi-Channel Mode Control Register" */
SFR_ABS (CCU61_MCMOUT, CCUn_MCMOUT_t, CCU61_MCMOUT_ADDR); /* "Multi-Channel Mode Output Register" */
SFR_ABS (CCU61_MCMOUTS, CCUn_MCMOUTS_t, CCU61_MCMOUTS_ADDR); /* "Multi-Channel Mode Output Shadow Register" */
SFR_ABS (CCU61_MODCTR, CCUn_MODCTR_t, CCU61_MODCTR_ADDR); /* "Modulation Control Register" */
SFR_ABS (CCU61_PISEL0, CCUn_PISEL0_t, CCU61_PISEL0_ADDR); /* "Port Input Select Register 0" */
SFR_ABS (CCU61_PISEL2, CCUn_PISEL2_t, CCU61_PISEL2_ADDR); /* "Port Input Select Register 2" */
SFR_ABS (CCU61_PSLR, CCUn_PSLR_t, CCU61_PSLR_ADDR); /* "Passive State Level Register" */
SFR_ABS (CCU61_SRC0, CCUn_SRCm_t, CCU61_SRC0_ADDR); /* "CCU61 Service Request Control Register" */
SFR_ABS (CCU61_SRC1, CCUn_SRCm_t, CCU61_SRC1_ADDR); /* "CCU61 Service Request Control Register" */
SFR_ABS (CCU61_SRC2, CCUn_SRCm_t, CCU61_SRC2_ADDR); /* "CCU61 Service Request Control Register" */
SFR_ABS (CCU61_SRC3, CCUn_SRCm_t, CCU61_SRC3_ADDR); /* "CCU61 Service Request Control Register" */
SFR_ABS (CCU61_T12, CCUn_T12_t, CCU61_T12_ADDR);  /* "Timer T12 Counter Register" */
SFR_ABS (CCU61_T12DTC, CCUn_T12DTC_t, CCU61_T12DTC_ADDR); /* "Dead-Time Control Register for Timer12" */
SFR_ABS (CCU61_T12MSEL, CCUn_T12MSEL_t, CCU61_T12MSEL_ADDR); /* "T12 Mode Select Register" */
SFR_ABS (CCU61_T12PR, CCUn_T12PR_t, CCU61_T12PR_ADDR); /* "Timer 12 Period Register" */
SFR_ABS (CCU61_T13, CCUn_T13_t, CCU61_T13_ADDR);  /* "Timer T13 Counter Register" */
SFR_ABS (CCU61_T13PR, CCUn_T13PR_t, CCU61_T13PR_ADDR); /* "Timer 13 Period Register" */
SFR_ABS (CCU61_TCTR0, CCUn_TCTR0_t, CCU61_TCTR0_ADDR); /* "Timer Control Register 0" */
SFR_ABS (CCU61_TCTR2, CCUn_TCTR2_t, CCU61_TCTR2_ADDR); /* "Timer Control Register 2" */
SFR_ABS (CCU61_TCTR4, CCUn_TCTR4_t, CCU61_TCTR4_ADDR); /* "Timer Control Register 4" */
SFR_ABS (CCU61_TRPCTR, CCUn_TRPCTR_t, CCU61_TRPCTR_ADDR); /* "Trap Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CCU61_H_ (block "CCU61") */


