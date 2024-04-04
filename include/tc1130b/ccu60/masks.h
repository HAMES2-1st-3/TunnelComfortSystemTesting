/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CCU60_MASKS_H_
#define _HAVE_TRICORE_CCU60_MASKS_H_


/****************** Masks for CCU60_CLC_t **********************/
/*
   CCU60_CLC             "CCU60 Clock Control Register"
*/
/**********************************************************/

#define CCU60_CLC_MASK                  0x0000003f
#define CCU60_CLC_DISR_MASK             0x00000001
#define CCU60_CLC_DISR_SHIFT            0
#define CCU60_CLC_DISS_MASK             0x00000002
#define CCU60_CLC_DISS_SHIFT            1
#define CCU60_CLC_SPEN_MASK             0x00000004
#define CCU60_CLC_SPEN_SHIFT            2
#define CCU60_CLC_EDIS_MASK             0x00000008
#define CCU60_CLC_EDIS_SHIFT            3
#define CCU60_CLC_SBWE_MASK             0x00000010
#define CCU60_CLC_SBWE_SHIFT            4
#define CCU60_CLC_FSOE_MASK             0x00000020
#define CCU60_CLC_FSOE_SHIFT            5



/****************** Masks for CCU60_FDR_t **********************/
/*
   CCU60_FDR             "CCU60 Fractional Divider Register"
*/
/**********************************************************/

#define CCU60_FDR_MASK                  0xf3fff3ff
#define CCU60_FDR_STEP_MASK             0x000003ff
#define CCU60_FDR_STEP_SHIFT            0
#define CCU60_FDR_SC_MASK               0x00003000
#define CCU60_FDR_SC_SHIFT              12
#define CCU60_FDR_DM_MASK               0x0000c000
#define CCU60_FDR_DM_SHIFT              14
#define CCU60_FDR_RESULT_MASK           0x03ff0000
#define CCU60_FDR_RESULT_SHIFT          16
#define CCU60_FDR_SUSACK_MASK           0x10000000
#define CCU60_FDR_SUSACK_SHIFT          28
#define CCU60_FDR_SUSREQ_MASK           0x20000000
#define CCU60_FDR_SUSREQ_SHIFT          29
#define CCU60_FDR_ENHW_MASK             0x40000000
#define CCU60_FDR_ENHW_SHIFT            30
#define CCU60_FDR_DISCLK_MASK           0x80000000
#define CCU60_FDR_DISCLK_SHIFT          31




#endif /* _HAVE_TRICORE_CCU60_MASKS_H_ */

