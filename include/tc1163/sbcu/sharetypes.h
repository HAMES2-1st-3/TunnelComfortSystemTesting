/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SBCU_SHARETYPES_H_
#define _HAVE_TRICORE_SBCU_SHARETYPES_H_


/********************** SBCU_DBADRm_t *************************/
/*
   SBCU_DBADR1           "Debug Address1 Register (OCDS)"
   SBCU_DBADR2           "Debug Address2 Register (OCDS)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADRn:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SBCU_DBADRm_t_nonv;

typedef volatile SBCU_DBADRm_t_nonv SBCU_DBADRm_t;


#endif /* _HAVE_TRICORE_SBCU_SHARETYPES_H_ */

