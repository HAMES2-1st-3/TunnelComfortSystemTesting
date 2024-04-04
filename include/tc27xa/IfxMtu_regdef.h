/**
 * \file IfxMtu_regdef.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC27XA_TS_V3.0.1.R2
 * Specification: TC27xA_TS_V3.0.1_SFR_OPEN_MARKET.xml (Revision: V3.0.1)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Mtu Mtu
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Mtu_Bitfields Bitfields
 * \ingroup IfxLld_Mtu
 * 
 * \defgroup IfxLld_Mtu_union Union
 * \ingroup IfxLld_Mtu
 * 
 * \defgroup IfxLld_Mtu_struct Struct
 * \ingroup IfxLld_Mtu
 * 
 */
#ifndef IFXMTU_REGDEF_H
#define IFXMTU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Mtu_Bitfields
 * \{  */

/** \\brief  Access Enable Register 0 */
typedef struct _Ifx_MTU_ACCEN0_Bits
{
    unsigned int EN0:1;                     /**< \brief [0:0] Access Enable for Master TAG ID n (rw) */
    unsigned int EN1:1;                     /**< \brief [1:1] Access Enable for Master TAG ID n (rw) */
    unsigned int EN2:1;                     /**< \brief [2:2] Access Enable for Master TAG ID n (rw) */
    unsigned int EN3:1;                     /**< \brief [3:3] Access Enable for Master TAG ID n (rw) */
    unsigned int EN4:1;                     /**< \brief [4:4] Access Enable for Master TAG ID n (rw) */
    unsigned int EN5:1;                     /**< \brief [5:5] Access Enable for Master TAG ID n (rw) */
    unsigned int EN6:1;                     /**< \brief [6:6] Access Enable for Master TAG ID n (rw) */
    unsigned int EN7:1;                     /**< \brief [7:7] Access Enable for Master TAG ID n (rw) */
    unsigned int EN8:1;                     /**< \brief [8:8] Access Enable for Master TAG ID n (rw) */
    unsigned int EN9:1;                     /**< \brief [9:9] Access Enable for Master TAG ID n (rw) */
    unsigned int EN10:1;                    /**< \brief [10:10] Access Enable for Master TAG ID n (rw) */
    unsigned int EN11:1;                    /**< \brief [11:11] Access Enable for Master TAG ID n (rw) */
    unsigned int EN12:1;                    /**< \brief [12:12] Access Enable for Master TAG ID n (rw) */
    unsigned int EN13:1;                    /**< \brief [13:13] Access Enable for Master TAG ID n (rw) */
    unsigned int EN14:1;                    /**< \brief [14:14] Access Enable for Master TAG ID n (rw) */
    unsigned int EN15:1;                    /**< \brief [15:15] Access Enable for Master TAG ID n (rw) */
    unsigned int EN16:1;                    /**< \brief [16:16] Access Enable for Master TAG ID n (rw) */
    unsigned int EN17:1;                    /**< \brief [17:17] Access Enable for Master TAG ID n (rw) */
    unsigned int EN18:1;                    /**< \brief [18:18] Access Enable for Master TAG ID n (rw) */
    unsigned int EN19:1;                    /**< \brief [19:19] Access Enable for Master TAG ID n (rw) */
    unsigned int EN20:1;                    /**< \brief [20:20] Access Enable for Master TAG ID n (rw) */
    unsigned int EN21:1;                    /**< \brief [21:21] Access Enable for Master TAG ID n (rw) */
    unsigned int EN22:1;                    /**< \brief [22:22] Access Enable for Master TAG ID n (rw) */
    unsigned int EN23:1;                    /**< \brief [23:23] Access Enable for Master TAG ID n (rw) */
    unsigned int EN24:1;                    /**< \brief [24:24] Access Enable for Master TAG ID n (rw) */
    unsigned int EN25:1;                    /**< \brief [25:25] Access Enable for Master TAG ID n (rw) */
    unsigned int EN26:1;                    /**< \brief [26:26] Access Enable for Master TAG ID n (rw) */
    unsigned int EN27:1;                    /**< \brief [27:27] Access Enable for Master TAG ID n (rw) */
    unsigned int EN28:1;                    /**< \brief [28:28] Access Enable for Master TAG ID n (rw) */
    unsigned int EN29:1;                    /**< \brief [29:29] Access Enable for Master TAG ID n (rw) */
    unsigned int EN30:1;                    /**< \brief [30:30] Access Enable for Master TAG ID n (rw) */
    unsigned int EN31:1;                    /**< \brief [31:31] Access Enable for Master TAG ID n (rw) */
} Ifx_MTU_ACCEN0_Bits;

/** \\brief  Access Enable Register 1 */
typedef struct _Ifx_MTU_ACCEN1_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_MTU_ACCEN1_Bits;

/** \\brief  Identification Register */
typedef struct _Ifx_MTU_ID_Bits
{
    unsigned int MODREV:8;                  /**< \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE:8;                 /**< \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER:16;              /**< \brief [31:16] Module Number Value (r) */
} Ifx_MTU_ID_Bits;

/** \\brief  Memory Autoinitialize Status Register 0 */
typedef struct _Ifx_MTU_MEMSTAT0_Bits
{
    unsigned int MEM0AIU:1;                 /**< \brief [0:0] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM1AIU:1;                 /**< \brief [1:1] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM2AIU:1;                 /**< \brief [2:2] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM3AIU:1;                 /**< \brief [3:3] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM4AIU:1;                 /**< \brief [4:4] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM5AIU:1;                 /**< \brief [5:5] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM6AIU:1;                 /**< \brief [6:6] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM7AIU:1;                 /**< \brief [7:7] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM8AIU:1;                 /**< \brief [8:8] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM9AIU:1;                 /**< \brief [9:9] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM10AIU:1;                /**< \brief [10:10] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM11AIU:1;                /**< \brief [11:11] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM12AIU:1;                /**< \brief [12:12] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM13AIU:1;                /**< \brief [13:13] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM14AIU:1;                /**< \brief [14:14] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM15AIU:1;                /**< \brief [15:15] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM16AIU:1;                /**< \brief [16:16] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM17AIU:1;                /**< \brief [17:17] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM18AIU:1;                /**< \brief [18:18] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM19AIU:1;                /**< \brief [19:19] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM20AIU:1;                /**< \brief [20:20] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM21AIU:1;                /**< \brief [21:21] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM22AIU:1;                /**< \brief [22:22] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM23AIU:1;                /**< \brief [23:23] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM24AIU:1;                /**< \brief [24:24] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM25AIU:1;                /**< \brief [25:25] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM26AIU:1;                /**< \brief [26:26] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM27AIU:1;                /**< \brief [27:27] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM28AIU:1;                /**< \brief [28:28] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM29AIU:1;                /**< \brief [29:29] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM30AIU:1;                /**< \brief [30:30] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int MEM31AIU:1;                /**< \brief [31:31] Memory x MBIST AutoInitialize Underway (rwh) */
} Ifx_MTU_MEMSTAT0_Bits;

/** \\brief  Memory Autoinitialize Status Register 1 */
typedef struct _Ifx_MTU_MEMSTAT1_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
    unsigned int MEM32AIU:0;                /**< \brief [31:32] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_32:1;             /**< \brief \internal Reserved */
    unsigned int MEM33AIU:0;                /**< \brief [32:33] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_33:1;             /**< \brief \internal Reserved */
    unsigned int MEM34AIU:0;                /**< \brief [33:34] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_34:1;             /**< \brief \internal Reserved */
    unsigned int MEM35AIU:0;                /**< \brief [34:35] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_35:1;             /**< \brief \internal Reserved */
    unsigned int MEM36AIU:0;                /**< \brief [35:36] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_36:1;             /**< \brief \internal Reserved */
    unsigned int MEM37AIU:0;                /**< \brief [36:37] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_37:1;             /**< \brief \internal Reserved */
    unsigned int MEM38AIU:0;                /**< \brief [37:38] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_38:1;             /**< \brief \internal Reserved */
    unsigned int MEM39AIU:0;                /**< \brief [38:39] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_39:1;             /**< \brief \internal Reserved */
    unsigned int MEM40AIU:0;                /**< \brief [39:40] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_40:1;             /**< \brief \internal Reserved */
    unsigned int MEM41AIU:0;                /**< \brief [40:41] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_41:1;             /**< \brief \internal Reserved */
    unsigned int MEM42AIU:0;                /**< \brief [41:42] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_42:1;             /**< \brief \internal Reserved */
    unsigned int MEM43AIU:0;                /**< \brief [42:43] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_43:1;             /**< \brief \internal Reserved */
    unsigned int MEM44AIU:0;                /**< \brief [43:44] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_44:1;             /**< \brief \internal Reserved */
    unsigned int MEM45AIU:0;                /**< \brief [44:45] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_45:1;             /**< \brief \internal Reserved */
    unsigned int MEM46AIU:0;                /**< \brief [45:46] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_46:1;             /**< \brief \internal Reserved */
    unsigned int MEM47AIU:0;                /**< \brief [46:47] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_47:1;             /**< \brief \internal Reserved */
    unsigned int MEM48AIU:0;                /**< \brief [47:48] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_48:1;             /**< \brief \internal Reserved */
    unsigned int MEM49AIU:0;                /**< \brief [48:49] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_49:1;             /**< \brief \internal Reserved */
    unsigned int MEM50AIU:0;                /**< \brief [49:50] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_50:1;             /**< \brief \internal Reserved */
    unsigned int MEM51AIU:0;                /**< \brief [50:51] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_51:1;             /**< \brief \internal Reserved */
    unsigned int MEM52AIU:0;                /**< \brief [51:52] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_52:1;             /**< \brief \internal Reserved */
    unsigned int MEM53AIU:0;                /**< \brief [52:53] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_53:1;             /**< \brief \internal Reserved */
    unsigned int MEM54AIU:0;                /**< \brief [53:54] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_54:1;             /**< \brief \internal Reserved */
    unsigned int MEM55AIU:0;                /**< \brief [54:55] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_55:1;             /**< \brief \internal Reserved */
    unsigned int MEM56AIU:0;                /**< \brief [55:56] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_56:1;             /**< \brief \internal Reserved */
    unsigned int MEM57AIU:0;                /**< \brief [56:57] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_57:1;             /**< \brief \internal Reserved */
    unsigned int MEM58AIU:0;                /**< \brief [57:58] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_58:1;             /**< \brief \internal Reserved */
    unsigned int MEM59AIU:0;                /**< \brief [58:59] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_59:1;             /**< \brief \internal Reserved */
    unsigned int MEM60AIU:0;                /**< \brief [59:60] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_60:1;             /**< \brief \internal Reserved */
    unsigned int MEM61AIU:0;                /**< \brief [60:61] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_61:1;             /**< \brief \internal Reserved */
    unsigned int MEM62AIU:0;                /**< \brief [61:62] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_62:1;             /**< \brief \internal Reserved */
    unsigned int MEM63AIU:0;                /**< \brief [62:63] Memory x MBIST AutoInitialize Underway (rwh) */
} Ifx_MTU_MEMSTAT1_Bits;

/** \\brief  Memory Autoinitialize Status Register 2 */
typedef struct _Ifx_MTU_MEMSTAT2_Bits
{
    unsigned int reserved_0:64;             /**< \brief \internal Reserved */
    unsigned int MEM64AIU:0;                /**< \brief [63:64] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_64:1;             /**< \brief \internal Reserved */
    unsigned int MEM65AIU:0;                /**< \brief [64:65] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_65:1;             /**< \brief \internal Reserved */
    unsigned int MEM66AIU:0;                /**< \brief [65:66] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_66:1;             /**< \brief \internal Reserved */
    unsigned int MEM67AIU:0;                /**< \brief [66:67] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_67:1;             /**< \brief \internal Reserved */
    unsigned int MEM68AIU:0;                /**< \brief [67:68] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_68:1;             /**< \brief \internal Reserved */
    unsigned int MEM69AIU:0;                /**< \brief [68:69] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_69:1;             /**< \brief \internal Reserved */
    unsigned int MEM70AIU:0;                /**< \brief [69:70] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_70:1;             /**< \brief \internal Reserved */
    unsigned int MEM71AIU:0;                /**< \brief [70:71] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_71:1;             /**< \brief \internal Reserved */
    unsigned int MEM72AIU:0;                /**< \brief [71:72] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_72:1;             /**< \brief \internal Reserved */
    unsigned int MEM73AIU:0;                /**< \brief [72:73] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_73:1;             /**< \brief \internal Reserved */
    unsigned int MEM74AIU:0;                /**< \brief [73:74] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_74:1;             /**< \brief \internal Reserved */
    unsigned int MEM75AIU:0;                /**< \brief [74:75] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_75:1;             /**< \brief \internal Reserved */
    unsigned int MEM76AIU:0;                /**< \brief [75:76] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_76:1;             /**< \brief \internal Reserved */
    unsigned int MEM77AIU:0;                /**< \brief [76:77] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_77:1;             /**< \brief \internal Reserved */
    unsigned int MEM78AIU:0;                /**< \brief [77:78] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_78:1;             /**< \brief \internal Reserved */
    unsigned int MEM79AIU:0;                /**< \brief [78:79] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_79:1;             /**< \brief \internal Reserved */
    unsigned int MEM80AIU:0;                /**< \brief [79:80] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_80:1;             /**< \brief \internal Reserved */
    unsigned int MEM81AIU:0;                /**< \brief [80:81] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_81:1;             /**< \brief \internal Reserved */
    unsigned int MEM82AIU:0;                /**< \brief [81:82] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_82:1;             /**< \brief \internal Reserved */
    unsigned int MEM83AIU:0;                /**< \brief [82:83] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_83:1;             /**< \brief \internal Reserved */
    unsigned int MEM84AIU:0;                /**< \brief [83:84] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_84:1;             /**< \brief \internal Reserved */
    unsigned int MEM85AIU:0;                /**< \brief [84:85] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_85:1;             /**< \brief \internal Reserved */
    unsigned int MEM86AIU:0;                /**< \brief [85:86] Memory x MBIST AutoInitialize Underway (rwh) */
    unsigned int reserved_86:1;             /**< \brief \internal Reserved */
    unsigned int MEM87AIU:0;                /**< \brief [86:87] Memory x MBIST AutoInitialize Underway (rwh) */
} Ifx_MTU_MEMSTAT2_Bits;

/** \\brief  Memory MBIST Enable Register 0 */
typedef struct _Ifx_MTU_MEMTEST0_Bits
{
    unsigned int CPU2DSEN:1;                /**< \brief [0:0] CPU2 DSPR MBIST Controller Memory Enable (rw) */
    unsigned int CPU2DCEN:1;                /**< \brief [1:1] CPU2 DCACHE MBIST Controller Memory Enable (rw) */
    unsigned int CPU2DTEN:1;                /**< \brief [2:2] CPU2 DTAG MBIST Controller Memory Enable (rw) */
    unsigned int CPU2PSEN:1;                /**< \brief [3:3] CPU2 PSPR MBIST Controller Memory Enable (rw) */
    unsigned int CPU2PCEN:1;                /**< \brief [4:4] CPU2 PCACHE MBIST Controller Memory Enable (rw) */
    unsigned int CPU2PTEN:1;                /**< \brief [5:5] CPU2 PTAG MBIST Controller Memory Enable (rw) */
    unsigned int CPU1DSEN:1;                /**< \brief [6:6] CPU1 DSPR MBIST Controller Memory Enable (rw) */
    unsigned int CPU1DCEN:1;                /**< \brief [7:7] CPU1 DCACHE MBIST Controller Memory Enable (rw) */
    unsigned int CPU1DTEN:1;                /**< \brief [8:8] CPU1 DTAG MBIST Controller Memory Enable (rw) */
    unsigned int CPU1PSEN:1;                /**< \brief [9:9] CPU1 PSPR MBIST Controller Memory Enable (rw) */
    unsigned int CPU1PCEN:1;                /**< \brief [10:10] CPU1 PCACHE MBIST Controller Memory Enable (rw) */
    unsigned int CPU1PTEN:1;                /**< \brief [11:11] CPU1 PTAG MBIST Controller Memory Enable (rw) */
    unsigned int reserved_12:2;             /**< \brief \internal Reserved */
    unsigned int CPU0DSEN:1;                /**< \brief [14:14] CPU0 DSPR MBIST Controller Memory Enable (rw) */
    unsigned int CPU0PCEN:1;                /**< \brief [15:15] CPU0 PCACHE MBIST Controller Memory Enable (rw) */
    unsigned int CPU0PSEN:1;                /**< \brief [16:16] CPU0 PSPR MBIST Controller Memory Enable (rw) */
    unsigned int CPU0PTEN:1;                /**< \brief [17:17] CPU0 PTAG MBIST Controller Memory Enable (rw) */
    unsigned int reserved_18:4;             /**< \brief \internal Reserved */
    unsigned int ETHEN:1;                   /**< \brief [22:22] ETHERMAC MBIST Controller Memory Enable (rw) */
    unsigned int HSMCEN:1;                  /**< \brief [23:23] HSM CACHE MBIST Controller Memory Enable (rw) */
    unsigned int HSMTEN:1;                  /**< \brief [24:24] HSM TAG MBIST Controller Memory Enable (rw) */
    unsigned int HSMREN:1;                  /**< \brief [25:25] HSM RAM MBIST Controller Memory Enable (rw) */
    unsigned int FSI0EN:1;                  /**< \brief [26:26] FSI0 MBIST Controller Memory Enable (rw) */
    unsigned int reserved_27:1;             /**< \brief \internal Reserved */
    unsigned int GTMFEN:1;                  /**< \brief [28:28] GTM FIFO0 MBIST Controller Memory Enable (rw) */
    unsigned int GTMM0EN:1;                 /**< \brief [29:29] GTM MCS0 MBIST Controller Memory Enable (rw) */
    unsigned int GTMM1EN:1;                 /**< \brief [30:30] GTM RAM1 MBIST Controller Memory Enable (rw) */
    unsigned int GTM1AEN:1;                 /**< \brief [31:31] GTM RAM1A MBIST Controller Memory Enable (rw) */
} Ifx_MTU_MEMTEST0_Bits;

/** \\brief  Memory MBIST Enable Register 1 */
typedef struct _Ifx_MTU_MEMTEST1_Bits
{
    unsigned int GTM1BEN:1;                 /**< \brief [0:0] GTM RAM1B Controller Memory Enable (rw) */
    unsigned int GTM2EN:1;                  /**< \brief [1:1] GTM RAM2 Controller Memory Enable (rw) */
    unsigned int PSI5EN:1;                  /**< \brief [2:2] PSI5 Controller Memory Enable (rw) */
    unsigned int BMUEN:1;                   /**< \brief [3:3] BMU Controller Memory Enable (rw) */
    unsigned int MCAN0EN:1;                 /**< \brief [4:4] GTM RAM1B Controller Memory Enable (rw) */
    unsigned int reserved_5:1;              /**< \brief \internal Reserved */
    unsigned int ERAY0OEN:1;                /**< \brief [6:6] ERAY0 OBF Controller Memory Enable (rw) */
    unsigned int ERAY0TEN:1;                /**< \brief [7:7] ERAY0 TBF Controller Memory Enable (rw) */
    unsigned int ERAY0MEN:1;                /**< \brief [8:8] ERAY0 MBF Controller Memory Enable (rw) */
    unsigned int reserved_9:4;              /**< \brief \internal Reserved */
    unsigned int MCDSEN:1;                  /**< \brief [13:13] MCDS Controller Memory Enable (ED only) (rw) */
    unsigned int EMEML0EN:1;                /**< \brief [14:14] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML1EN:1;                /**< \brief [15:15] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML2EN:1;                /**< \brief [16:16] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML3EN:1;                /**< \brief [17:17] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML4EN:1;                /**< \brief [18:18] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML5EN:1;                /**< \brief [19:19] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML6EN:1;                /**< \brief [20:20] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML7EN:1;                /**< \brief [21:21] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML8EN:1;                /**< \brief [22:22] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML9EN:1;                /**< \brief [23:23] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML10EN:1;               /**< \brief [24:24] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML11EN:1;               /**< \brief [25:25] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML12EN:1;               /**< \brief [26:26] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML13EN:1;               /**< \brief [27:27] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML14EN:1;               /**< \brief [28:28] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int EMEML15EN:1;               /**< \brief [29:29] EMEM Lower x MBIST Controller Memory Test Enable (ED only) (rw) */
    unsigned int reserved_30:2;             /**< \brief \internal Reserved */
} Ifx_MTU_MEMTEST1_Bits;

/** \\brief  Memory MBIST Enable Register 2 */
typedef struct _Ifx_MTU_MEMTEST2_Bits
{
    unsigned int reserved_0:14;             /**< \brief \internal Reserved */
    unsigned int CIF0EN:1;                  /**< \brief [14:14] CIF JPEG1_4 Memory Enable (ED only) (rw) */
    unsigned int DAMEN:1;                   /**< \brief [15:15] DAM Memory Enable (rw) */
    unsigned int CIF1EN:1;                  /**< \brief [16:16] CIF JPEG3 Memory Enable (ED only) (rw) */
    unsigned int CIF2EN:1;                  /**< \brief [17:17] CIF Memory2 Enable (ED only) (rw) */
    unsigned int reserved_18:14;            /**< \brief \internal Reserved */
} Ifx_MTU_MEMTEST2_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mtu_union
 * \{  */

/** \\brief  Access Enable Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_ACCEN0_Bits B;
} Ifx_MTU_ACCEN0;

/** \\brief  Access Enable Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_ACCEN1_Bits B;
} Ifx_MTU_ACCEN1;

/** \\brief  Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_ID_Bits B;
} Ifx_MTU_ID;

/** \\brief  Memory Autoinitialize Status Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_MEMSTAT0_Bits B;
} Ifx_MTU_MEMSTAT0;

/** \\brief  Memory Autoinitialize Status Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_MEMSTAT1_Bits B;
} Ifx_MTU_MEMSTAT1;

/** \\brief  Memory Autoinitialize Status Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_MEMSTAT2_Bits B;
} Ifx_MTU_MEMSTAT2;

/** \\brief  Memory MBIST Enable Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_MEMTEST0_Bits B;
} Ifx_MTU_MEMTEST0;

/** \\brief  Memory MBIST Enable Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_MEMTEST1_Bits B;
} Ifx_MTU_MEMTEST1;

/** \\brief  Memory MBIST Enable Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_MTU_MEMTEST2_Bits B;
} Ifx_MTU_MEMTEST2;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mtu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  MTU object */
typedef volatile struct _Ifx_MTU
{
    unsigned char reserved_0[8];            /**< \brief 0, \internal Reserved */
    Ifx_MTU_ID ID;                          /**< \brief 8, Identification Register */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
    Ifx_MTU_MEMTEST0 MEMTEST0;              /**< \brief 10, Memory MBIST Enable Register 0 */
    Ifx_MTU_MEMTEST1 MEMTEST1;              /**< \brief 14, Memory MBIST Enable Register 1 */
    Ifx_MTU_MEMTEST2 MEMTEST2;              /**< \brief 18, Memory MBIST Enable Register 2 */
    unsigned char reserved_1C[28];          /**< \brief 1C, \internal Reserved */
    Ifx_MTU_MEMSTAT0 MEMSTAT0;              /**< \brief 38, Memory Autoinitialize Status Register 0 */
    Ifx_MTU_MEMSTAT1 MEMSTAT1;              /**< \brief 3C, Memory Autoinitialize Status Register 1 */
    Ifx_MTU_MEMSTAT2 MEMSTAT2;              /**< \brief 40, Memory Autoinitialize Status Register 2 */
    unsigned char reserved_44[180];         /**< \brief 44, \internal Reserved */
    Ifx_MTU_ACCEN1 ACCEN1;                  /**< \brief F8, Access Enable Register 1 */
    Ifx_MTU_ACCEN0 ACCEN0;                  /**< \brief FC, Access Enable Register 0 */
    unsigned char reserved_100[1];          /**< \brief 100, \internal Reserved */
} Ifx_MTU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMTU_REGDEF_H */
