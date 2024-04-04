/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMU_SHAREMASKS_H_
#define _HAVE_TRICORE_DMU_SHAREMASKS_H_


/****************** Masks for DMU_OMASKm_t **********************/
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

#define DMU_OMASKm_MASK                 0x000001fe
#define DMU_OMASKm_OMASK_MASK           0x000001fe
#define DMU_OMASKm_OMASK_SHIFT          1



/****************** Masks for DMU_OTARm_t **********************/
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

#define DMU_OTARm_MASK                  0xfffffffe
#define DMU_OTARm_TBASE_MASK            0x0ffffffe
#define DMU_OTARm_TBASE_SHIFT           1
#define DMU_OTARm_TSEG_MASK             0xf0000000
#define DMU_OTARm_TSEG_SHIFT            28



/****************** Masks for DMU_RABRm_t **********************/
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

#define DMU_RABRm_MASK                  0xf000fffe
#define DMU_RABRm_OBASE_MASK            0x0000fffe
#define DMU_RABRm_OBASE_SHIFT           1
#define DMU_RABRm_RC0_MASK              0x10000000
#define DMU_RABRm_RC0_SHIFT             28
#define DMU_RABRm_RC1_MASK              0x20000000
#define DMU_RABRm_RC1_SHIFT             29
#define DMU_RABRm_IEMS_MASK             0x40000000
#define DMU_RABRm_IEMS_SHIFT            30
#define DMU_RABRm_OVEN_MASK             0x80000000
#define DMU_RABRm_OVEN_SHIFT            31




#endif /* _HAVE_TRICORE_DMU_SHAREMASKS_H_ */

