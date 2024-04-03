/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include "Driver_Stm.h"
#include "IfxPort.h"
#include "IfxPort_PinMap.h"

/***********************************************************************/
/*Define*/ 
/***********************************************************************/

/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/
typedef struct
{
    Ifx_STM             *stmSfr;            /**< \brief Pointer to Stm register base */
    IfxStm_CompareConfig stmConfig;         /**< \brief Stm Configuration structure */
    volatile uint8       LedBlink;          /**< \brief LED state variable */
    volatile uint32      counter;           /**< \brief interrupt counter */
} App_Stm;


/***********************************************************************/
/*Static Function Prototype*/ 
/***********************************************************************/


/***********************************************************************/
/*Variable*/ 
/***********************************************************************/
App_Stm g_Stm; /**< \brief Stm global data */
uint32_t u32nuCounter1ms = 0u;
SchedulingFlag stSchedulingInfo;

/***********************************************************************/
/*Function*/ 
/***********************************************************************/
IFX_INTERRUPT(STM_Int0Handler, 0, 100);

void STM_Int0Handler(void)
{
    IfxCpu_enableInterrupts();    
    
    IfxStm_clearCompareFlag(g_Stm.stmSfr, g_Stm.stmConfig.comparator);
    IfxStm_increaseCompare(g_Stm.stmSfr, g_Stm.stmConfig.comparator, 100000u);

    u32nuCounter1ms++;


    if((u32nuCounter1ms % 1) == 0u)
    {
        stSchedulingInfo.u8nuScheduling1msFlag = 1u;
    }  

    if((u32nuCounter1ms % 10) == 0u)
    {
        stSchedulingInfo.u8nuScheduling10msFlag = 1u;
    }

    if((u32nuCounter1ms % 100) == 0u)
    {
        stSchedulingInfo.u8nuScheduling100msFlag = 1u;
    }    
}

void Driver_Stm_Init(void)
{
    /* disable interrupts */
    boolean interruptState = IfxCpu_disableInterrupts();

    IfxStm_enableOcdsSuspend(&MODULE_STM0);

    g_Stm.stmSfr = &MODULE_STM0;
    IfxStm_initCompareConfig(&g_Stm.stmConfig);

    g_Stm.stmConfig.triggerPriority = 100u;
    g_Stm.stmConfig.typeOfService   = IfxSrc_Tos_cpu0;
    g_Stm.stmConfig.ticks           = 100000u;

    IfxStm_initCompare(g_Stm.stmSfr, &g_Stm.stmConfig);

    /* enable interrupts again */
    IfxCpu_restoreInterrupts(interruptState);
}

