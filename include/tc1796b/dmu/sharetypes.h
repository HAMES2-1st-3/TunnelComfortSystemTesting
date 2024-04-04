/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMU_SHARETYPES_H_
#define _HAVE_TRICORE_DMU_SHARETYPES_H_


/********************** DMU_OMASKm_t *************************/
/*
   DMU_OMASK0            "DMU Overlay Mask Register 0"
   DMU_OMASK1            "DMU Overlay Mask Register 1"
   DMU_OMASK10           "DMU Overlay Mask Register 10"
   DMU_OMASK11           "DMU Overlay Mask Register 11"
   DMU_OMASK12           "DMU Overlay Mask Register 12"
   DMU_OMASK13           "DMU Overlay Mask Register 13"
   DMU_OMASK14           "DMU Overlay Mask Register 14"
   DMU_OMASK15           "DMU Overlay Mask Register 15"
   DMU_OMASK2            "DMU Overlay Mask Register 2"
   DMU_OMASK3            "DMU Overlay Mask Register 3"
   DMU_OMASK4            "DMU Overlay Mask Register 4"
   DMU_OMASK5            "DMU Overlay Mask Register 5"
   DMU_OMASK6            "DMU Overlay Mask Register 6"
   DMU_OMASK7            "DMU Overlay Mask Register 7"
   DMU_OMASK8            "DMU Overlay Mask Register 8"
   DMU_OMASK9            "DMU Overlay Mask Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int OMASK:8;             /*  = [1..8] = 0x000001fe */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
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
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMU_OMASKm_t_nonv;

typedef volatile DMU_OMASKm_t_nonv DMU_OMASKm_t;

/********************** DMU_OTARm_t *************************/
/*
   DMU_OTAR0             "DMU Overlay Target Address Register 0"
   DMU_OTAR1             "DMU Overlay Target Address Register 1"
   DMU_OTAR10            "DMU Overlay Target Address Register 10"
   DMU_OTAR11            "DMU Overlay Target Address Register 11"
   DMU_OTAR12            "DMU Overlay Target Address Register 12"
   DMU_OTAR13            "DMU Overlay Target Address Register 13"
   DMU_OTAR14            "DMU Overlay Target Address Register 14"
   DMU_OTAR15            "DMU Overlay Target Address Register 15"
   DMU_OTAR2             "DMU Overlay Target Address Register 2"
   DMU_OTAR3             "DMU Overlay Target Address Register 3"
   DMU_OTAR4             "DMU Overlay Target Address Register 4"
   DMU_OTAR5             "DMU Overlay Target Address Register 5"
   DMU_OTAR6             "DMU Overlay Target Address Register 6"
   DMU_OTAR7             "DMU Overlay Target Address Register 7"
   DMU_OTAR8             "DMU Overlay Target Address Register 8"
   DMU_OTAR9             "DMU Overlay Target Address Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int TBASE:27;            /*  = [1..27] = 0x0ffffffe */
      unsigned int TSEG:4;              /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMU_OTARm_t_nonv;

typedef volatile DMU_OTARm_t_nonv DMU_OTARm_t;

/********************** DMU_RABRm_t *************************/
/*
   DMU_RABR0             "DMU Redirected Address Base Register 0"
   DMU_RABR1             "DMU Redirected Address Base Register 1"
   DMU_RABR10            "DMU Redirected Address Base Register 10"
   DMU_RABR11            "DMU Redirected Address Base Register 11"
   DMU_RABR12            "DMU Redirected Address Base Register 12"
   DMU_RABR13            "DMU Redirected Address Base Register 13"
   DMU_RABR14            "DMU Redireced Address Base Register 14"
   DMU_RABR15            "DMU Redirected Address Base Register 15"
   DMU_RABR2             "DMU Redirected Address Base Register 2"
   DMU_RABR3             "DMU Redirected Address Base Register 3"
   DMU_RABR4             "DMU Redirected Address Base Register 4"
   DMU_RABR5             "DMU Redirected Address Base Register 5"
   DMU_RABR6             "DMU Redirected Address Base Register 6"
   DMU_RABR7             "DMU Redirected Address Base Register 7"
   DMU_RABR8             "DMU Redirected Address Base Register 8"
   DMU_RABR9             "DMU Redirected Address Base Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int OBASE:15;            /*  = [1..15] = 0x0000fffe */
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
} __attribute__((aligned(4))) DMU_RABRm_t_nonv;

typedef volatile DMU_RABRm_t_nonv DMU_RABRm_t;


#endif /* _HAVE_TRICORE_DMU_SHARETYPES_H_ */

