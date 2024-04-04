/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_TYPES_H_
#define _HAVE_TRICORE_PMU_TYPES_H_


/********************** PMU_CSCACTL_t *************************/
/*
   PMU_CSCACTL           "CPU SRAM Control Array Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CA0EN:1;             /*  = [0..0] = 0x00000001 */
      unsigned int CA1EN:1;             /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int BCCH0:8;             /*  = [16..23] = 0x00ff0000 */
      unsigned int BCCH1:8;             /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU_CSCACTL_t_nonv;

typedef volatile PMU_CSCACTL_t_nonv PMU_CSCACTL_t;

/********************** PMU_CSCADIN_t *************************/
/*
   PMU_CSCADIN           "CPU SRAM Control Array Data In Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DICH0:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int DICH1:16;            /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU_CSCADIN_t_nonv;

typedef volatile PMU_CSCADIN_t_nonv PMU_CSCADIN_t;

/********************** PMU_CSCADOUT_t *************************/
/*
   PMU_CSCADOUT          "CPU SRAM Control Array Data Out Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DOCH0:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int DOCH1:16;            /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU_CSCADOUT_t_nonv;

typedef volatile PMU_CSCADOUT_t_nonv PMU_CSCADOUT_t;

/********************** PMU_ID_t *************************/
/*
   PMU_ID                "PMU Module Identification Register (LL)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int Mod_Rev:8;           /*  = [0..7] = 0x000000ff */
      unsigned int Mod_Type:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int Mod_Number:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU_ID_t_nonv;

typedef volatile PMU_ID_t_nonv PMU_ID_t;


#endif /* _HAVE_TRICORE_PMU_TYPES_H_ */

