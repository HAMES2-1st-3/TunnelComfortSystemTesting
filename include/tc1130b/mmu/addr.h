/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MMU" of TriCore TC1130B (7 SFRs) */

#ifndef _HAVE_TRICORE_MMU_ADDRESSES_H_
#define _HAVE_TRICORE_MMU_ADDRESSES_H_

#define MMU_CON_ADDR          0xF7E18000     /* "MMU Configuration Register" */
#define MMU_ASI_ADDR          0xF7E18004     /* "MMU Address Space Identifier Register" */
#define MMU_ID_ADDR           0xF7E18008     /* "MMU Identification Register" */
#define MMU_TVA_ADDR          0xF7E1800C     /* "MMU Translation Virtual Address Register" */
#define MMU_TPA_ADDR          0xF7E18010     /* "MMU Translation Physical Address Register" */
#define MMU_TPX_ADDR          0xF7E18014     /* "MMU Translation Page Index Register" */
#define MMU_TFA_ADDR          0xF7E18018     /* "MMU Translation Fault Address Register" */


#endif /* _HAVE_TRICORE_MMU_ADDRESSES_H_ (block "MMU") */


