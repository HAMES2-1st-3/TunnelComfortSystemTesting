/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "USB" of TriCore TC1130B (45 SFRs) */

#include <tc1130b/usb/addr.h>

#include <tc1130b/usb/masks.h>
#include <tc1130b/usb/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/usb/types.h>
#include <tc1130b/usb/sharetypes.h>

#ifndef _HAVE_TRICORE_USB_H_
#define _HAVE_TRICORE_USB_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (USB_CLC, USB_CLC_t, USB_CLC_ADDR);     /* "USB Clock Control Register" */
SFR_NOABS (USB_CNFR, USB_CNFR_t, USB_CNFR_ADDR);  /* "Configuration Request Register" */
SFR_NOABS (USB_CPLPR, USB_CPLPR_t, USB_CPLPR_ADDR); /* "CPU Local Pointer Register" */
SFR_NOABS (USB_DATA16, USB_DATA16_t, USB_DATA16_ADDR); /* "Data Register for 16bit Accesses" */
SFR_NOABS (USB_DATA32, USB_DATA32_t, USB_DATA32_ADDR); /* "Data Register for 32bit Accesses" */
SFR_NOABS (USB_DATA8, USB_DATA8_t, USB_DATA8_ADDR); /* "Data Register for 8bit Accesses" */
SFR_NOABS (USB_DCR, USB_DCR_t, USB_DCR_ADDR);     /* "Device Control Register" */
SFR_NOABS (USB_DIER, USB_DIER_t, USB_DIER_ADDR);  /* "Device Interrupt Enable Register" */
SFR_NOABS (USB_DINP, USB_DINP_t, USB_DINP_ADDR);  /* "Device Interrupt Node Pointer Register" */
SFR_NOABS (USB_DIRR, USB_DIRR_t, USB_DIRR_ADDR);  /* "Device Interrupt Request Register" */
SFR_NOABS (USB_DIRST, USB_DIRST_t, USB_DIRST_ADDR); /* "Device Interrupt Reset Register" */
SFR_NOABS (USB_DIT, USB_DIT_t, USB_DIT_ADDR);     /* "Device Interrupt Test Register" */
SFR_NOABS (USB_DSR, USB_DSR_t, USB_DSR_ADDR);     /* "Device Status Register" */
SFR_NOABS (USB_EPDIR, USB_EPDIR_t, USB_EPDIR_ADDR); /* "Endpoint Direction Register" */
SFR_NOABS (USB_EPDSR, USB_EPDSR_t, USB_EPDSR_ADDR); /* "Endpoint Direction Set/Reset Register" */
SFR_NOABS (USB_EPIR0, USB_EPIRm_t, USB_EPIR0_ADDR); /* "Endpoint Interrupt Request Register" */
SFR_NOABS (USB_EPIR1, USB_EPIRm_t, USB_EPIR1_ADDR); /* "Endpoint Interrupt Request Register" */
SFR_NOABS (USB_EPIR2, USB_EPIRm_t, USB_EPIR2_ADDR); /* "Endpoint  Interrupt Request Register" */
SFR_NOABS (USB_EPIR3, USB_EPIRm_t, USB_EPIR3_ADDR); /* "Endpoint  Interrupt Request Register" */
SFR_NOABS (USB_EPIRST0, USB_EPIRSTm_t, USB_EPIRST0_ADDR); /* "Endpoint Interrupt Reset Register" */
SFR_NOABS (USB_EPIRST1, USB_EPIRSTm_t, USB_EPIRST1_ADDR); /* "Endpoint Interrupt Reset Register" */
SFR_NOABS (USB_EPIRST2, USB_EPIRSTm_t, USB_EPIRST2_ADDR); /* "Endpoint Interrupt Reset Register" */
SFR_NOABS (USB_EPIRST3, USB_EPIRSTm_t, USB_EPIRST3_ADDR); /* "Endpoint Interrupt Reset Register" */
SFR_NOABS (USB_EPIT0, USB_EPITm_t, USB_EPIT0_ADDR); /* "Endpoint Interrupt Test Register" */
SFR_NOABS (USB_EPIT1, USB_EPITm_t, USB_EPIT1_ADDR); /* "Endpoint Interrupt Test Register" */
SFR_NOABS (USB_EPIT2, USB_EPITm_t, USB_EPIT2_ADDR); /* "Endpoint Interrupt Test Register" */
SFR_NOABS (USB_EPIT3, USB_EPITm_t, USB_EPIT3_ADDR); /* "Endpoint Interrupt Test Register" */
SFR_NOABS (USB_EPSSR, USB_EPSSR_t, USB_EPSSR_ADDR); /* "Endpoint Stall Set / Reset Register" */
SFR_NOABS (USB_EPSTL, USB_EPSTL_t, USB_EPSTL_ADDR); /* "Endpoint Stall Register" */
SFR_NOABS (USB_EPVLD, USB_EPVLD_t, USB_EPVLD_ADDR); /* "Endpoint Valid Register" */
SFR_NOABS (USB_EVSR, USB_EVSR_t, USB_EVSR_ADDR);  /* "Endpoint Valid Set/Reset Register" */
SFR_NOABS (USB_FCON, USB_FCON_t, USB_FCON_ADDR);  /* "FIFO Control Register" */
SFR_NOABS (USB_FNR, USB_FNR_t, USB_FNR_ADDR);     /* "Frame Number Register" */
SFR_NOABS (USB_ID, USB_ID_t, USB_ID_ADDR);        /* "USB Module Identification Register" */
SFR_NOABS (USB_PISEL, USB_PISEL_t, USB_PISEL_ADDR); /* "USB Input Port Selection Register" */
SFR_NOABS (USB_SRC0, USB_SRCm_t, USB_SRC0_ADDR);  /* "Service Request Control Register 0" */
SFR_NOABS (USB_SRC1, USB_SRCm_t, USB_SRC1_ADDR);  /* "Service Request Control Register 1" */
SFR_NOABS (USB_SRC2, USB_SRCm_t, USB_SRC2_ADDR);  /* "Service Request Control Register 2" */
SFR_NOABS (USB_SRC3, USB_SRCm_t, USB_SRC3_ADDR);  /* "Service Request Control Register 3" */
SFR_NOABS (USB_SRC4, USB_SRCm_t, USB_SRC4_ADDR);  /* "Service Request Control Register 4" */
SFR_NOABS (USB_SRC5, USB_SRCm_t, USB_SRC5_ADDR);  /* "Service Request Control Register 5" */
SFR_NOABS (USB_SRC6, USB_SRCm_t, USB_SRC6_ADDR);  /* "Service Request Control Register 6" */
SFR_NOABS (USB_SRC7, USB_SRCm_t, USB_SRC7_ADDR);  /* "Service Request Control Register 7" */
SFR_NOABS (USB_ZLPEN, USB_ZLPEN_t, USB_ZLPEN_ADDR); /* "Zero-Length-Package Enable Register" */
SFR_NOABS (USB_ZLPSR, USB_ZLPSR_t, USB_ZLPSR_ADDR); /* "Zero-Length-Package Set/Reset Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_USB_H_ (block "USB") */


