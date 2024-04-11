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

#ifndef OSEE_RTD_DECLCFG_H
#define OSEE_RTD_DECLCFG_H

#if (defined(__cplusplus))
extern "C" {
#endif

/* This header file is supposed to be included only through collector headers
   (ee.h, ee_conf.h or ee_internal.h) */

/***************************************************************************
 *
 * Declare tasks
 *
 **************************************************************************/
DeclareTask(CAN_Tx);
DeclareTask(UART_Echo);
DeclareTask(DCMotor_Example);
DeclareTask(Timer_Example);
DeclareTask(Ultrasonic_Example);
DeclareTask(Buzzer_Example);
DeclareTask(TOF_Example);
DeclareTask(ADC_Example);
DeclareTask(OS_EE_Task_Init);
DeclareTask(Task_Motor);
DeclareTask(Task_AEB);
DeclareTask(Ctrl_Window);
DeclareTask(Ctrl_InAir);
DeclareTask(Ctrl_HLamp);
DeclareTask(Ctrl_Btn);


ISR2(CAN_RX_HND);


/***************************************************************************
 *
 * Declare Idle Hooks
 *
 **************************************************************************/


/***************************************************************************
 *
 * Alarms Callbacks
 *
 **************************************************************************/



#if (defined(__cplusplus))
}
#endif

/***************************************************************************
 *
 * End
 *
 **************************************************************************/
#endif /* OSEE_RTD_DECLCFG_H */

