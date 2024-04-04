/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MCHK_SHAREMASKS_H_
#define _HAVE_TRICORE_MCHK_SHAREMASKS_H_


/****************** Masks for MCHK_CRCm_t **********************/
/*
   MCHK_CRC0             "Memory Checker CRC Register"
   MCHK_CRC1             "Memory Checker CRC Register"
*/
/**********************************************************/

#define MCHK_CRCm_MASK                  0xffffffff
#define MCHK_CRCm_MCHKCRC_MASK          0xffffffff
#define MCHK_CRCm_MCHKCRC_SHIFT         0



/****************** Masks for MCHK_IRm_t **********************/
/*
   MCHK_IR0              "Memory Checker Input Register"
   MCHK_IR1              "Memory Checker Input Register"
*/
/**********************************************************/

#define MCHK_IRm_MASK                   0xffffffff
#define MCHK_IRm_MCHKIN_MASK            0xffffffff
#define MCHK_IRm_MCHKIN_SHIFT           0



/****************** Masks for MCHK_RRm_t **********************/
/*
   MCHK_RR0              "Memory Checker Result Register"
   MCHK_RR1              "Memory Checker Result Register"
*/
/**********************************************************/

#define MCHK_RRm_MASK                   0xffffffff
#define MCHK_RRm_MCHKR_MASK             0xffffffff
#define MCHK_RRm_MCHKR_SHIFT            0




#endif /* _HAVE_TRICORE_MCHK_SHAREMASKS_H_ */

