/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMU_SHAREMASKS_H_
#define _HAVE_TRICORE_DMU_SHAREMASKS_H_


/****************** Masks for DMU_SRARm_t **********************/
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

#define DMU_SRARm_MASK                  0x00007fff
#define DMU_SRARm_FADDR_MASK            0x00003fff
#define DMU_SRARm_FADDR_SHIFT           0
#define DMU_SRARm_VA_MASK               0x00004000
#define DMU_SRARm_VA_SHIFT              14




#endif /* _HAVE_TRICORE_DMU_SHAREMASKS_H_ */

