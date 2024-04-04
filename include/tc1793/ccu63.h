/* (c) HighTec EDV-Systeme GmbH */

/* block "CCU63" of TriCore TC1793 (42 SFRs) */

#include <tc1793/ccu63/addr.h>

#include <tc1793/ccu63/masks.h>
#include <tc1793/ccu60-63/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/ccu63/types.h>
#include <tc1793/ccu60-63/sharetypes.h>

#ifndef _HAVE_TRICORE_CCU63_H_
#define _HAVE_TRICORE_CCU63_H_

#include <tricore-abs-noabs.h>

SFR_ABS (CCU63_CC60R, CCUn_CCmR_t, CCU63_CC60R_ADDR); /* "Capture/Compare Register for Channel CC60" */
SFR_ABS (CCU63_CC60SR, CCUn_CCmSR_t, CCU63_CC60SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC60" */
SFR_ABS (CCU63_CC61R, CCUn_CCmR_t, CCU63_CC61R_ADDR); /* "Capture/Compare Register for Channel CC61" */
SFR_ABS (CCU63_CC61SR, CCUn_CCmSR_t, CCU63_CC61SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC61" */
SFR_ABS (CCU63_CC62R, CCUn_CCmR_t, CCU63_CC62R_ADDR); /* "Capture/Compare Register for Channel CC62" */
SFR_ABS (CCU63_CC62SR, CCUn_CCmSR_t, CCU63_CC62SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC62" */
SFR_ABS (CCU63_CC63R, CCUn_CCmR_t, CCU63_CC63R_ADDR); /* "Compare Register for T13" */
SFR_ABS (CCU63_CC63SR, CCUn_CCmSR_t, CCU63_CC63SR_ADDR); /* "Compare Shadow Register for T13" */
SFR_ABS (CCU63_CMPMODIF, CCUn_CMPMODIF_t, CCU63_CMPMODIF_ADDR); /* "Compare State Modification Register" */
SFR_ABS (CCU63_CMPSTAT, CCUn_CMPSTAT_t, CCU63_CMPSTAT_ADDR); /* "Compare State Register" */
SFR_ABS (CCU63_ID, CCUn_ID_t, CCU63_ID_ADDR);     /* "Module Identification Register" */
SFR_ABS (CCU63_IEN, CCUn_IEN_t, CCU63_IEN_ADDR);  /* "Interrupt Enable Register" */
SFR_ABS (CCU63_IMON, CCUn_IMON_t, CCU63_IMON_ADDR); /* "Input Monitoring Register" */
SFR_ABS (CCU63_INP, CCUn_INP_t, CCU63_INP_ADDR);  /* "Interrupt Node Pointer Register" */
SFR_ABS (CCU63_IS, CCUn_IS_t, CCU63_IS_ADDR);     /* "Interrupt Status Register" */
SFR_ABS (CCU63_ISR, CCUn_ISR_t, CCU63_ISR_ADDR);  /* "Interrupt Status Reset Register" */
SFR_ABS (CCU63_ISS, CCUn_ISS_t, CCU63_ISS_ADDR);  /* "Interrupt Status Set Register" */
SFR_ABS (CCU63_KSCFG, CCUn_KSCFG_t, CCU63_KSCFG_ADDR); /* "Kernel State Configuration Register" */
SFR_ABS (CCU63_KSCSR, CCUn_KSCSR_t, CCU63_KSCSR_ADDR); /* "Kernel State Control Sensitivity Register" */
SFR_ABS (CCU63_LI, CCUn_LI_t, CCU63_LI_ADDR);     /* "Lost Indicator Register" */
SFR_ABS (CCU63_MCFG, CCUn_MCFG_t, CCU63_MCFG_ADDR); /* "Module Configuration Register" */
SFR_ABS (CCU63_MCMCTR, CCUn_MCMCTR_t, CCU63_MCMCTR_ADDR); /* "Multi-Channel Mode Control Register" */
SFR_ABS (CCU63_MCMOUT, CCUn_MCMOUT_t, CCU63_MCMOUT_ADDR); /* "Multi-Channel Mode Output Register" */
SFR_ABS (CCU63_MCMOUTS, CCUn_MCMOUTS_t, CCU63_MCMOUTS_ADDR); /* "Multi-Channel Mode Output Shadow Register" */
SFR_ABS (CCU63_MODCTR, CCUn_MODCTR_t, CCU63_MODCTR_ADDR); /* "Modulation Control Register" */
SFR_ABS (CCU63_PISEL0, CCUn_PISEL0_t, CCU63_PISEL0_ADDR); /* "Port Input Select Register 0" */
SFR_ABS (CCU63_PISEL2, CCUn_PISEL2_t, CCU63_PISEL2_ADDR); /* "Port Input Select Register 2" */
SFR_ABS (CCU63_PSLR, CCUn_PSLR_t, CCU63_PSLR_ADDR); /* "Passive State Level Register" */
SFR_ABS (CCU63_SRC0, CCUn_SRCm_t, CCU63_SRC0_ADDR); /* "CCU63 Service Request Control Register" */
SFR_ABS (CCU63_SRC1, CCUn_SRCm_t, CCU63_SRC1_ADDR); /* "CCU63 Service Request Control Register" */
SFR_ABS (CCU63_SRC2, CCUn_SRCm_t, CCU63_SRC2_ADDR); /* "CCU63 Service Request Control Register" */
SFR_ABS (CCU63_SRC3, CCUn_SRCm_t, CCU63_SRC3_ADDR); /* "CCU63 Service Request Control Register" */
SFR_ABS (CCU63_T12, CCUn_T12_t, CCU63_T12_ADDR);  /* "Timer T12 Counter Register" */
SFR_ABS (CCU63_T12DTC, CCUn_T12DTC_t, CCU63_T12DTC_ADDR); /* "Dead-Time Control Register for Timer12" */
SFR_ABS (CCU63_T12MSEL, CCUn_T12MSEL_t, CCU63_T12MSEL_ADDR); /* "T12 Mode Select Register" */
SFR_ABS (CCU63_T12PR, CCUn_T12PR_t, CCU63_T12PR_ADDR); /* "Timer 12 Period Register" */
SFR_ABS (CCU63_T13, CCUn_T13_t, CCU63_T13_ADDR);  /* "Timer T13 Counter Register" */
SFR_ABS (CCU63_T13PR, CCUn_T13PR_t, CCU63_T13PR_ADDR); /* "Timer 13 Period Register" */
SFR_ABS (CCU63_TCTR0, CCUn_TCTR0_t, CCU63_TCTR0_ADDR); /* "Timer Control Register 0" */
SFR_ABS (CCU63_TCTR2, CCUn_TCTR2_t, CCU63_TCTR2_ADDR); /* "Timer Control Register 2" */
SFR_ABS (CCU63_TCTR4, CCUn_TCTR4_t, CCU63_TCTR4_ADDR); /* "Timer Control Register 4" */
SFR_ABS (CCU63_TRPCTR, CCUn_TRPCTR_t, CCU63_TRPCTR_ADDR); /* "Trap Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CCU63_H_ (block "CCU63") */


