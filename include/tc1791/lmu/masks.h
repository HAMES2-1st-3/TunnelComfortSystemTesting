/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LMU_MASKS_H_
#define _HAVE_TRICORE_LMU_MASKS_H_


/****************** Masks for LMU_CLC_t **********************/
/*
   LMU_CLC               "LMU Clock Control Register"
*/
/**********************************************************/

#define LMU_CLC_MASK                    0x00000003
#define LMU_CLC_DISR_MASK               0x00000001
#define LMU_CLC_DISR_SHIFT              0
#define LMU_CLC_DISS_MASK               0x00000002
#define LMU_CLC_DISS_SHIFT              1



/****************** Masks for LMU_MEMCON_t **********************/
/*
   LMU_MEMCON            "LMU Memory Control Register"
*/
/**********************************************************/

#define LMU_MEMCON_MASK                 0xff009583
#define LMU_MEMCON_OLDAEN_MASK          0x00000001
#define LMU_MEMCON_OLDAEN_SHIFT         0
#define LMU_MEMCON_POLDAEN_MASK         0x00000002
#define LMU_MEMCON_POLDAEN_SHIFT        1
#define LMU_MEMCON_ADDERR_MASK          0x00000080
#define LMU_MEMCON_ADDERR_SHIFT         7
#define LMU_MEMCON_PMIC_MASK            0x00000100
#define LMU_MEMCON_PMIC_SHIFT           8
#define LMU_MEMCON_DED_EN_MASK          0x00000400
#define LMU_MEMCON_DED_EN_SHIFT         10
#define LMU_MEMCON_ERRDIS_MASK          0x00001000
#define LMU_MEMCON_ERRDIS_SHIFT         12
#define LMU_MEMCON_DBERR_MASK           0x00008000
#define LMU_MEMCON_DBERR_SHIFT          15
#define LMU_MEMCON_ECCR_MASK            0xff000000
#define LMU_MEMCON_ECCR_SHIFT           24



/****************** Masks for LMU_MODID_t **********************/
/*
   LMU_MODID             "LMU Module ID Register"
*/
/**********************************************************/

#define LMU_MODID_MASK                  0xffffffff
#define LMU_MODID_ID_VALUE_MASK         0xffffffff
#define LMU_MODID_ID_VALUE_SHIFT        0




#endif /* _HAVE_TRICORE_LMU_MASKS_H_ */

