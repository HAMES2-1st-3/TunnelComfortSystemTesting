/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include "Driver_Adc.h"

/***********************************************************************/
/*Define*/ 
/***********************************************************************/


/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/


/***********************************************************************/
/*Static Function Prototype*/ 
/***********************************************************************/
static void Driver_Adc0_Init(void);


/***********************************************************************/
/*Variable*/ 
/***********************************************************************/
App_VadcAutoScan g_VadcAutoScan;
IfxVadc_Adc_ChannelConfig adcChannelConfig[5];
IfxVadc_Adc_Channel       adcChannel[5];
volatile uint32_t adcDataResult[5] = {0u,};

volatile uint32_t u32nuAdcCnt = 0u;

/***********************************************************************/
/*Function*/ 
/***********************************************************************/
IFX_INTERRUPT(ADC_G0SR0IntHandler, 0, 80u);

void ADC_G0SR0IntHandler(void)
{
    uint32_t    chnIx;  
    Ifx_VADC_RES conversionResult; /* wait for valid result */

    IfxCpu_enableInterrupts();   

    u32nuAdcCnt++;

    /* check results */
    for (chnIx = 0u; chnIx < 5u; ++chnIx)
    {
         conversionResult = IfxVadc_Adc_getResult(&adcChannel[chnIx]);
         adcDataResult[chnIx] = conversionResult.B.RESULT;
    }    
}


static void Driver_Adc0_Init(void)
{
    uint32_t    chnIx;

    /* VADC Configuration */

    /* create configuration */
    IfxVadc_Adc_Config adcConfig;
    IfxVadc_Adc_initModuleConfig(&adcConfig, &MODULE_VADC);

    /* initialize module */
    IfxVadc_Adc_initModule(&g_VadcAutoScan.vadc, &adcConfig);

    /* create group config */
    IfxVadc_Adc_GroupConfig adcGroupConfig;
    IfxVadc_Adc_initGroupConfig(&adcGroupConfig, &g_VadcAutoScan.vadc);

    /* with group 0 */
    adcGroupConfig.groupId = IfxVadc_GroupId_0;
    adcGroupConfig.master  = adcGroupConfig.groupId;

    /* enable scan source */
    adcGroupConfig.arbiter.requestSlotScanEnabled = TRUE;

    /* enable auto scan */
    adcGroupConfig.scanRequest.autoscanEnabled = FALSE;

    /* enable all gates in "always" mode (no edge detection) */
    adcGroupConfig.scanRequest.triggerConfig.gatingMode = IfxVadc_GatingMode_always;

    /* initialize the group */
    /*IfxVadc_Adc_Group adcGroup;*/    //declared globally
    IfxVadc_Adc_initGroup(&g_VadcAutoScan.adcGroup, &adcGroupConfig);

    /*channel init*/
    for (chnIx = 0; chnIx < 5; ++chnIx)
    {
        IfxVadc_Adc_initChannelConfig(&adcChannelConfig[chnIx], &g_VadcAutoScan.adcGroup);

        adcChannelConfig[chnIx].channelId      = (IfxVadc_ChannelId)(chnIx);
        adcChannelConfig[chnIx].resultRegister = (IfxVadc_ChannelResult)(chnIx);  /* use dedicated result register */
        adcChannelConfig[chnIx].resultSrcNr = IfxVadc_SrcNr_group0;
        /* initialize the channel */
        IfxVadc_Adc_initChannel(&adcChannel[chnIx], &adcChannelConfig[chnIx]);

        /* add to scan */
        unsigned channels = (1 << adcChannelConfig[chnIx].channelId);
        unsigned mask     = channels;
        IfxVadc_Adc_setScan(&g_VadcAutoScan.adcGroup, channels, mask);
    }    

    /*interrupt isr setting*/
    IfxVadc_enableServiceRequest(g_VadcAutoScan.adcGroup.group, IfxVadc_ChannelResult_4); 

    /*ADC SRC Setting*/
    SRC_VADCG0SR0.B.SRPN = 80u;
    SRC_VADCG0SR0.B.TOS = 0u;
    SRC_VADCG0SR0.B.SRE = 1u;
}



void Driver_Adc_Init(void)
{
    /*ADC0 Converter Init*/
    Driver_Adc0_Init();
}

void Driver_Adc0_ConvStart(void)
{
    /* start autoscan */
    IfxVadc_Adc_startScan(&g_VadcAutoScan.adcGroup);
}

void Driver_Adc0_DataObtain(void)
{
    uint32_t    chnIx;  
    Ifx_VADC_RES conversionResult; /* wait for valid result */

    /* check results */
    for (chnIx = 0u; chnIx < 5u; ++chnIx)
    {
        do
        {
            conversionResult = IfxVadc_Adc_getResult(&adcChannel[chnIx]);
        } while (!conversionResult.B.VF);

        adcDataResult[chnIx] = conversionResult.B.RESULT;
    }
}

