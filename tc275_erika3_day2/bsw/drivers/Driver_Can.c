/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include "Driver_Can.h"
#include "ee.h"

/***********************************************************************/
/*Define*/ 
/***********************************************************************/


/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/


/***********************************************************************/
/*Static Function Prototype*/ 
/***********************************************************************/


/***********************************************************************/
/*Variable*/ 
/***********************************************************************/
//App_MulticanBasic g_MulticanBasic; /**< \brief Demo information */

Ecu1Can stEcu1Can;
uint32_t u32nuCanRxCnt=0;


/***********************************************************************/
/*Function*/
/***********************************************************************/
static void Driver_Can_EnrollObject(int32_t msgObjId,  uint32_t msgId, uint8_t frameType, uint8_t msgDlc,  uint32_t extendedFrame, IfxMultican_Can_MsgObj* pArrObjNum);
const uint32 dataLow  = 0x12340000;
const uint32 dataHigh = 0x9abc0000;
IfxMultican_Message stRxMsgData[10];


//#ifdef ECUBODY
uint16 isDark=0;
uint16 isInternal=0;
uint16 getisDark(void){
	return isDark;
}
uint16 getisInternal(void){
	return isInternal;
}
//#endif


ISR(CAN_RX_HND){
    IfxMultican_Status readStatus;
    IfxMultican_Status readStatus1;
    IfxMultican_Status readStatus2;

    IfxCpu_enableInterrupts();
//#ifdef ECUBODY
    readStatus = IfxMultican_Can_MsgObj_readMessage(&stEcu1Can.CanEcu1MsgRxObj[0], &stRxMsgData[0]); // 0x100: isInternal
    if(readStatus == IfxMultican_Status_newData){
    	isInternal = stRxMsgData[0].data[0];
    	ActivateTask(Ctrl_InAir);
    	ActivateTask(Ctrl_Window);
    }

    readStatus1 = IfxMultican_Can_MsgObj_readMessage(&stEcu1Can.CanEcu1MsgRxObj[1], &stRxMsgData[1]); // 0x200 : isDark
    if(readStatus1 == IfxMultican_Status_newData){
    	isDark = stRxMsgData[1].data[0];
    	ActivateTask(Ctrl_HLamp);
    }
}
/*
void CAN_RxInt0Handler(void){

    IfxMultican_Status readStatus;
    IfxMultican_Status readStatus1;
    IfxMultican_Status readStatus2;

    IfxCpu_enableInterrupts();
//#ifdef ECUBODY
    readStatus=IfxMultican_Can_MsgObj_readMessage(&stEcu1Can.CanEcu1MsgRxObj[0], &stRxMsgData[0]); // 0x100: isInternal
    if(readStatus==IfxMultican_Status_newData){
    	isInternal = stRxMsgData[0].data[0];
    	ActivateTask(Ctrl_InAir);
    	ActivateTask(Ctrl_Window);
    }

    readStatus1=IfxMultican_Can_MsgObj_readMessage(&stEcu1Can.CanEcu1MsgRxObj[1], &stRxMsgData[1]); // 0x200 : isDark
    if(readStatus1 == IfxMultican_Status_newData){
    	isDark = stRxMsgData[1].data[0];
    	ActivateTask(Ctrl_HLamp);
    }
//#else
//    readStatus2=IfxMultican_Can_MsgObj_readMessage(&stEcu1Can.CanEcu1MsgRxObj[1], &stRxMsgData[2]); // 0x300
//	if(readStatus2 == IfxMultican_Status_newData){
//		toggleLED2();
//	}
//#endif
}
*/


void Driver_Can_Init(uint32 mid)
{
    /* create module config */
    InterruptInstall(SRC_ID_CANINT0, CAN_RX_HND,3,0);
    IfxMultican_Can_Config canConfig;
    IfxMultican_Can_initModuleConfig(&canConfig, &MODULE_CAN);

    /* initialize module */
    IfxMultican_Can_initModule(&stEcu1Can.CanEcu1, &canConfig);

    /* create CAN node config */
    IfxMultican_Can_NodeConfig canNodeConfig;
    IfxMultican_Can_Node_initConfig(&canNodeConfig, &stEcu1Can.CanEcu1);

    canNodeConfig.baudrate = 500000UL;     /*500kbps*/
    {
        canNodeConfig.nodeId    = (IfxMultican_NodeId)((int)IfxMultican_NodeId_0);
        canNodeConfig.rxPin     = &IfxMultican_RXD0B_P20_7_IN;
        canNodeConfig.rxPinMode = IfxPort_InputMode_pullUp;
        canNodeConfig.txPin     = &IfxMultican_TXD0_P20_8_OUT;
        canNodeConfig.txPinMode = IfxPort_OutputMode_pushPull;

        IfxMultican_Can_Node_init(&stEcu1Can.CanEcu1Node, &canNodeConfig);
    }

    /*Object Enrollment*/
    Driver_Can_EnrollObject(0u, mid, IfxMultican_Frame_transmit,  IfxMultican_DataLengthCode_8, FALSE, &stEcu1Can.CanEcu1MsgTxObj[0]);
//#ifdef ECUBODY
    Driver_Can_EnrollObject(10u, 0x100, IfxMultican_Frame_receive,  IfxMultican_DataLengthCode_8, FALSE, &stEcu1Can.CanEcu1MsgRxObj[0]);
    Driver_Can_EnrollObject(11, 0x200, IfxMultican_Frame_receive,  IfxMultican_DataLengthCode_8, FALSE, &stEcu1Can.CanEcu1MsgRxObj[1]);
//#else
//    Driver_Can_EnrollObject(3u, 0x300, IfxMultican_Frame_receive,  IfxMultican_DataLengthCode_8, FALSE, &stEcu1Can.CanEcu1MsgRxObj[2]);
//#endif
}

static void Driver_Can_EnrollObject(int32_t msgObjId,  uint32_t msgId, uint8_t frameType, uint8_t msgDlc,  uint32_t extendedFrame, IfxMultican_Can_MsgObj* pArrObjNum)
{
    /* create message object config */
    IfxMultican_Can_MsgObjConfig canMsgObjConfig;
    IfxMultican_Can_MsgObj_initConfig(&canMsgObjConfig, &stEcu1Can.CanEcu1Node);

    canMsgObjConfig.msgObjId              = msgObjId;
    canMsgObjConfig.messageId             = msgId;
    canMsgObjConfig.frame                 = frameType;
    canMsgObjConfig.control.messageLen    = msgDlc;
    canMsgObjConfig.control.extendedFrame = extendedFrame;
    canMsgObjConfig.acceptanceMask        = 0x7FFFFFFFUL;
    canMsgObjConfig.control.matchingId    = TRUE;
    if(frameType==IfxMultican_Frame_receive)
    {
        canMsgObjConfig.rxInterrupt.enabled=TRUE;
        canMsgObjConfig.rxInterrupt.srcId=0u; //source id 0
       // SRC_CAN_CAN0_INT0.B.SRPN=5u;
       // SRC_CAN_CAN0_INT0.B.TOS=0u;
       // SRC_CAN_CAN0_INT0.B.SRE=1u;
    }
    /* initialize message object */
    IfxMultican_Can_MsgObj_init(pArrObjNum, &canMsgObjConfig);
}

void Driver_Can_TxTest(uint32 mid, uint32 data)
{
    const uint32 dataLow  = data;
    const uint32 dataHigh = 0x00000000;

    /* Transmit Data */
    {
        IfxMultican_Message msg;
        IfxMultican_Message_init(&msg, mid, dataLow, dataHigh, IfxMultican_DataLengthCode_8);

        while (IfxMultican_Can_MsgObj_sendMessage(&stEcu1Can.CanEcu1MsgTxObj[0], &msg) == IfxMultican_Status_notSentBusy)
        {
        }

    }
}
