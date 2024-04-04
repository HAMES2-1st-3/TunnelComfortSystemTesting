/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CCU60" of TriCore TC1387 (43 SFRs) */

#include <tc1387/ccu60/addr.h>

#include <tc1387/ccu60/masks.h>
#include <tc1387/ccu60_ccu61_ccu62_ccu63/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1387/ccu60/types.h>
#include <tc1387/ccu60_ccu61_ccu62_ccu63/sharetypes.h>

#ifndef _HAVE_TRICORE_CCU60_H_
#define _HAVE_TRICORE_CCU60_H_

#include <tricore-abs-noabs.h>

SFR_ABS (CCU60_CC60R, CCUn_CCmR_t, CCU60_CC60R_ADDR); /* "Capture/Compare Register for Channel CC60" */
SFR_ABS (CCU60_CC60SR, CCUn_CCmSR_t, CCU60_CC60SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC60" */
SFR_ABS (CCU60_CC61R, CCUn_CCmR_t, CCU60_CC61R_ADDR); /* "Capture/Compare Register for Channel CC61" */
SFR_ABS (CCU60_CC61SR, CCUn_CCmSR_t, CCU60_CC61SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC61" */
SFR_ABS (CCU60_CC62R, CCUn_CCmR_t, CCU60_CC62R_ADDR); /* "Capture/Compare Register for Channel CC62" */
SFR_ABS (CCU60_CC62SR, CCUn_CCmSR_t, CCU60_CC62SR_ADDR); /* "Capture/Compare Shadow Reg. for Channel CC62" */
SFR_ABS (CCU60_CC63R, CCUn_CCmR_t, CCU60_CC63R_ADDR); /* "Compare Register for T13" */
SFR_ABS (CCU60_CC63SR, CCUn_CCmSR_t, CCU60_CC63SR_ADDR); /* "Compare Shadow Register for T13" */
SFR_ABS (CCU60_CMPMODIF, CCUn_CMPMODIF_t, CCU60_CMPMODIF_ADDR); /* "Compare State Modification Register" */
SFR_ABS (CCU60_CMPSTAT, CCUn_CMPSTAT_t, CCU60_CMPSTAT_ADDR); /* "Compare State Register" */
SFR_ABS (CCU60_ID, CCUn_ID_t, CCU60_ID_ADDR);     /* "Module Identification Register" */
SFR_ABS (CCU60_IEN, CCUn_IEN_t, CCU60_IEN_ADDR);  /* "Interrupt Enable Register" */
SFR_ABS (CCU60_IMON, CCUn_IMON_t, CCU60_IMON_ADDR); /* "Input Monitoring Register" */
SFR_ABS (CCU60_INP, CCUn_INP_t, CCU60_INP_ADDR);  /* "Interrupt Node Pointer Register" */
SFR_ABS (CCU60_IS, CCUn_IS_t, CCU60_IS_ADDR);     /* "Interrupt Status Register" */
SFR_ABS (CCU60_ISR, CCUn_ISR_t, CCU60_ISR_ADDR);  /* "Interrupt Status Reset Register" */
SFR_ABS (CCU60_ISS, CCUn_ISS_t, CCU60_ISS_ADDR);  /* "Interrupt Status Set Register" */
SFR_ABS (CCU60_KSCFG, CCUn_KSCFG_t, CCU60_KSCFG_ADDR); /* "Kernel State Configuration Register" */
SFR_ABS (CCU60_KSCSR, CCUn_KSCSR_t, CCU60_KSCSR_ADDR); /* "Kernel State Control Sensitivity Register" */
SFR_ABS (CCU60_LI, CCUn_LI_t, CCU60_LI_ADDR);     /* "Lost Indicator Register" */
SFR_ABS (CCU60_MCFG, CCUn_MCFG_t, CCU60_MCFG_ADDR); /* "Module Configuration Register" */
SFR_ABS (CCU60_MCMCTR, CCUn_MCMCTR_t, CCU60_MCMCTR_ADDR); /* "Multi-Channel Mode Control Register" */
SFR_ABS (CCU60_MCMOUT, CCUn_MCMOUT_t, CCU60_MCMOUT_ADDR); /* "Multi-Channel Mode Output Register" */
SFR_ABS (CCU60_MCMOUTS, CCUn_MCMOUTS_t, CCU60_MCMOUTS_ADDR); /* "Multi-Channel Mode Output Shadow Register" */
SFR_ABS (CCU60_MODCTR, CCUn_MODCTR_t, CCU60_MODCTR_ADDR); /* "Modulation Control Register" */
SFR_ABS (CCU60_MOSEL, CCUn_MOSEL_t, CCU60_MOSEL_ADDR); /* "CCU60 Module Output Select Register" */
SFR_ABS (CCU60_PISEL0, CCUn_PISEL0_t, CCU60_PISEL0_ADDR); /* "Port Input Select Register 0" */
SFR_ABS (CCU60_PISEL2, CCUn_PISEL2_t, CCU60_PISEL2_ADDR); /* "Port Input Select Register 2" */
SFR_ABS (CCU60_PSLR, CCUn_PSLR_t, CCU60_PSLR_ADDR); /* "Passive State Level Register" */
SFR_ABS (CCU60_SRC0, CCUn_SRCm_t, CCU60_SRC0_ADDR); /* "CCU60 Service Request Control Register" */
SFR_ABS (CCU60_SRC1, CCUn_SRCm_t, CCU60_SRC1_ADDR); /* "CCU60 Service Request Control Register" */
SFR_ABS (CCU60_SRC2, CCUn_SRCm_t, CCU60_SRC2_ADDR); /* "CCU60 Service Request Control Register" */
SFR_ABS (CCU60_SRC3, CCUn_SRCm_t, CCU60_SRC3_ADDR); /* "CCU60 Service Request Control Register" */
SFR_ABS (CCU60_T12, CCUn_T12_t, CCU60_T12_ADDR);  /* "Timer T12 Counter Register" */
SFR_ABS (CCU60_T12DTC, CCUn_T12DTC_t, CCU60_T12DTC_ADDR); /* "Dead-Time Control Register for Timer12" */
SFR_ABS (CCU60_T12MSEL, CCUn_T12MSEL_t, CCU60_T12MSEL_ADDR); /* "T12 Mode Select Register" */
SFR_ABS (CCU60_T12PR, CCUn_T12PR_t, CCU60_T12PR_ADDR); /* "Timer 12 Period Register" */
SFR_ABS (CCU60_T13, CCUn_T13_t, CCU60_T13_ADDR);  /* "Timer T13 Counter Register" */
SFR_ABS (CCU60_T13PR, CCUn_T13PR_t, CCU60_T13PR_ADDR); /* "Timer 13 Period Register" */
SFR_ABS (CCU60_TCTR0, CCUn_TCTR0_t, CCU60_TCTR0_ADDR); /* "Timer Control Register 0" */
SFR_ABS (CCU60_TCTR2, CCUn_TCTR2_t, CCU60_TCTR2_ADDR); /* "Timer Control Register 2" */
SFR_ABS (CCU60_TCTR4, CCUn_TCTR4_t, CCU60_TCTR4_ADDR); /* "Timer Control Register 4" */
SFR_ABS (CCU60_TRPCTR, CCUn_TRPCTR_t, CCU60_TRPCTR_ADDR); /* "Trap Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CCU60_H_ (block "CCU60") */


