/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MCHK_MASKS_H_
#define _HAVE_TRICORE_MCHK_MASKS_H_


/****************** Masks for MCHK_ID_t **********************/
/*
   MCHK_ID               "MCHK Module Identification Register"
*/
/**********************************************************/

#define MCHK_ID_MASK                    0xffffffff
#define MCHK_ID_MOD_REV_MASK            0x000000ff
#define MCHK_ID_MOD_REV_SHIFT           0
#define MCHK_ID_MOD_TYPE_MASK           0x0000ff00
#define MCHK_ID_MOD_TYPE_SHIFT          8
#define MCHK_ID_MOD_NUMBER_MASK         0xffff0000
#define MCHK_ID_MOD_NUMBER_SHIFT        16



/****************** Masks for MCHK_IR_t **********************/
/*
   MCHK_IR               "MCHK Memory Checker Input Register"
*/
/**********************************************************/

#define MCHK_IR_MASK                    0xffffffff
#define MCHK_IR_MCHKIN_MASK             0xffffffff
#define MCHK_IR_MCHKIN_SHIFT            0



/****************** Masks for MCHK_RR_t **********************/
/*
   MCHK_RR               "Memory Checker Result Register"
*/
/**********************************************************/

#define MCHK_RR_MASK                    0xffffffff
#define MCHK_RR_MCHKR_MASK              0xffffffff
#define MCHK_RR_MCHKR_SHIFT             0



/****************** Masks for MCHK_WR_t **********************/
/*
   MCHK_WR               "Write Register"
*/
/**********************************************************/

#define MCHK_WR_MASK                    0x7fffffff
#define MCHK_WR_WO_MASK                 0x7fffffff
#define MCHK_WR_WO_SHIFT                0




#endif /* _HAVE_TRICORE_MCHK_MASKS_H_ */

