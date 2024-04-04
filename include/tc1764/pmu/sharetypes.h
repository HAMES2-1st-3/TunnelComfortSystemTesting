/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_SHARETYPES_H_
#define _HAVE_TRICORE_PMU_SHARETYPES_H_


/********************** PMU_OMASKm_t *************************/
/*
   PMU_OMASK0            "Overlay Mask Register 0"
   PMU_OMASK1            "Overlay Mask Register 1"
   PMU_OMASK10           "Overlay Mask Register 10"
   PMU_OMASK11           "Overlay Mask Register 11"
   PMU_OMASK12           "Overlay Mask Register 12"
   PMU_OMASK13           "Overlay Mask Register 13"
   PMU_OMASK14           "Overlay Mask Register 14"
   PMU_OMASK15           "Overlay Mask Register 15"
   PMU_OMASK2            "Overlay Mask Register 2"
   PMU_OMASK3            "Overlay Mask Register 3"
   PMU_OMASK4            "Overlay Mask Register 4"
   PMU_OMASK5            "Overlay Mask Register 5"
   PMU_OMASK6            "Overlay Mask Register 6"
   PMU_OMASK7            "Overlay Mask Register 7"
   PMU_OMASK8            "Overlay Mask Register 8"
   PMU_OMASK9            "Overlay Mask Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int OMASK:8;             /*  = [1..8] = 0x000001fe */
      unsigned int ONE:19;              /*  = [9..27] = 0x0ffffe00 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU_OMASKm_t_nonv;

typedef volatile PMU_OMASKm_t_nonv PMU_OMASKm_t;

/********************** PMU_OTARm_t *************************/
/*
   PMU_OTAR0             "Overlay Target Address Register 0"
   PMU_OTAR1             "Overlay Target Address Register 1"
   PMU_OTAR10            "Overlay Target Address Register 10"
   PMU_OTAR11            "Overlay Target Address Register 11"
   PMU_OTAR12            "Overlay Target Address Register 12"
   PMU_OTAR13            "Overlay Target Address Register 13"
   PMU_OTAR14            "Overlay Target Address Register 14"
   PMU_OTAR15            "Overlay Target Address Register 15"
   PMU_OTAR2             "Overlay Target Address Register 2"
   PMU_OTAR3             "Overlay Target Address Register 3"
   PMU_OTAR4             "Overlay Target Address Register 4"
   PMU_OTAR5             "Overlay Target Address Register 5"
   PMU_OTAR6             "Overlay Target Address Register 6"
   PMU_OTAR7             "Overlay Target Address Register 7"
   PMU_OTAR8             "Overlay Target Address Register 8"
   PMU_OTAR9             "Overlay Target Address Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int TBASE:27;            /*  = [1..27] = 0x0ffffffe */
      unsigned int TSEG:4;              /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU_OTARm_t_nonv;

typedef volatile PMU_OTARm_t_nonv PMU_OTARm_t;

/********************** PMU_RABRm_t *************************/
/*
   PMU_RABR0             "Redirected Address Base Register 0"
   PMU_RABR1             "Redirected Address Base Register 1"
   PMU_RABR10            "Redirected Address Base Register 10"
   PMU_RABR11            "Redirected Address Base Register 11"
   PMU_RABR12            "Redirected Address Base Register 12"
   PMU_RABR13            "Redirected Address Base Register 13"
   PMU_RABR14            "Redirected Address Base Register 14"
   PMU_RABR15            "Redirected Address Base Register 15"
   PMU_RABR2             "Redirected Address Base Register 2"
   PMU_RABR3             "Redirected Address Base Register 3"
   PMU_RABR4             "Redirected Address Base Register 4"
   PMU_RABR5             "Redirected Address Base Register 5"
   PMU_RABR6             "Redirected Address Base Register 6"
   PMU_RABR7             "Redirected Address Base Register 7"
   PMU_RABR8             "Redirected Address Base Register 8"
   PMU_RABR9             "Redirected Address Base Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int OBASE:12;            /*  = [1..12] = 0x00001ffe */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
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
      unsigned int RC0:1;               /*  = [28..28] = 0x10000000 */
      unsigned int RC1:1;               /*  = [29..29] = 0x20000000 */
      unsigned int IEMS:1;              /*  = [30..30] = 0x40000000 */
      unsigned int OVEN:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU_RABRm_t_nonv;

typedef volatile PMU_RABRm_t_nonv PMU_RABRm_t;


#endif /* _HAVE_TRICORE_PMU_SHARETYPES_H_ */

