/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1797_STM_STRUCTS_H_
#define _TC1797_STM_STRUCTS_H_
/*
   TriCore TC1797
   Some struct definitions for conveniance
*/

#include <tc1797/stm.h>
#ifndef STM_BASE
#define STM_BASE 0xf0000200
#endif /* STM_BASE */


typedef struct
{
    STM_CLC_t       CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    STM_ID_t        ID;                 /* 0x8 */
    unsigned int    reserved3[0x1];     /* 0xc */
    STM_TIM0_t      TIM0;               /* 0x10 */
    STM_TIM1_t      TIM1;               /* 0x14 */
    STM_TIM2_t      TIM2;               /* 0x18 */
    STM_TIM3_t      TIM3;               /* 0x1c */
    STM_TIM4_t      TIM4;               /* 0x20 */
    STM_TIM5_t      TIM5;               /* 0x24 */
    STM_TIM6_t      TIM6;               /* 0x28 */
    STM_CAP_t       CAP;                /* 0x2c */
    STM_CMPm_t      CMP0;               /* 0x30 */
    STM_CMPm_t      CMP1;               /* 0x34 */
    STM_CMCON_t     CMCON;              /* 0x38 */
    STM_ICR_t       ICR;                /* 0x3c */
    STM_ISRR_t      ISRR;               /* 0x40 */
    unsigned int    reserved17[0x2d];   /* 0x44 */
    STM_SRCm_t      SRC1;               /* 0xf8 */
    STM_SRCm_t      SRC0;               /* 0xfc */
} STM_t;

#endif /* _TC1797_STM_STRUCTS_H_ */
