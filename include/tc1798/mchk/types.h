/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MCHK_TYPES_H_
#define _HAVE_TRICORE_MCHK_TYPES_H_


/********************** MCHK_ID_t *************************/
/*
   MCHK_ID               "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MCHK_ID_t_nonv;

typedef volatile MCHK_ID_t_nonv MCHK_ID_t;

/********************** MCHK_WR_t *************************/
/*
   MCHK_WR               "Memory Checker Write Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WO:32;               /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MCHK_WR_t_nonv;

typedef volatile MCHK_WR_t_nonv MCHK_WR_t;


#endif /* _HAVE_TRICORE_MCHK_TYPES_H_ */

