/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "STM" of TriCore TC1796B (17 SFRs) */

#include <tc1796b/stm/addr.h>

#include <tc1796b/stm/masks.h>
#include <tc1796b/stm/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/stm/types.h>
#include <tc1796b/stm/sharetypes.h>

#ifndef _HAVE_TRICORE_STM_H_
#define _HAVE_TRICORE_STM_H_

#include <tricore-abs-noabs.h>

SFR_ABS (STM_CAP, STM_CAP_t, STM_CAP_ADDR);       /* "STM Timer Capture Register" */
SFR_ABS (STM_CLC, STM_CLC_t, STM_CLC_ADDR);       /* "STM Clock Control Register" */
SFR_ABS (STM_CMCON, STM_CMCON_t, STM_CMCON_ADDR); /* "STM Compare Match Control Register" */
SFR_ABS (STM_CMP0, STM_CMPm_t, STM_CMP0_ADDR);    /* "STM Compare Register 1" */
SFR_ABS (STM_CMP1, STM_CMPm_t, STM_CMP1_ADDR);    /* "STM Compare Register 1" */
SFR_ABS (STM_ICR, STM_ICR_t, STM_ICR_ADDR);       /* "STM Interrupt Control Register" */
SFR_ABS (STM_ID, STM_ID_t, STM_ID_ADDR);          /* "STM Module Identification Register" */
SFR_ABS (STM_ISRR, STM_ISRR_t, STM_ISRR_ADDR);    /* "STM Interrupt Set/Reset Register" */
SFR_ABS (STM_SRC0, STM_SRCm_t, STM_SRC0_ADDR);    /* "STM Service Request Control Register 0" */
SFR_ABS (STM_SRC1, STM_SRCm_t, STM_SRC1_ADDR);    /* "STM Service Request Control Register 1" */
SFR_ABS (STM_TIM0, STM_TIM0_t, STM_TIM0_ADDR);    /* "STM Timer Register 0" */
SFR_ABS (STM_TIM1, STM_TIM1_t, STM_TIM1_ADDR);    /* "STM Timer Register 1" */
SFR_ABS (STM_TIM2, STM_TIM2_t, STM_TIM2_ADDR);    /* "STM Timer Register 2" */
SFR_ABS (STM_TIM3, STM_TIM3_t, STM_TIM3_ADDR);    /* "STM Timer Register 3" */
SFR_ABS (STM_TIM4, STM_TIM4_t, STM_TIM4_ADDR);    /* "STM Timer Register 4" */
SFR_ABS (STM_TIM5, STM_TIM5_t, STM_TIM5_ADDR);    /* "STM Timer Register 5" */
SFR_ABS (STM_TIM6, STM_TIM6_t, STM_TIM6_ADDR);    /* "STM Timer Register 6" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_STM_H_ (block "STM") */


