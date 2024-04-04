/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMU_SHARETYPES_H_
#define _HAVE_TRICORE_DMU_SHARETYPES_H_


/********************** DMU_SRARm_t *************************/
/*
   DMU_SRAR0             "SRAM Redundancy Address"
   DMU_SRAR1             "SRAM Redundancy Address"
   DMU_SRAR10            "SRAM Redundancy Address"
   DMU_SRAR11            "SRAM Redundancy Address"
   DMU_SRAR12            "SRAM Redundancy Address"
   DMU_SRAR13            "SRAM Redundancy Address"
   DMU_SRAR14            "SRAM Redundancy Address"
   DMU_SRAR15            "SRAM Redundancy Address"
   DMU_SRAR16            "SRAM Redundancy Address"
   DMU_SRAR17            "SRAM Redundancy Address"
   DMU_SRAR18            "SRAM Redundancy Address"
   DMU_SRAR19            "SRAM Redundancy Address"
   DMU_SRAR2             "SRAM Redundancy Address"
   DMU_SRAR20            "SRAM Redundancy Address"
   DMU_SRAR21            "SRAM Redundancy Address"
   DMU_SRAR22            "SRAM Redundancy Address"
   DMU_SRAR23            "SRAM Redundancy Address"
   DMU_SRAR3             "SRAM Redundancy Address"
   DMU_SRAR4             "SRAM Redundancy Address"
   DMU_SRAR5             "SRAM Redundancy Address"
   DMU_SRAR6             "SRAM Redundancy Address"
   DMU_SRAR7             "SRAM Redundancy Address"
   DMU_SRAR8             "SRAM Redundancy Address"
   DMU_SRAR9             "SRAM Redundancy Address"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FADDR:14;            /*  = [0..13] = 0x00003fff */
      unsigned int VA:1;                /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMU_SRARm_t_nonv;

typedef volatile DMU_SRARm_t_nonv DMU_SRARm_t;


#endif /* _HAVE_TRICORE_DMU_SHARETYPES_H_ */

