/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTA0_MASKS_H_
#define _HAVE_TRICORE_GPTA0_MASKS_H_


/****************** Masks for GPTA0_CLC_t **********************/
/*
   GPTA0_CLC             "GPTA Clock Control Register"
*/
/**********************************************************/

#define GPTA0_CLC_MASK                  0x0000003f
#define GPTA0_CLC_DISR_MASK             0x00000001
#define GPTA0_CLC_DISR_SHIFT            0
#define GPTA0_CLC_DISS_MASK             0x00000002
#define GPTA0_CLC_DISS_SHIFT            1
#define GPTA0_CLC_SPEN_MASK             0x00000004
#define GPTA0_CLC_SPEN_SHIFT            2
#define GPTA0_CLC_EDIS_MASK             0x00000008
#define GPTA0_CLC_EDIS_SHIFT            3
#define GPTA0_CLC_SBWE_MASK             0x00000010
#define GPTA0_CLC_SBWE_SHIFT            4
#define GPTA0_CLC_FSOE_MASK             0x00000020
#define GPTA0_CLC_FSOE_SHIFT            5



/****************** Masks for GPTA0_DBGCTR_t **********************/
/*
   GPTA0_DBGCTR          "GPTA Debug Clock Control Register"
*/
/**********************************************************/

#define GPTA0_DBGCTR_MASK               0x8000ffff
#define GPTA0_DBGCTR_CLKCNT_MASK        0x0000ffff
#define GPTA0_DBGCTR_CLKCNT_SHIFT       0
#define GPTA0_DBGCTR_DBGCEN_MASK        0x80000000
#define GPTA0_DBGCTR_DBGCEN_SHIFT       31



/****************** Masks for GPTA0_EDCTR_t **********************/
/*
   GPTA0_EDCTR           "GPTA Clock Enable/Disable Control Register"
*/
/**********************************************************/

#define GPTA0_EDCTR_MASK                0x0000070f
#define GPTA0_EDCTR_GT00RUN_MASK        0x00000001
#define GPTA0_EDCTR_GT00RUN_SHIFT       0
#define GPTA0_EDCTR_GT01RUN_MASK        0x00000002
#define GPTA0_EDCTR_GT01RUN_SHIFT       1
#define GPTA0_EDCTR_GT10RUN_MASK        0x00000004
#define GPTA0_EDCTR_GT10RUN_SHIFT       2
#define GPTA0_EDCTR_GT11RUN_MASK        0x00000008
#define GPTA0_EDCTR_GT11RUN_SHIFT       3
#define GPTA0_EDCTR_G0EN_MASK           0x00000100
#define GPTA0_EDCTR_G0EN_SHIFT          8
#define GPTA0_EDCTR_G1EN_MASK           0x00000200
#define GPTA0_EDCTR_G1EN_SHIFT          9
#define GPTA0_EDCTR_L2EN_MASK           0x00000400
#define GPTA0_EDCTR_L2EN_SHIFT          10



/****************** Masks for GPTA0_FDR_t **********************/
/*
   GPTA0_FDR             "GPTA Fractional Divider Register"
*/
/**********************************************************/

#define GPTA0_FDR_MASK                  0xf3fffbff
#define GPTA0_FDR_STEP_MASK             0x000003ff
#define GPTA0_FDR_STEP_SHIFT            0
#define GPTA0_FDR_SM_MASK               0x00000800
#define GPTA0_FDR_SM_SHIFT              11
#define GPTA0_FDR_SC_MASK               0x00003000
#define GPTA0_FDR_SC_SHIFT              12
#define GPTA0_FDR_DM_MASK               0x0000c000
#define GPTA0_FDR_DM_SHIFT              14
#define GPTA0_FDR_RESULT_MASK           0x03ff0000
#define GPTA0_FDR_RESULT_SHIFT          16
#define GPTA0_FDR_SUSACK_MASK           0x10000000
#define GPTA0_FDR_SUSACK_SHIFT          28
#define GPTA0_FDR_SUSREQ_MASK           0x20000000
#define GPTA0_FDR_SUSREQ_SHIFT          29
#define GPTA0_FDR_ENHW_MASK             0x40000000
#define GPTA0_FDR_ENHW_SHIFT            30
#define GPTA0_FDR_DISCLK_MASK           0x80000000
#define GPTA0_FDR_DISCLK_SHIFT          31



/****************** Masks for GPTA0_MMXCTR11_t **********************/
/*
   GPTA0_MMXCTR11        "GPTA-to-MSC Multiplexer Control Register 11"
*/
/**********************************************************/

#define GPTA0_MMXCTR11_MASK             0x0000ffff
#define GPTA0_MMXCTR11_MUX0_MASK        0x00000003
#define GPTA0_MMXCTR11_MUX0_SHIFT       0
#define GPTA0_MMXCTR11_MUX1_MASK        0x0000000c
#define GPTA0_MMXCTR11_MUX1_SHIFT       2
#define GPTA0_MMXCTR11_MUX2_MASK        0x00000030
#define GPTA0_MMXCTR11_MUX2_SHIFT       4
#define GPTA0_MMXCTR11_MUX3_MASK        0x000000c0
#define GPTA0_MMXCTR11_MUX3_SHIFT       6
#define GPTA0_MMXCTR11_MUX4_MASK        0x00000300
#define GPTA0_MMXCTR11_MUX4_SHIFT       8
#define GPTA0_MMXCTR11_MUX5_MASK        0x00000c00
#define GPTA0_MMXCTR11_MUX5_SHIFT       10
#define GPTA0_MMXCTR11_MUX6_MASK        0x00003000
#define GPTA0_MMXCTR11_MUX6_SHIFT       12
#define GPTA0_MMXCTR11_MUX7_MASK        0x0000c000
#define GPTA0_MMXCTR11_MUX7_SHIFT       14




#endif /* _HAVE_TRICORE_GPTA0_MASKS_H_ */

