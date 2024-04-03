/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include "Driver_Gtm.h"
#include "IfxCpu.h"


/***********************************************************************/
/*Define*/ 
/***********************************************************************/

/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/



/***********************************************************************/
/*Static Function Prototype*/ 
/***********************************************************************/
static void Driver_Tom0_Init(void);


/***********************************************************************/
/*Variable*/ 
/***********************************************************************/
App_GtmTomTimer g_GtmTomTimer; /**< \brief Demo information */

/***********************************************************************/
/*Function*/ 
/***********************************************************************/
IFX_INTERRUPT(GTM_Tom0IntHandler, 0, 150u);

void GTM_Tom0IntHandler(void)
{
    IfxCpu_enableInterrupts();

    IfxGtm_Tom_Timer_acknowledgeTimerIrq(&g_GtmTomTimer.drivers.timerOneMs);
    g_GtmTomTimer.isrCounter.slotOneMs++;
}


static void Driver_Tom0_Init(void)
{
    {   /* GTM TOM configuration */
        IfxGtm_Tom_Timer_Config timerConfig;
        IfxGtm_Tom_Timer_initConfig(&timerConfig, &MODULE_GTM);
        timerConfig.base.frequency       = 100;
        timerConfig.base.isrPriority     = 0u;
        timerConfig.base.minResolution   = (1.0 / timerConfig.base.frequency) / 1000;
        timerConfig.base.trigger.enabled = FALSE;
        timerConfig.tom                  = IfxGtm_Tom_0;
        timerConfig.timerChannel         = IfxGtm_Tom_Ch_0;
        timerConfig.clock                = IfxGtm_Tom_Ch_ClkSrc_cmuFxclk1;

        timerConfig.triggerOut                      = &IfxGtm_TOM0_0_TOUT26_P33_4_OUT;
        timerConfig.base.trigger.enabled            = TRUE;
        timerConfig.base.trigger.outputEnabled      = TRUE;   
        timerConfig.base.trigger.triggerPoint       = 0u;   /*Default 0 duty*/    
        timerConfig.base.trigger.risingEdgeAtPeriod = TRUE;
        
        IfxGtm_Tom_Timer_init(&g_GtmTomTimer.drivers.timerOneMs, &timerConfig);
 

        IfxGtm_Tom_Timer_run(&g_GtmTomTimer.drivers.timerOneMs);
    }
}


void Driver_Gtm_Init(void)
{
    /* disable interrupts */
    boolean  interruptState = IfxCpu_disableInterrupts();

    /** - GTM clocks */
    Ifx_GTM *gtm = &MODULE_GTM;
    g_GtmTomTimer.info.gtmFreq = IfxGtm_Cmu_getModuleFrequency(gtm);
    IfxGtm_enable(gtm);

    /* Set the global clock frequencies */
    IfxGtm_Cmu_setGclkFrequency(gtm, g_GtmTomTimer.info.gtmFreq);
    g_GtmTomTimer.info.gtmGclkFreq = IfxGtm_Cmu_getGclkFrequency(gtm);

    /** - Initialise the GTM part */
    Driver_Tom0_Init();

    /* enable interrupts again */
    IfxCpu_restoreInterrupts(interruptState);

    IfxGtm_Cmu_enableClocks(gtm, IFXGTM_CMU_CLKEN_FXCLK | IFXGTM_CMU_CLKEN_CLK0);
}

void Driver_Gtm_Tom0Test(void)
{
    Ifx_TimerValue triggerPoint = 0u;
    static float32_t fDuty = 0.5f;
 
    triggerPoint = (uint32_t)(fDuty * (100000000.0f/16.0f/100.0f));
    IfxGtm_Tom_Timer_disableUpdate(&g_GtmTomTimer.drivers.timerOneMs);
    IfxGtm_Tom_Timer_setTrigger(&g_GtmTomTimer.drivers.timerOneMs, triggerPoint);
    IfxGtm_Tom_Timer_applyUpdate(&g_GtmTomTimer.drivers.timerOneMs);
}

