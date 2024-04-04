/**
 * \file IfxSrc_regdef.h
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 * $Revision: 663 $
 * $Date: 2012-05-09 16:02:34 +0200 (mer., 09 mai 2012) $
 *
 *                                 IMPORTANT NOTICE
 *
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
 */
#ifndef IFXSRC_REGDEF_H
#define IFXSRC_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Service request register */
typedef struct
{
    unsigned int SRPN: 10;                  /** \brief [9:0] Service Request Priority Number (rw) */
    unsigned int SRE: 1;                    /** \brief [10:10] Service Request Enable (rw) */
    unsigned int TOS: 4;                    /** \brief [14:11] Type of Service Control (rw) */
    unsigned int reserved_15: 1;
    unsigned int ECC: 6;                    /** \brief [21:16] ECC (rwh) */
    unsigned int reserved_22: 2;
    unsigned int SRR: 1;                    /** \brief [24:24] Service Request Flag (rh) */
    unsigned int CLRR: 1;                   /** \brief [25:25] Request Clear Bit (w) */
    unsigned int SETR: 1;                   /** \brief [26:26] Request Set Bit (w) */
    unsigned int IOV: 1;                    /** \brief [27:27] Interrupt Trigger Overflow Bit (rh) */
    unsigned int IOVCLR: 1;                 /** \brief [28:28] Interrupt Trigger Overflow Clear Bit (w) */
    unsigned int SWS: 1;                    /** \brief [29:29] SW Sticky Bit (rh) */
    unsigned int SWSCLR: 1;                 /** \brief [30:30] SW Sticky Clear Bit (w) */
    unsigned int BUSY: 1;                   /** \brief [31:31] Busy Bit (rh) */
} Ifx_SRC_SRCR_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Service request register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_SRC_SRCR_Bits B;
} Ifx_SRC_SRCR;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** ASCLIN Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR TX;                        /** \brief 0, ASCLIN Transmit Service Request */
    Ifx_SRC_SRCR RX;                        /** \brief 4, ASCLIN Receive Service Request */
    Ifx_SRC_SRCR ERR;                       /** \brief 8, ASCLIN Error Service Request */
} Ifx_SRC_ASCLIN;

/** CCU6 Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR SR[4];                     /** \brief 0, CCU6 Service Request  */
} Ifx_SRC_CCU6;

/** DMA move engine channels Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR CH[24];                    /** \brief 0, DMA Move Engine Channel  Service Request */
    unsigned char reserved_60[160];         /** \brief 60 */
} Ifx_SRC_DMA_MECH;

/** DSADC Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR SRM;                       /** \brief 0, DSADC SRM Service Request */
    Ifx_SRC_SRCR SRA;                       /** \brief 4, DSADC SRA Service Request */
} Ifx_SRC_DSADC;

/** ERAY Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR INT0;                      /** \brief 0, E-RAY Service Request 0 */
    Ifx_SRC_SRCR INT1;                      /** \brief 4, E-RAY Service Request 1 */
    Ifx_SRC_SRCR TINT0;                     /** \brief 8, E-RAY Timer Interrupt 0 Service Request */
    Ifx_SRC_SRCR TINT1;                     /** \brief C, E-RAY Timer Interrupt 1 Service Request */
    Ifx_SRC_SRCR NDAT0;                     /** \brief 10, E-RAY New Data 0 Service Request */
    Ifx_SRC_SRCR NDAT1;                     /** \brief 14, E-RAY New Data 1 Service Request */
    Ifx_SRC_SRCR MBSC0;                     /** \brief 18, E-RAY Message Buffer Status Changed 0 Service Request */
    Ifx_SRC_SRCR MBSC1;                     /** \brief 1C, E-RAY Message Buffer Status Changed 1 Service Request */
    Ifx_SRC_SRCR OBUSY;                     /** \brief 20, E-RAY Output Buffer Busy Service Request */
    Ifx_SRC_SRCR IBUSY;                     /** \brief 24, E-RAY Input Buffer Busy Service Request */
} Ifx_SRC_ERAY;

/** General purpose Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR SR[4];                     /** \brief 0, General Purpose Service Request  */
    unsigned char reserved_10[16];          /** \brief 10 */
} Ifx_SRC_GPSR;

/** GPT12 Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR CIRQ;                      /** \brief 0, GPT12 CAPREL Service Request */
    Ifx_SRC_SRCR T[5];                      /** \brief 4, GPT12 T Overflow/Underflow Service Request */
} Ifx_SRC_GPT12;

/** GTM Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR AEIIRQ;                    /** \brief 0, GTM AEI Shared Service Request */
    Ifx_SRC_SRCR ARUIRQ[3];                 /** \brief 4, GTM ARU Shared Service Request  */
    unsigned char reserved_10[4];           /** \brief 10 */
    Ifx_SRC_SRCR BRCIRQ;                    /** \brief 14, GTM BRC Shared Service Request */
    Ifx_SRC_SRCR CMPIRQ;                    /** \brief 18, GTM CMP Shared Service Request */
    Ifx_SRC_SRCR SPEIRQ[2];                 /** \brief 1C, GTM SPE Shared Service Request */
    Ifx_SRC_SRCR PSM[1][8];                 /** \brief 24, GTM PSM Shared Service Request */
    unsigned char reserved_44[96];          /** \brief 44 */
    Ifx_SRC_SRCR DPLL[27];                  /** \brief A4, GTM DPLL Service Request  */
    unsigned char reserved_110[112];        /** \brief 110 */
    Ifx_SRC_SRCR TIM[4][8];                 /** \brief 180, GTM TIM Shared Service Request */
    unsigned char reserved_200[384];        /** \brief 200 */
    Ifx_SRC_SRCR MCS[4][8];                 /** \brief 380, GTM MCS Shared Service Request */
    unsigned char reserved_400[384];        /** \brief 400 */
    Ifx_SRC_SRCR TOM[3][8];                 /** \brief 580, GTM TOM Shared Service Request */
    unsigned char reserved_5E0[416];        /** \brief 5E0 */
    Ifx_SRC_SRCR ATOM[5][4];                /** \brief 780, GTM ATOM Shared Service Request */
    unsigned char reserved_7D0[560];        /** \brief 7D0 */
} Ifx_SRC_GTM;

/** HSSL Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR COK;                       /** \brief 0, Channel OK Service Request m */
    Ifx_SRC_SRCR RDI;                       /** \brief 4, Channel Read Data Service Request m */
    Ifx_SRC_SRCR ERR;                       /** \brief 8, Channel Error ServiceRequest m */
    Ifx_SRC_SRCR TRG;                       /** \brief C, Channel Trigger Service Request m */
} Ifx_SRC_HSSL;

/** I2C Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR BREQ;                      /** \brief 0, I2C Burst Data Transfer Request */
    Ifx_SRC_SRCR LBREQ;                     /** \brief 4, I2C Last Burst Data Transfer Service Request */
    Ifx_SRC_SRCR SREQ;                      /** \brief 8, I2C Single Data Transfer Service Request */
    Ifx_SRC_SRCR LSREQ;                     /** \brief C, I2C Last Single Data Transfer Service Request */
    Ifx_SRC_SRCR ERR;                       /** \brief 10, I2C Error Service Request */
    Ifx_SRC_SRCR P;                         /** \brief 14, I2C Kernel Service Request */
} Ifx_SRC_I2C;

/** MSC Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR SR[4];                     /** \brief 0, MSC Service Request  */
} Ifx_SRC_MSC;

/** QSPI Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR TX;                        /** \brief 0, QSPI Transmit Service Request */
    Ifx_SRC_SRCR RX;                        /** \brief 4, QSPI Receive Service Request */
    Ifx_SRC_SRCR ERR;                       /** \brief 8, QSPI Error Service Request */
    Ifx_SRC_SRCR PT;                        /** \brief C, QSPI Phase Transition Service Request */
    Ifx_SRC_SRCR HC;                        /** \brief 10, QSPI Half Cycle Service Request */
    Ifx_SRC_SRCR U;                         /** \brief 14, QSPI User Defined Service Request */
} Ifx_SRC_QSPI;

/** SCU Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR DTS;                       /** \brief 0, System Control Unit Service Request 0 */
    Ifx_SRC_SRCR ERU0;                      /** \brief 4, System Control Unit Service Request 1 */
    Ifx_SRC_SRCR ERU1;                      /** \brief 8, System Control Unit Service Request 2 */
    Ifx_SRC_SRCR ERU2;                      /** \brief C, System Control Unit Service Request 3 */
    Ifx_SRC_SRCR ERU3;                      /** \brief 10, System Control Unit Service Request 4 */
} Ifx_SRC_SCU;

/** SDMA move engine channels Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR CH[8];                     /** \brief 0, SDMA Move Engine Channel  Service Request */
    unsigned char reserved_20[224];         /** \brief 20 */
} Ifx_SRC_SDMA_MECH;

/** STM Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR SR[2];                     /** \brief 0, System Timer Service Request  */
} Ifx_SRC_STM;

/** VADC common group Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR SR[4];                     /** \brief 0, VADC Common Group Service Request  */
} Ifx_SRC_VADCCG;

/** VADC group Service requests */
typedef volatile struct
{
    Ifx_SRC_SRCR SR[4];                     /** \brief 0, VADC Group Service Request  */
} Ifx_SRC_VADCG;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** SRC object */
typedef volatile struct
{
    Ifx_SRC_SRCR CPUSBSRC[3];               /** \brief 0, CPU Software Breakpoint Service Request */
    unsigned char reserved_C[20];           /** \brief C */
    Ifx_SRC_SRCR EMEM;                      /** \brief 20, Emulation Memory Service Request */
    Ifx_SRC_SRCR AGBT;                      /** \brief 24, AGBT Service Request */
    unsigned char reserved_28[24];          /** \brief 28 */
    Ifx_SRC_SRCR BCUSPBSBSRC;               /** \brief 40, Bus Control Unit SPB Service Request */
    unsigned char reserved_44[4];           /** \brief 44 */
    Ifx_SRC_SRCR XBARSRC;                   /** \brief 48, XBAR_SRI Service Request */
    unsigned char reserved_4C[4];           /** \brief 4C */
    Ifx_SRC_SRCR CERBERUS[2];               /** \brief 50, Cerberus Service Request */
    unsigned char reserved_58[40];          /** \brief 58 */
    Ifx_SRC_ASCLIN ASCLIN[18];              /** \brief 80, ASCLIN Service requests */
    unsigned char reserved_158[56];         /** \brief 158 */
    Ifx_SRC_QSPI QSPI[6];                   /** \brief 190, QSPI Service requests */
    unsigned char reserved_220[112];        /** \brief 220 */
    Ifx_SRC_SRCR HSCT;                      /** \brief 290, HSCT Service Request */
    unsigned char reserved_294[12];         /** \brief 294 */
    Ifx_SRC_HSSL HSSL[3];                   /** \brief 2A0, HSSL Service requests */
    unsigned char reserved_2D0[16];         /** \brief 2D0 */
    Ifx_SRC_I2C I2C[2];                     /** \brief 2E0, I2C Service requests */
    unsigned char reserved_310[64];         /** \brief 310 */
    Ifx_SRC_SRCR SENT[10];                  /** \brief 350, SENT TRIG Service Request */
    unsigned char reserved_378[104];        /** \brief 378 */
    Ifx_SRC_MSC MSC[2];                     /** \brief 3E0, MSC Service requests */
    unsigned char reserved_400[32];         /** \brief 400 */
    Ifx_SRC_CCU6 CCU6[4];                   /** \brief 420, CCU6 Service requests */
    Ifx_SRC_GPT12 GPT12[2];                 /** \brief 460, GPT12 Service requests */
    Ifx_SRC_STM STM[3];                     /** \brief 490, STM Service requests */
    unsigned char reserved_4A8[8];          /** \brief 4A8 */
    Ifx_SRC_SRCR FCE;                       /** \brief 4B0, FCE Error Service Request */
    unsigned char reserved_4B4[28];         /** \brief 4B4 */
    Ifx_SRC_SRCR SDMA_ME[2];                /** \brief 4D0, SDMA Move Engine Service Request */
    Ifx_SRC_SRCR DMA_ME[2];                 /** \brief 4D8, DMA Move Engine Service Request */
    unsigned char reserved_4E0[16];         /** \brief 4E0 */
    Ifx_SRC_SDMA_MECH SDMA_MECH[2];         /** \brief 4F0, SDMA move engine channels Service requests */
    Ifx_SRC_DMA_MECH DMA_MECH[2];           /** \brief 6F0, DMA move engine channels Service requests */
    Ifx_SRC_SRCR ETH;                       /** \brief 8F0, Ethernet Service Request */
    unsigned char reserved_8F4[12];         /** \brief 8F4 */
    Ifx_SRC_SRCR CANINT[16];                /** \brief 900, MULTICAN+ Service Request */
    unsigned char reserved_940[64];         /** \brief 940 */
    Ifx_SRC_VADCG VADCG[8];                 /** \brief 980, VADC group Service requests */
    unsigned char reserved_A00[128];        /** \brief A00 */
    Ifx_SRC_VADCG VADCG14;                  /** \brief A80, VADC group 14 Service requests */
    unsigned char reserved_A90[16];         /** \brief A90 */
    Ifx_SRC_VADCCG VADCCG[2];               /** \brief AA0, VADC common group Service requests */
    unsigned char reserved_AC0[208];        /** \brief AC0 */
    Ifx_SRC_DSADC DSADC[6];                 /** \brief B90, DSADC Service requests */
    unsigned char reserved_BC0[32];         /** \brief BC0 */
    Ifx_SRC_ERAY ERAY;                      /** \brief BE0, ERAY Service requests */
    unsigned char reserved_C08[40];         /** \brief C08 */
    Ifx_SRC_SRCR PMU00;                     /** \brief C30, PMU 0 Service Request 0 */
    unsigned char reserved_C34[76];         /** \brief C34 */
    Ifx_SRC_SRCR BMU;                       /** \brief C80, Bus Monitor Unit Service Request */
    unsigned char reserved_C84[44];         /** \brief C84 */
    Ifx_SRC_SRCR IOM;                       /** \brief CB0, IOM Service Request */
    unsigned char reserved_CB4[12];         /** \brief CB4 */
    Ifx_SRC_SRCR HSM[2];                    /** \brief CC0, HSM Service Request */
    unsigned char reserved_CC8[8];          /** \brief CC8 */
    Ifx_SRC_SCU SCU;                        /** \brief CD0, SCU Service requests */
    unsigned char reserved_CE4[44];         /** \brief CE4 */
    Ifx_SRC_SRCR SMU[3];                    /** \brief D10, SMU Service Request */
    unsigned char reserved_D1C[20];         /** \brief D1C */
    Ifx_SRC_SRCR PSI5[8];                   /** \brief D30, PSI5 Service Request */
    unsigned char reserved_D50[688];        /** \brief D50 */
    Ifx_SRC_GPSR GPSR[3];                   /** \brief 1000, General purpose Service requests */
    unsigned char reserved_1060[1440];      /** \brief 1060 */
    Ifx_SRC_GTM GTM;                        /** \brief 1600, GTM Service requests */
} Ifx_SRC;
/******************************************************************************/
#endif /* IFXSRC_REGDEF_H */

