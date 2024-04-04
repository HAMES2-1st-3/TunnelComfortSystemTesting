/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_OVC_SHARETYPES_H_
#define _HAVE_TRICORE_OVC_SHARETYPES_H_


/********************** OVC_OMASKm_t *************************/
/*
   OVC_OMASK0            "Overlay Mask Register 0"
   OVC_OMASK1            "Overlay Mask Register 1"
   OVC_OMASK10           "Overlay Mask Register 10"
   OVC_OMASK11           "Overlay Mask Register 11"
   OVC_OMASK12           "Overlay Mask Register 12"
   OVC_OMASK13           "Overlay Mask Register 13"
   OVC_OMASK14           "Overlay Mask Register 14"
   OVC_OMASK15           "Overlay Mask Register 15"
   OVC_OMASK2            "Overlay Mask Register 2"
   OVC_OMASK3            "Overlay Mask Register 3"
   OVC_OMASK4            "Overlay Mask Register 4"
   OVC_OMASK5            "Overlay Mask Register 5"
   OVC_OMASK6            "Overlay Mask Register 6"
   OVC_OMASK7            "Overlay Mask Register 7"
   OVC_OMASK8            "Overlay Mask Register 8"
   OVC_OMASK9            "Overlay Mask Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int OMASK:12;            /*  = [5..16] = 0x0001ffe0 */
      unsigned int ONE:11;              /*  = [17..27] = 0x0ffe0000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) OVC_OMASKm_t_nonv;

typedef volatile OVC_OMASKm_t_nonv OVC_OMASKm_t;

/********************** OVC_OTARm_t *************************/
/*
   OVC_OTAR0             "Overlay Target Address Register 0"
   OVC_OTAR1             "Overlay Target Address Register 1"
   OVC_OTAR10            "Overlay Target Address Register 10"
   OVC_OTAR11            "Overlay Target Address Register 11"
   OVC_OTAR12            "Overlay Target Address Register 12"
   OVC_OTAR13            "Overlay Target Address Register 13"
   OVC_OTAR14            "Overlay Target Address Register 14"
   OVC_OTAR15            "Overlay Target Address Register 15"
   OVC_OTAR2             "Overlay Target Address Register 2"
   OVC_OTAR3             "Overlay Target Address Register 3"
   OVC_OTAR4             "Overlay Target Address Register 4"
   OVC_OTAR5             "Overlay Target Address Register 5"
   OVC_OTAR6             "Overlay Target Address Register 6"
   OVC_OTAR7             "Overlay Target Address Register 7"
   OVC_OTAR8             "Overlay Target Address Register 8"
   OVC_OTAR9             "Overlay Target Address Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int TBASE:23;            /*  = [5..27] = 0x0fffffe0 */
      unsigned int TSEG:4;              /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) OVC_OTARm_t_nonv;

typedef volatile OVC_OTARm_t_nonv OVC_OTARm_t;

/********************** OVC_RABRm_t *************************/
/*
   OVC_RABR0             "Redirected Address Base Register 0"
   OVC_RABR1             "Redirected Address Base Register 1"
   OVC_RABR10            "Redirected Address Base Register 10"
   OVC_RABR11            "Redirected Address Base Register 11"
   OVC_RABR12            "Redirected Address Base Register 12"
   OVC_RABR13            "Redirected Address Base Register 13"
   OVC_RABR14            "Redirected Address Base Register 14"
   OVC_RABR15            "Redirected Address Base Register 15"
   OVC_RABR2             "Redirected Address Base Register 2"
   OVC_RABR3             "Redirected Address Base Register 3"
   OVC_RABR4             "Redirected Address Base Register 4"
   OVC_RABR5             "Redirected Address Base Register 5"
   OVC_RABR6             "Redirected Address Base Register 6"
   OVC_RABR7             "Redirected Address Base Register 7"
   OVC_RABR8             "Redirected Address Base Register 8"
   OVC_RABR9             "Redirected Address Base Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int OBASE:18;            /*  = [5..22] = 0x007fffe0 */
      unsigned int FIXVAL:5;            /*  = [23..27] = 0x0f800000 */
      unsigned int RC0:1;               /*  = [28] = 0x10000000 */
      unsigned int EXOMS:1;             /*  = [29] = 0x20000000 */
      unsigned int IEMS:1;              /*  = [30] = 0x40000000 */
      unsigned int OVEN:1;              /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) OVC_RABRm_t_nonv;

typedef volatile OVC_RABRm_t_nonv OVC_RABRm_t;


#endif /* _HAVE_TRICORE_OVC_SHARETYPES_H_ */

