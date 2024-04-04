/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_OVC_SHAREMASKS_H_
#define _HAVE_TRICORE_OVC_SHAREMASKS_H_


/****************** Masks for OVC_OMASKm_t **********************/
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

#define OVC_OMASKm_MASK                 0x0ffffff0
#define OVC_OMASKm_OMASK_MASK           0x000007f0
#define OVC_OMASKm_OMASK_SHIFT          4
#define OVC_OMASKm_ONE_MASK             0x0ffff800
#define OVC_OMASKm_ONE_SHIFT            11



/****************** Masks for OVC_OTARm_t **********************/
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

#define OVC_OTARm_MASK                  0xfffffff0
#define OVC_OTARm_TBASE_MASK            0x0ffffff0
#define OVC_OTARm_TBASE_SHIFT           4
#define OVC_OTARm_TSEG_MASK             0xf0000000
#define OVC_OTARm_TSEG_SHIFT            28



/****************** Masks for OVC_RABRm_t **********************/
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

#define OVC_RABRm_MASK                  0xffff1ff0
#define OVC_RABRm_OBASE_MASK            0x00001ff0
#define OVC_RABRm_OBASE_SHIFT           4
#define OVC_RABRm_FIXVAL_MASK           0x0fff0000
#define OVC_RABRm_FIXVAL_SHIFT          16
#define OVC_RABRm_RC0_MASK              0x10000000
#define OVC_RABRm_RC0_SHIFT             28
#define OVC_RABRm_RC1_MASK              0x20000000
#define OVC_RABRm_RC1_SHIFT             29
#define OVC_RABRm_IEMS_MASK             0x40000000
#define OVC_RABRm_IEMS_SHIFT            30
#define OVC_RABRm_OVEN_MASK             0x80000000
#define OVC_RABRm_OVEN_SHIFT            31




#endif /* _HAVE_TRICORE_OVC_SHAREMASKS_H_ */

