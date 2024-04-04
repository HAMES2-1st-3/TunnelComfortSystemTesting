/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_SHAREMASKS_H_
#define _HAVE_TRICORE_PMU_SHAREMASKS_H_


/****************** Masks for PMU_OMASKm_t **********************/
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

#define PMU_OMASKm_MASK                 0x0ffffffe
#define PMU_OMASKm_OMASK_MASK           0x000001fe
#define PMU_OMASKm_OMASK_SHIFT          1
#define PMU_OMASKm_ONE_MASK             0x0ffffe00
#define PMU_OMASKm_ONE_SHIFT            9



/****************** Masks for PMU_OTARm_t **********************/
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

#define PMU_OTARm_MASK                  0xfffffffe
#define PMU_OTARm_TBASE_MASK            0x0ffffffe
#define PMU_OTARm_TBASE_SHIFT           1
#define PMU_OTARm_TSEG_MASK             0xf0000000
#define PMU_OTARm_TSEG_SHIFT            28



/****************** Masks for PMU_RABRm_t **********************/
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

#define PMU_RABRm_MASK                  0xf0001ffe
#define PMU_RABRm_OBASE_MASK            0x00001ffe
#define PMU_RABRm_OBASE_SHIFT           1
#define PMU_RABRm_RC0_MASK              0x10000000
#define PMU_RABRm_RC0_SHIFT             28
#define PMU_RABRm_RC1_MASK              0x20000000
#define PMU_RABRm_RC1_SHIFT             29
#define PMU_RABRm_IEMS_MASK             0x40000000
#define PMU_RABRm_IEMS_SHIFT            30
#define PMU_RABRm_OVEN_MASK             0x80000000
#define PMU_RABRm_OVEN_SHIFT            31




#endif /* _HAVE_TRICORE_PMU_SHAREMASKS_H_ */

