/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_RBCU_SHARETYPES_H_
#define _HAVE_TRICORE_RBCU_SHARETYPES_H_


/********************** RBCU_DBADRm_t *************************/
/*
   RBCU_DBADR1           "RBCU Debug Address  1 Register"
   RBCU_DBADR2           "RBCU Debug Address 2 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADRn:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_DBADRm_t_nonv;

typedef volatile RBCU_DBADRm_t_nonv RBCU_DBADRm_t;


#endif /* _HAVE_TRICORE_RBCU_SHARETYPES_H_ */

