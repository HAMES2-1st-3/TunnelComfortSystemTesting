/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTU_SHAREMASKS_H_
#define _HAVE_TRICORE_GPTU_SHAREMASKS_H_


/****************** Masks for GPTU_SRCm_t **********************/
/*
   GPTU_SRC0             "GPTU Service Request Control Register 0"
   GPTU_SRC1             "GPTU Service Request Control Register 1"
   GPTU_SRC2             "GPTU Service Request Control Register 2"
   GPTU_SRC3             "GPTU Service Request Control Register 3"
   GPTU_SRC4             "GPTU Service Request Control Register 4"
   GPTU_SRC5             "GPTU Service Request Control Register 5"
   GPTU_SRC6             "GPTU Service Request Control Register 6"
   GPTU_SRC7             "GPTU Service Request Control Register 7"
*/
/**********************************************************/

#define GPTU_SRCm_MASK                  0x0000f4ff
#define GPTU_SRCm_SRPN_MASK             0x000000ff
#define GPTU_SRCm_SRPN_SHIFT            0
#define GPTU_SRCm_TOS_MASK              0x00000400
#define GPTU_SRCm_TOS_SHIFT             10
#define GPTU_SRCm_SRE_MASK              0x00001000
#define GPTU_SRCm_SRE_SHIFT             12
#define GPTU_SRCm_SRR_MASK              0x00002000
#define GPTU_SRCm_SRR_SHIFT             13
#define GPTU_SRCm_CLRR_MASK             0x00004000
#define GPTU_SRCm_CLRR_SHIFT            14
#define GPTU_SRCm_SETR_MASK             0x00008000
#define GPTU_SRCm_SETR_SHIFT            15




#endif /* _HAVE_TRICORE_GPTU_SHAREMASKS_H_ */

