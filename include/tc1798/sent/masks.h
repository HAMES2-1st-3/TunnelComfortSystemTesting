/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SENT_MASKS_H_
#define _HAVE_TRICORE_SENT_MASKS_H_


/****************** Masks for SENT_CLC_t **********************/
/*
   SENT_CLC              "SENT Clock Control Register"
*/
/**********************************************************/

#define SENT_CLC_MASK                   0x0000003f
#define SENT_CLC_DISR_MASK              0x00000001
#define SENT_CLC_DISR_SHIFT             0
#define SENT_CLC_DISS_MASK              0x00000002
#define SENT_CLC_DISS_SHIFT             1
#define SENT_CLC_SPEN_MASK              0x00000004
#define SENT_CLC_SPEN_SHIFT             2
#define SENT_CLC_EDIS_MASK              0x00000008
#define SENT_CLC_EDIS_SHIFT             3
#define SENT_CLC_SBWE_MASK              0x00000010
#define SENT_CLC_SBWE_SHIFT             4
#define SENT_CLC_FSOE_MASK              0x00000020
#define SENT_CLC_FSOE_SHIFT             5



/****************** Masks for SENT_FDR_t **********************/
/*
   SENT_FDR              "SENT Fractional Divider Register"
*/
/**********************************************************/

#define SENT_FDR_MASK                   0x03ffc7ff
#define SENT_FDR_STEP_MASK              0x000003ff
#define SENT_FDR_STEP_SHIFT             0
#define SENT_FDR_FDIS_MASK              0x00000400
#define SENT_FDR_FDIS_SHIFT             10
#define SENT_FDR_DM_MASK                0x0000c000
#define SENT_FDR_DM_SHIFT               14
#define SENT_FDR_RESULT_MASK            0x03ff0000
#define SENT_FDR_RESULT_SHIFT           16



/****************** Masks for SENT_ID_t **********************/
/*
   SENT_ID               "Module Identification Register"
*/
/**********************************************************/

#define SENT_ID_MASK                    0xffffffff
#define SENT_ID_MODREV_MASK             0x000000ff
#define SENT_ID_MODREV_SHIFT            0
#define SENT_ID_MODTYPE_MASK            0x0000ff00
#define SENT_ID_MODTYPE_SHIFT           8
#define SENT_ID_MODNUM_MASK             0xffff0000
#define SENT_ID_MODNUM_SHIFT            16



/****************** Masks for SENT_INTOV_t **********************/
/*
   SENT_INTOV            "Interrupt Overview Register"
*/
/**********************************************************/

#define SENT_INTOV_MASK                 0x000000ff
#define SENT_INTOV_IPC0_MASK            0x00000001
#define SENT_INTOV_IPC0_SHIFT           0
#define SENT_INTOV_IPC1_MASK            0x00000002
#define SENT_INTOV_IPC1_SHIFT           1
#define SENT_INTOV_IPC2_MASK            0x00000004
#define SENT_INTOV_IPC2_SHIFT           2
#define SENT_INTOV_IPC3_MASK            0x00000008
#define SENT_INTOV_IPC3_SHIFT           3
#define SENT_INTOV_IPC4_MASK            0x00000010
#define SENT_INTOV_IPC4_SHIFT           4
#define SENT_INTOV_IPC5_MASK            0x00000020
#define SENT_INTOV_IPC5_SHIFT           5
#define SENT_INTOV_IPC6_MASK            0x00000040
#define SENT_INTOV_IPC6_SHIFT           6
#define SENT_INTOV_IPC7_MASK            0x00000080
#define SENT_INTOV_IPC7_SHIFT           7




#endif /* _HAVE_TRICORE_SENT_MASKS_H_ */

