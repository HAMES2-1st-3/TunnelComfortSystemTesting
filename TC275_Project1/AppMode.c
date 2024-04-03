/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include "AppMode.h"
#include "AppMode_Init.h"
#include "AppMode_Idle.h"
#include "AppMode_Operation.h"
#include "AppMode_Error.h"

/***********************************************************************/
/*Define*/ 
/***********************************************************************/

/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/

/***********************************************************************/
/*Static Function Prototype*/ 
/***********************************************************************/
static void Unit_ModeRegister(void);
static void Unit_ModeHandler(ModeInfo* pModeInfo);



/***********************************************************************/
/*Variable*/ 
/***********************************************************************/
void (*ModeFunction[MAX_MODE])(ModeInfo* pModeInfo);
ModeInfo stModeInfo ={INIT_MODE, 0u, 0u};

/***********************************************************************/
/*Function*/ 
/***********************************************************************/
void Unit_Mode(void)
{
    static uint8_t u8nuStartFlag = 0u;

    if(u8nuStartFlag == 0u)
    {
        Unit_ModeRegister();
        u8nuStartFlag = 1u;
    }
    else
    {
        Unit_ModeHandler(&stModeInfo);
    }
}

static void Unit_ModeRegister(void)
{
    ModeFunction[0] = Unit_ModeInit;
    ModeFunction[1] = Unit_ModeIdle;
    ModeFunction[2] = Unit_ModeOperation;
    ModeFunction[3] = Unit_ModeError;
}

static void Unit_ModeHandler(ModeInfo* pModeInfo)
{    
    ModeFunction[pModeInfo->enuCurMode](pModeInfo);
}
