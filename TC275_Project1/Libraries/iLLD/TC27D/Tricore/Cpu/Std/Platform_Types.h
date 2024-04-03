/**
 * \file Platform_Types.h
 *
 * \version iLLD_1_0_1_12_0_1
 * \copyright Copyright (c) 2020 Infineon Technologies AG. All rights reserved.
 *
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/******************************************************************************
**                      Includes                                             **
******************************************************************************/

/******************************************************************************
**                      Global Macro Definitions                             **
******************************************************************************/
#define PLATFORM_VENDOR_ID        (17u)
#define PLATFORM_AR_RELEASE_MAJOR_VERSION (4u)
#define PLATFORM_AR_RELEASE_MINOR_VERSION (2u)
#define PLATFORM_AR_RELEASE_REVISION_VERSION (2u)
#define PLATFORM_SW_MAJOR_VERSION (1u)
#define PLATFORM_SW_MINOR_VERSION (0u)
#define PLATFORM_SW_PATCH_VERSION (0u)

/* [cover parentID={5294D975-045A-4d91-9A1A-B1765FAB4653}] */
/* CPU register width type definition */
#define CPU_TYPE_8      (8u)
#define CPU_TYPE_16     (16u)
#define CPU_TYPE_32     (32u)
/* Register width of CPU*/
#define CPU_TYPE        CPU_TYPE_32   /* 32 bit  */
/* [/cover] */


/* [cover parentID={FBA2FA55-430B-4dfb-82B1-C791F0878F9B}] */
/* Bit order type definition*/
#define MSB_FIRST       (0u)          /* Big Endian bit ordering     */
#define LSB_FIRST       (1u)          /* Little Endian bit ordering  */
/* Bit order of Register level*/
#define CPU_BIT_ORDER   LSB_FIRST       /* Little Endian */
/* [/cover] */


/* [cover parentID={0E2E6A28-264A-4d32-96EE-5F5C93286311}] */
/* Byte order type definition*/
#define HIGH_BYTE_FIRST (0u)          /* Big Endian byte ordering    */
#define LOW_BYTE_FIRST  (1u)          /* Little Endian byte ordering */
/* Byte order on Memory level*/
#define CPU_BYTE_ORDER  LOW_BYTE_FIRST  /* Little Endian */
/* [/cover] */


/* TRUE, FALSE symbol for Boolean types*/
/* [cover parentID={FF7F9840-8904-4b7d-83A7-988524B795DE}] */
#ifndef TRUE
#define TRUE        (1u)
#endif
#ifndef FALSE
#define FALSE       (0u)
#endif
/* [/cover] */
/******************************************************************************
**                      Global Type Definitions                              **
******************************************************************************/
/* User integer data types */
typedef signed char int8_t; /* -128 .. +127 */
typedef unsigned char uint8_t; /* 0 .. 255 */
typedef signed short int16_t; /* -32768 .. +32767 */
typedef unsigned short uint16_t;  /* 0 .. 65535 */
typedef signed long int32_t;  /* -2147483648 .. +2147483647 */
typedef unsigned long uint32_t; /* 0 .. 4294967295 */
typedef float float32_t;
typedef double float64_t;

/* AUTOSAR integer data types*/

/* unsigned char with a bit length that is the shortest one natively supported
  by the platform.*/
/* [cover parentID={F7B51F71-6687-4e05-8408-7F5AAC55C638}] boolean [/cover]*/
typedef unsigned char       boolean;        /* for use with TRUE/FALSE      */

/* 8bit unsigned :  0 .. 255 [0X00 .. 0XFF]*/
/* [cover parentID={4269E5AB-7F28-4803-8D60-7B4EC91CB087}] uint8 [/cover] */
typedef unsigned char       uint8;

/* 16bit unsigned:  0..65535 [0x0000..0xFFFF]*/
/* [cover parentID={66E964CA-35D5-4013-BB61-1E824636D713}] uint16 [/cover] */
typedef unsigned short      uint16;

/* 32bit unsigned:  0..4294967295 [0x00000000..0xFFFFFFFF]*/
/* [cover parentID={DA33B7A0-7CD3-45e7-9C9A-6D63FB8BA3DC}] uint32 [/cover] */
typedef unsigned long       uint32;

/* 64bit unsigned
*          0..18446744073709551615   [0x0000000000000000..0xFFFFFFFFFFFFFFFF]*/
/* [cover parentID={3409E2A3-BF2D-44a5-9B00-A72300848166}] uint64 */
typedef unsigned long long  uint64;

/* 8bit signed, 7 bit + 1 bit sign -128..+127 [0x80..0x7F]*/
/* [cover parentID={94E0756B-993D-4cae-9499-416CDFD6FEAF}] sint8[/cover]*/
typedef signed char         sint8;

/* 16bit signed, 15 bit + 1 bit sign -32768..+32767 [0x8000..0x7FFF]*/
/* [cover parentID={B3482DFF-8DFF-41bd-95E0-0406E2451CB0}] sint16 [/cover]*/
typedef short               sint16;

/* 32bit signed, 31 bit + 1 bit sign
 -2147483648..+2147483647 [0x80000000..0x7FFFFFFF]*/
/* [cover parentID={B027B471-A1A2-456c-A015-35F4A34A88EF}] sint32 [/cover]*/
typedef long                sint32;
/*
* 64bit signed, 63 bit + 1 bit sign
* -9223372036854775808..9223372036854775807
* [0x8000000000000000..0x7FFFFFFFFFFFFFFF]
*/
/* [cover parentID={3CF3471C-EB1A-450c-B78F-4B96D226A1F5}] sint64 [/cover]*/
typedef long long           sint64;

/* At least 8 bit*/
/* [cover parentID={F8719785-0A16-486e-AB85-0A2859402037}] uint8_least[/cover]*/
typedef unsigned long       uint8_least;

/* At least 16 bit*/
/* [cover parentID={BEAD868D-0EC1-44f0-AFEE-B57401CC9E65}]uint16_least[/cover]*/
typedef unsigned long       uint16_least;

/* least 32 bit*/
/* [cover parentID={9B9CC46A-0F61-4d25-8001-679CF210C135}]uint32_least[/cover]*/
typedef unsigned long       uint32_least;

/* At least 7 bit + 1 bit sign*/
/* [cover parentID={5C0DE046-8407-4708-8D26-41B96731D89D}]sint8_least[/cover]*/
typedef signed long         sint8_least;

/* At least 15 bit + 1 bit sign*/
/* [cover parentID={0A83DB6E-ECD8-42f0-B97C-057F9FBFEB6E}]sint16_least[/cover]*/
typedef signed long         sint16_least;

/* At least 31 bit + 1 bit sign*/
/* [cover parentID={A65F0248-A0A7-4ab7-BAFA-A5428F4E8A96}]sint32_least[/cover]*/
typedef signed long         sint32_least;

/* IEEE754-2008 single precision
* -3.4028235e+38..+3.4028235e+38*/
/* [cover parentID={BBC4F70E-DA81-4d37-BCA4-628A89B29517}] float32  [/cover]*/
typedef float               float32;        /* IEEE754-2008 single precision */

/* IEEE754-2008 double precision
* -1.7976931348623157e+308..+1.7976931348623157e+308*/
/* [cover parentID={0D62172C-9309-493a-8028-06A7299D7906}] float64 [/cover]*/
typedef double              float64;        /* IEEE754-2008 double precision */


/******************************************************************************
**                      Global Constant Declarations                         **
******************************************************************************/

/******************************************************************************
**                      Global Variable Declarations                         **
******************************************************************************/

/******************************************************************************
**                      Global Function Declarations                         **
******************************************************************************/

#endif  /* PLATFORM_TYPES_H */
