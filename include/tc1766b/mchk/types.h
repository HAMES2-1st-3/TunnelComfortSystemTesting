/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MCHK_TYPES_H_
#define _HAVE_TRICORE_MCHK_TYPES_H_


/********************** MCHK_ID_t *************************/
/*
   MCHK_ID               "MCHK Module Identification Register"
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

/********************** MCHK_IR_t *************************/
/*
   MCHK_IR               "MCHK Memory Checker Input Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCHKIN:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MCHK_IR_t_nonv;

typedef volatile MCHK_IR_t_nonv MCHK_IR_t;

/********************** MCHK_RR_t *************************/
/*
   MCHK_RR               "Memory Checker Result Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCHKR:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MCHK_RR_t_nonv;

typedef volatile MCHK_RR_t_nonv MCHK_RR_t;

/********************** MCHK_WR_t *************************/
/*
   MCHK_WR               "Write Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WO:31;               /*  = [0..30] = 0x7fffffff */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MCHK_WR_t_nonv;

typedef volatile MCHK_WR_t_nonv MCHK_WR_t;


#endif /* _HAVE_TRICORE_MCHK_TYPES_H_ */

