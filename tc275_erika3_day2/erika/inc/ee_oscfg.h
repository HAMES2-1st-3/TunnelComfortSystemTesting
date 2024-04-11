/* ###*B*###
 *
 * ERIKA Enterprise - a tiny RTOS for small microcontrollers
 * 
 * Copyright (C) 2002-2018 Evidence Srl
 * 
 * This file is part of ERIKA Enterprise.
 * 
 * See LICENSE file.
 *
 * ###*E*### */

/***************************************************************************
 *
 * This file is generated by RT-Druid.
 * Please do not modify it.
 *
 **************************************************************************/

#ifndef OS_EE_RTD_OSCFG_H
#define OS_EE_RTD_OSCFG_H


/***************************************************************************
 *
 * Version Check
 *
 **************************************************************************/
#define OS_EE_RTD_GEN_VERSION 12345


/***************************************************************************
 *
 * Common defines
 *
 **************************************************************************/
#define OSEE_SINGLECORE
#define OsNumberOfCores         (1U)
#define OSEE_CORE_ID_VALID_MASK ((1U << 0))



/***************************************************************************
 *
 * User options
 *
 **************************************************************************/
#define OSEE_DEBUG
#define OS_EE_APPL_BUILD_DEBUG
#define OS_EE_BUILD_DEBUG

/***************************************************************************
 *
 * Automatic options
 *
 **************************************************************************/
#define OSEE_ARCH_TRICORE
#define OSEE_CPU_CLOCK (200000000U)
#define OSEE_HAS_ALARMS
#define OSEE_HAS_AUTOSTART_TRIGGER
#define OSEE_HAS_COUNTERS
#define OSEE_HAS_EVENTS
#define OSEE_HAS_RESOURCES
#define OSEE_HAS_STARTUPHOOK
#define OSEE_HAS_SYSTEM_TIMER
#define OSEE_ISR2_MAX_HW_ASM_PRIO 3
#define OSEE_ISR2_MAX_PRIO (130U)
#define OSEE_MULTI_STACK
#define OSEE_OC_ECC1
#define OSEE_SINGLE_ACTIVATION
#define OSEE_TC_CORE0_ISR_MAX_PRIO  (3U)
#define OSEE_TC_TC27X
#define OS_EE_GCC
#define OS_EE_KERNEL_OSEK
#define OS_EE_RTD_BUILD_ENV_CYGWIN


/***************************************************************************
 *
 * Automatic OS options
 *
 **************************************************************************/


#define OSMAXALLOWEDVALUE (2147483647U)
#define OSTICKSPERBASE    (1U)
#define OSMINCYCLE        (1U)
#define OSTICKDURATION    (1000000U)


/***************************************************************************
 *
 * ISR1 declaration
 *
 **************************************************************************/

/***************************************************************************
 *
 * ISR2 declaration
 *
 **************************************************************************/


#define OSEE_TC_CORE0_3_ISR_CAT (2U)
#define OSEE_TC_CORE0_3_ISR_TID 1

#define OSEE_TC_CORE0_CAN_RxInt0Handler_ISR_TID   (1U)
#define OSEE_TC_CORE0_CAN_RxInt0Handler_ISR_PRIO  (3U)


/***************************************************************************
 *
 * System Timer
 *
 **************************************************************************/
#define OSEE_SYSTEM_TIMER        (0U)
#define OSEE_SYSTEM_TIMER_DEVICE OSEE_TC_STM_SR0
#define OSEE_TC_CORE0_1_ISR_CAT (2U)
#define OSEE_TC_CORE0_1_ISR_TID 0

/***************************************************************************
 *
 * End
 *
 **************************************************************************/
#endif /* OS_EE_RTD_OSCFG_H */

