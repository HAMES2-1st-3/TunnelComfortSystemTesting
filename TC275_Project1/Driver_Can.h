#ifndef DRIVER_CAN
#define DRIVER_CAN

/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include "Ifx_Types.h"
#include "IfxCpu.h"
#include "IfxMultican_Can.h"

/***********************************************************************/
/*Define*/ 
/***********************************************************************/
#define ECU1_TX_OBJ_NUM     10u
#define ECU1_RX_OBJ_NUM     10u

/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/

//typedef struct
//{
//    IfxMultican_Can        CanEcu1;
//    IfxMultican_Can_Node   CanEcu1Node;
//    IfxMultican_Can_MsgObj CanEcu1MsgTxObj[ECU1_TX_OBJ_NUM];
//    IfxMultican_Can_MsgObj CanEcu1MsgRxObj[ECU1_RX_OBJ_NUM];
//} Ecu1Can;
typedef struct
{
    IfxMultican_Can        CanEcu1;
    IfxMultican_Can_Node   CanEcu1Node;
    IfxMultican_Can_MsgObj CanEcu1MsgTxObj[ECU1_TX_OBJ_NUM]; //오브젝트 10개
    IfxMultican_Can_MsgObj CanEcu1MsgRxObj[ECU1_RX_OBJ_NUM]; //오브젝트 10개
} Ecu1Can;

/***********************************************************************/
/*External Variable*/ 
/***********************************************************************/
//
//IFX_EXTERN Ecu1Can g_MulticanBasic;
IFX_EXTERN Ecu1Can stEcu1Can;

/***********************************************************************/
/*Global Function Prototype*/ 
/***********************************************************************/
extern void Driver_Can_Init(void);
extern void Driver_Can_TxTest(void);


#endif /* DRIVER_STM */
