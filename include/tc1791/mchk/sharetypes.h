/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MCHK_SHARETYPES_H_
#define _HAVE_TRICORE_MCHK_SHARETYPES_H_


/********************** MCHK_CRCm_t *************************/
/*
   MCHK_CRC0             "Memory Checker CRC Register"
   MCHK_CRC1             "Memory Checker CRC Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCHKCRC:32;          /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MCHK_CRCm_t_nonv;

typedef volatile MCHK_CRCm_t_nonv MCHK_CRCm_t;

/********************** MCHK_IRm_t *************************/
/*
   MCHK_IR0              "Memory Checker Input Register"
   MCHK_IR1              "Memory Checker Input Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCHKIN:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MCHK_IRm_t_nonv;

typedef volatile MCHK_IRm_t_nonv MCHK_IRm_t;

/********************** MCHK_RRm_t *************************/
/*
   MCHK_RR0              "Memory Checker Result Register"
   MCHK_RR1              "Memory Checker Result Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCHKR:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MCHK_RRm_t_nonv;

typedef volatile MCHK_RRm_t_nonv MCHK_RRm_t;


#endif /* _HAVE_TRICORE_MCHK_SHARETYPES_H_ */

