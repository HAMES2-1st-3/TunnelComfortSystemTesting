/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include "Driver_Asc.h"
#include "Driver_Adc.h"

/***********************************************************************/
/*Define*/ 
/***********************************************************************/
#define ISR_PRIORITY_ASC_0_TX       53
#define ISR_PRIORITY_ASC_0_RX       52
#define ISR_PRIORITY_ASC_0_EX       51

/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/


/***********************************************************************/
/*Static Function Prototype*/ 
/***********************************************************************/


/***********************************************************************/
/*Variable*/ 
/***********************************************************************/
App_AsclinAsc g_AsclinAsc; /**< \brief Demo information */


/***********************************************************************/
/*Function*/ 
/***********************************************************************/
IFX_INTERRUPT(ASC_Tx0IntHandler, 0, ISR_PRIORITY_ASC_0_TX);
IFX_INTERRUPT(ASC_Rx0IntHandler, 0, ISR_PRIORITY_ASC_0_RX);
IFX_INTERRUPT(ASC_Err0IntHandler, 0, ISR_PRIORITY_ASC_0_EX);

void ASC_Tx0IntHandler(void)
{
    IfxAsclin_Asc_isrTransmit(&g_AsclinAsc.drivers.asc0);
}

void ASC_Rx0IntHandler(void)
{
    IfxAsclin_Asc_isrReceive(&g_AsclinAsc.drivers.asc0);
    IfxAsclin_Asc_read(&g_AsclinAsc.drivers.asc0, g_AsclinAsc.rxData, &g_AsclinAsc.count, TIME_INFINITE);    
    
    //g_AsclinAsc.txData[0] = g_AsclinAsc.rxData[0];
    //IfxAsclin_Asc_write(&g_AsclinAsc.drivers.asc0, g_AsclinAsc.txData, &g_AsclinAsc.count, TIME_INFINITE);
}

void ASC_Err0IntHandler(void)
{
    IfxAsclin_Asc_isrError(&g_AsclinAsc.drivers.asc0);
}


static void Driver_Asc0_Init(void)
{
    /* create module config */
    IfxAsclin_Asc_Config ascConfig;
    IfxAsclin_Asc_initModuleConfig(&ascConfig, &MODULE_ASCLIN0);

    /* set the desired baudrate */
    ascConfig.baudrate.prescaler    = 1;
    ascConfig.baudrate.baudrate     = 9600; /* FDR values will be calculated in initModule */
    ascConfig.baudrate.oversampling = IfxAsclin_OversamplingFactor_4;

    /* ISR priorities and interrupt target */
    ascConfig.interrupt.txPriority    = ISR_PRIORITY_ASC_0_TX;
    ascConfig.interrupt.rxPriority    = ISR_PRIORITY_ASC_0_RX;
    ascConfig.interrupt.erPriority    = ISR_PRIORITY_ASC_0_EX;
    ascConfig.interrupt.typeOfService = (IfxSrc_Tos)IfxCpu_getCoreIndex();

    /* FIFO configuration */
    ascConfig.txBuffer     = g_AsclinAsc.ascBuffer.tx;
    ascConfig.txBufferSize = ASC_TX_BUFFER_SIZE;

    ascConfig.rxBuffer     = g_AsclinAsc.ascBuffer.rx;
    ascConfig.rxBufferSize = ASC_RX_BUFFER_SIZE;

    /* pin configuration */    
    const IfxAsclin_Asc_Pins pins = {
        NULL_PTR,                     IfxPort_InputMode_pullUp,        // CTS pin not used
        &IfxAsclin0_RXB_P15_3_IN, IfxPort_InputMode_pullUp,        // Rx pin
        NULL_PTR,                     IfxPort_OutputMode_pushPull,     //RTS pin not used
        &IfxAsclin0_TX_P15_2_OUT, IfxPort_OutputMode_pushPull,     // Tx pin
        IfxPort_PadDriver_cmosAutomotiveSpeed1
    };     

    ascConfig.pins = &pins;

    /* initialize module */
    IfxAsclin_Asc_initModule(&g_AsclinAsc.drivers.asc0, &ascConfig);

    g_AsclinAsc.count = 2;    
}

void Driver_Asc_Init(void)
{
    Driver_Asc0_Init();
}

void Driver_Asc0_TxTest(void)
{   
    uint16_t u16nuTemp = 0u;
    
    g_AsclinAsc.count = 2;

    u16nuTemp = (uint16_t)adcDataResult[0];
    
    g_AsclinAsc.txData[0] = (uint8_t)((u16nuTemp & 0xFF00) >> 8);
    g_AsclinAsc.txData[1] = (uint8_t)(u16nuTemp & 0x00FF);

    /* Transmit data */
    IfxAsclin_Asc_write(&g_AsclinAsc.drivers.asc0, g_AsclinAsc.txData, &g_AsclinAsc.count, TIME_INFINITE);
}

