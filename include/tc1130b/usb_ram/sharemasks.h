/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_RAM_SHAREMASKS_H_
#define _HAVE_TRICORE_USB_RAM_SHAREMASKS_H_


/****************** Masks for USB_EPBCm_t **********************/
/*
   USB_EPBC0             "Endpoint 0 Buffer Control register"
   USB_EPBC1             "Endpoint 1 Buffer Control register"
   USB_EPBC10            "Endpoint 10 Buffer Control register"
   USB_EPBC11            "Endpoint 11 Buffer Control register"
   USB_EPBC12            "Endpoint 12 Buffer Control register"
   USB_EPBC13            "Endpoint 13 Buffer Control register"
   USB_EPBC14            "Endpoint 14 Buffer Control register"
   USB_EPBC15            "Endpoint 15 Buffer Control register"
   USB_EPBC2             "Endpoint 2 Buffer Control register"
   USB_EPBC3             "Endpoint 3 Buffer Control register"
   USB_EPBC4             "Endpoint 4 Buffer Control register"
   USB_EPBC5             "Endpoint 5 Buffer Control register"
   USB_EPBC6             "Endpoint 6 Buffer Control register"
   USB_EPBC7             "Endpoint 7 Buffer Control register"
   USB_EPBC8             "Endpoint 8 Buffer Control register"
   USB_EPBC9             "Endpoint 9 Buffer Control register"
*/
/**********************************************************/

#define USB_EPBCm_MASK                  0x1fff1fff
#define USB_EPBCm_WRNn_MASK             0x00001fff
#define USB_EPBCm_WRNn_SHIFT            0
#define USB_EPBCm_NEBn_MASK             0x1fff0000
#define USB_EPBCm_NEBn_SHIFT            16



/****************** Masks for USB_EPCPm_t **********************/
/*
   USB_EPCP0             "Endpoint 0 CPU pointer register"
   USB_EPCP1             "Endpoint 1 CPU pointer register"
   USB_EPCP10            "Endpoint 10 CPU Pointer Register"
   USB_EPCP11            "Endpoint 11 CPU Pointer Register"
   USB_EPCP12            "Endpoint 12 CPU Pointer Register"
   USB_EPCP13            "Endpoint 13 CPU Pointer Register"
   USB_EPCP14            "Endpoint 14 CPU Pointer Register"
   USB_EPCP15            "Endpoint 15 CPU Pointer Register"
   USB_EPCP2             "Endpoint 2 CPU Pointer Register"
   USB_EPCP3             "Endpoint 3 CPU Pointer Register"
   USB_EPCP4             "Endpoint 4 CPU Pointer Register"
   USB_EPCP5             "Endpoint 5 CPU Pointer Register"
   USB_EPCP6             "Endpoint 6 CPU Pointer Register"
   USB_EPCP7             "Endpoint 7 CPU Pointer Register"
   USB_EPCP8             "Endpoint 8 CPU Pointer Register"
   USB_EPCP9             "Endpoint 9 CPU Pointer Register"
*/
/**********************************************************/

#define USB_EPCPm_MASK                  0xfffffff9
#define USB_EPCPm_UAVMn_MASK            0x00000001
#define USB_EPCPm_UAVMn_SHIFT           0
#define USB_EPCPm_BSZn_MASK             0x0000fff8
#define USB_EPCPm_BSZn_SHIFT            3
#define USB_EPCPm_CAPn_MASK             0xffff0000
#define USB_EPCPm_CAPn_SHIFT            16



/****************** Masks for USB_EPICm_t **********************/
/*
   USB_EPIC0             "Endpoint 0 Interrupt Control register"
   USB_EPIC1             "Endpoint 1 Interrupt Control register"
   USB_EPIC10            "Endpoint 10 Interrupt Control Register"
   USB_EPIC11            "Endpoint 11 Interrupt Control Register"
   USB_EPIC12            "Endpoint 12 Interrupt Control Register"
   USB_EPIC13            "Endpoint 13 Interrupt Control Register"
   USB_EPIC14            "Endpoint 14 Interrupt Control Register"
   USB_EPIC15            "Endpoint 15 Interrupt Control Register"
   USB_EPIC2             "Endpoint 2 Interrupt Control Register"
   USB_EPIC3             "Endpoint 3 Interrupt Control Register"
   USB_EPIC4             "Endpoint 4 Interrupt Control Register"
   USB_EPIC5             "Endpoint 5 Interrupt Control Register"
   USB_EPIC6             "Endpoint 6 Interrupt Control Register"
   USB_EPIC7             "Endpoint 7 Interrupt Control Register"
   USB_EPIC8             "Endpoint 8 Interrupt Control Register"
   USB_EPIC9             "Endpoint 9 Interrupt Control Register"
*/
/**********************************************************/

#define USB_EPICm_MASK                  0x7777001f
#define USB_EPICm_ACKEn_MASK            0x00000001
#define USB_EPICm_ACKEn_SHIFT           0
#define USB_EPICm_NACKEn_MASK           0x00000002
#define USB_EPICm_NACKEn_SHIFT          1
#define USB_EPICm_BNREn_MASK            0x00000004
#define USB_EPICm_BNREn_SHIFT           2
#define USB_EPICm_WNIEn_MASK            0x00000008
#define USB_EPICm_WNIEn_SHIFT           3
#define USB_EPICm_TRIEn_MASK            0x00000010
#define USB_EPICm_TRIEn_SHIFT           4
#define USB_EPICm_INP4_MASK             0x00070000
#define USB_EPICm_INP4_SHIFT            16
#define USB_EPICm_INP5_MASK             0x00700000
#define USB_EPICm_INP5_SHIFT            20
#define USB_EPICm_INP6_MASK             0x07000000
#define USB_EPICm_INP6_SHIFT            24
#define USB_EPICm_INP7_MASK             0x70000000
#define USB_EPICm_INP7_SHIFT            28



/****************** Masks for USB_EPUPm_t **********************/
/*
   USB_EPUP0             "Endpoint n USB pointer register"
   USB_EPUP1             "Endpoint 1 USB pointer register"
   USB_EPUP10            "Endpoint 10 USB pointer register"
   USB_EPUP11            "Endpoint 11 USB pointer register"
   USB_EPUP12            "Endpoint 12 USB pointer register"
   USB_EPUP13            "Endpoint 13 USB pointer register"
   USB_EPUP14            "Endpoint 14 USB pointer register"
   USB_EPUP15            "Endpoint 15 USB pointer register"
   USB_EPUP2             "Endpoint 2 USB pointer register"
   USB_EPUP3             "Endpoint 3 USB pointer register"
   USB_EPUP4             "Endpoint 4 USB pointer register"
   USB_EPUP5             "Endpoint 5 USB pointer register"
   USB_EPUP6             "Endpoint 6 USB pointer register"
   USB_EPUP7             "Endpoint 7 USB pointer register"
   USB_EPUP8             "Endpoint 8 USB pointer register"
   USB_EPUP9             "Endpoint 9 USB pointer register"
*/
/**********************************************************/

#define USB_EPUPm_MASK                  0xffffffff
#define USB_EPUPm_PSZn_MASK             0x00000007
#define USB_EPUPm_PSZn_SHIFT            0
#define USB_EPUPm_BSPn_MASK             0x0000fff8
#define USB_EPUPm_BSPn_SHIFT            3
#define USB_EPUPm_UAPn_MASK             0xffff0000
#define USB_EPUPm_UAPn_SHIFT            16




#endif /* _HAVE_TRICORE_USB_RAM_SHAREMASKS_H_ */

