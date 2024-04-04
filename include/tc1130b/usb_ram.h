/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "USB RAM" of TriCore TC1130B (66 SFRs) */

#include <tc1130b/usb_ram/addr.h>

#include <tc1130b/usb_ram/masks.h>
#include <tc1130b/usb_ram/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/usb_ram/types.h>
#include <tc1130b/usb_ram/sharetypes.h>

#ifndef _HAVE_TRICORE_USB_RAM_H_
#define _HAVE_TRICORE_USB_RAM_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (USB_EPBC0, USB_EPBCm_t, USB_EPBC0_ADDR); /* "Endpoint 0 Buffer Control register" */
SFR_NOABS (USB_EPBC1, USB_EPBCm_t, USB_EPBC1_ADDR); /* "Endpoint 1 Buffer Control register" */
SFR_NOABS (USB_EPBC10, USB_EPBCm_t, USB_EPBC10_ADDR); /* "Endpoint 10 Buffer Control register" */
SFR_NOABS (USB_EPBC11, USB_EPBCm_t, USB_EPBC11_ADDR); /* "Endpoint 11 Buffer Control register" */
SFR_NOABS (USB_EPBC12, USB_EPBCm_t, USB_EPBC12_ADDR); /* "Endpoint 12 Buffer Control register" */
SFR_NOABS (USB_EPBC13, USB_EPBCm_t, USB_EPBC13_ADDR); /* "Endpoint 13 Buffer Control register" */
SFR_NOABS (USB_EPBC14, USB_EPBCm_t, USB_EPBC14_ADDR); /* "Endpoint 14 Buffer Control register" */
SFR_NOABS (USB_EPBC15, USB_EPBCm_t, USB_EPBC15_ADDR); /* "Endpoint 15 Buffer Control register" */
SFR_NOABS (USB_EPBC2, USB_EPBCm_t, USB_EPBC2_ADDR); /* "Endpoint 2 Buffer Control register" */
SFR_NOABS (USB_EPBC3, USB_EPBCm_t, USB_EPBC3_ADDR); /* "Endpoint 3 Buffer Control register" */
SFR_NOABS (USB_EPBC4, USB_EPBCm_t, USB_EPBC4_ADDR); /* "Endpoint 4 Buffer Control register" */
SFR_NOABS (USB_EPBC5, USB_EPBCm_t, USB_EPBC5_ADDR); /* "Endpoint 5 Buffer Control register" */
SFR_NOABS (USB_EPBC6, USB_EPBCm_t, USB_EPBC6_ADDR); /* "Endpoint 6 Buffer Control register" */
SFR_NOABS (USB_EPBC7, USB_EPBCm_t, USB_EPBC7_ADDR); /* "Endpoint 7 Buffer Control register" */
SFR_NOABS (USB_EPBC8, USB_EPBCm_t, USB_EPBC8_ADDR); /* "Endpoint 8 Buffer Control register" */
SFR_NOABS (USB_EPBC9, USB_EPBCm_t, USB_EPBC9_ADDR); /* "Endpoint 9 Buffer Control register" */
SFR_NOABS (USB_EPCP0, USB_EPCPm_t, USB_EPCP0_ADDR); /* "Endpoint 0 CPU pointer register" */
SFR_NOABS (USB_EPCP1, USB_EPCPm_t, USB_EPCP1_ADDR); /* "Endpoint 1 CPU pointer register" */
SFR_NOABS (USB_EPCP10, USB_EPCPm_t, USB_EPCP10_ADDR); /* "Endpoint 10 CPU Pointer Register" */
SFR_NOABS (USB_EPCP11, USB_EPCPm_t, USB_EPCP11_ADDR); /* "Endpoint 11 CPU Pointer Register" */
SFR_NOABS (USB_EPCP12, USB_EPCPm_t, USB_EPCP12_ADDR); /* "Endpoint 12 CPU Pointer Register" */
SFR_NOABS (USB_EPCP13, USB_EPCPm_t, USB_EPCP13_ADDR); /* "Endpoint 13 CPU Pointer Register" */
SFR_NOABS (USB_EPCP14, USB_EPCPm_t, USB_EPCP14_ADDR); /* "Endpoint 14 CPU Pointer Register" */
SFR_NOABS (USB_EPCP15, USB_EPCPm_t, USB_EPCP15_ADDR); /* "Endpoint 15 CPU Pointer Register" */
SFR_NOABS (USB_EPCP2, USB_EPCPm_t, USB_EPCP2_ADDR); /* "Endpoint 2 CPU Pointer Register" */
SFR_NOABS (USB_EPCP3, USB_EPCPm_t, USB_EPCP3_ADDR); /* "Endpoint 3 CPU Pointer Register" */
SFR_NOABS (USB_EPCP4, USB_EPCPm_t, USB_EPCP4_ADDR); /* "Endpoint 4 CPU Pointer Register" */
SFR_NOABS (USB_EPCP5, USB_EPCPm_t, USB_EPCP5_ADDR); /* "Endpoint 5 CPU Pointer Register" */
SFR_NOABS (USB_EPCP6, USB_EPCPm_t, USB_EPCP6_ADDR); /* "Endpoint 6 CPU Pointer Register" */
SFR_NOABS (USB_EPCP7, USB_EPCPm_t, USB_EPCP7_ADDR); /* "Endpoint 7 CPU Pointer Register" */
SFR_NOABS (USB_EPCP8, USB_EPCPm_t, USB_EPCP8_ADDR); /* "Endpoint 8 CPU Pointer Register" */
SFR_NOABS (USB_EPCP9, USB_EPCPm_t, USB_EPCP9_ADDR); /* "Endpoint 9 CPU Pointer Register" */
SFR_NOABS (USB_EPIC0, USB_EPICm_t, USB_EPIC0_ADDR); /* "Endpoint 0 Interrupt Control register" */
SFR_NOABS (USB_EPIC1, USB_EPICm_t, USB_EPIC1_ADDR); /* "Endpoint 1 Interrupt Control register" */
SFR_NOABS (USB_EPIC10, USB_EPICm_t, USB_EPIC10_ADDR); /* "Endpoint 10 Interrupt Control Register" */
SFR_NOABS (USB_EPIC11, USB_EPICm_t, USB_EPIC11_ADDR); /* "Endpoint 11 Interrupt Control Register" */
SFR_NOABS (USB_EPIC12, USB_EPICm_t, USB_EPIC12_ADDR); /* "Endpoint 12 Interrupt Control Register" */
SFR_NOABS (USB_EPIC13, USB_EPICm_t, USB_EPIC13_ADDR); /* "Endpoint 13 Interrupt Control Register" */
SFR_NOABS (USB_EPIC14, USB_EPICm_t, USB_EPIC14_ADDR); /* "Endpoint 14 Interrupt Control Register" */
SFR_NOABS (USB_EPIC15, USB_EPICm_t, USB_EPIC15_ADDR); /* "Endpoint 15 Interrupt Control Register" */
SFR_NOABS (USB_EPIC2, USB_EPICm_t, USB_EPIC2_ADDR); /* "Endpoint 2 Interrupt Control Register" */
SFR_NOABS (USB_EPIC3, USB_EPICm_t, USB_EPIC3_ADDR); /* "Endpoint 3 Interrupt Control Register" */
SFR_NOABS (USB_EPIC4, USB_EPICm_t, USB_EPIC4_ADDR); /* "Endpoint 4 Interrupt Control Register" */
SFR_NOABS (USB_EPIC5, USB_EPICm_t, USB_EPIC5_ADDR); /* "Endpoint 5 Interrupt Control Register" */
SFR_NOABS (USB_EPIC6, USB_EPICm_t, USB_EPIC6_ADDR); /* "Endpoint 6 Interrupt Control Register" */
SFR_NOABS (USB_EPIC7, USB_EPICm_t, USB_EPIC7_ADDR); /* "Endpoint 7 Interrupt Control Register" */
SFR_NOABS (USB_EPIC8, USB_EPICm_t, USB_EPIC8_ADDR); /* "Endpoint 8 Interrupt Control Register" */
SFR_NOABS (USB_EPIC9, USB_EPICm_t, USB_EPIC9_ADDR); /* "Endpoint 9 Interrupt Control Register" */
SFR_NOABS (USB_EPUP0, USB_EPUPm_t, USB_EPUP0_ADDR); /* "Endpoint n USB pointer register" */
SFR_NOABS (USB_EPUP1, USB_EPUPm_t, USB_EPUP1_ADDR); /* "Endpoint 1 USB pointer register" */
SFR_NOABS (USB_EPUP10, USB_EPUPm_t, USB_EPUP10_ADDR); /* "Endpoint 10 USB pointer register" */
SFR_NOABS (USB_EPUP11, USB_EPUPm_t, USB_EPUP11_ADDR); /* "Endpoint 11 USB pointer register" */
SFR_NOABS (USB_EPUP12, USB_EPUPm_t, USB_EPUP12_ADDR); /* "Endpoint 12 USB pointer register" */
SFR_NOABS (USB_EPUP13, USB_EPUPm_t, USB_EPUP13_ADDR); /* "Endpoint 13 USB pointer register" */
SFR_NOABS (USB_EPUP14, USB_EPUPm_t, USB_EPUP14_ADDR); /* "Endpoint 14 USB pointer register" */
SFR_NOABS (USB_EPUP15, USB_EPUPm_t, USB_EPUP15_ADDR); /* "Endpoint 15 USB pointer register" */
SFR_NOABS (USB_EPUP2, USB_EPUPm_t, USB_EPUP2_ADDR); /* "Endpoint 2 USB pointer register" */
SFR_NOABS (USB_EPUP3, USB_EPUPm_t, USB_EPUP3_ADDR); /* "Endpoint 3 USB pointer register" */
SFR_NOABS (USB_EPUP4, USB_EPUPm_t, USB_EPUP4_ADDR); /* "Endpoint 4 USB pointer register" */
SFR_NOABS (USB_EPUP5, USB_EPUPm_t, USB_EPUP5_ADDR); /* "Endpoint 5 USB pointer register" */
SFR_NOABS (USB_EPUP6, USB_EPUPm_t, USB_EPUP6_ADDR); /* "Endpoint 6 USB pointer register" */
SFR_NOABS (USB_EPUP7, USB_EPUPm_t, USB_EPUP7_ADDR); /* "Endpoint 7 USB pointer register" */
SFR_NOABS (USB_EPUP8, USB_EPUPm_t, USB_EPUP8_ADDR); /* "Endpoint 8 USB pointer register" */
SFR_NOABS (USB_EPUP9, USB_EPUPm_t, USB_EPUP9_ADDR); /* "Endpoint 9 USB pointer register" */
SFR_NOABS (USB_SUTH, USB_SUTH_t, USB_SUTH_ADDR);  /* "Setup Token High Bytes Register" */
SFR_NOABS (USB_SUTL, USB_SUTL_t, USB_SUTL_ADDR);  /* "Setup Token Low Bytes Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_USB_RAM_H_ (block "USB RAM") */


