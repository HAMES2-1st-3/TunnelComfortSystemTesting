/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "USB" of TriCore TC1130B (45 SFRs) */

#ifndef _HAVE_TRICORE_USB_ADDRESSES_H_
#define _HAVE_TRICORE_USB_ADDRESSES_H_

#define USB_CLC_ADDR          0xF00E2800     /* "USB Clock Control Register" */
#define USB_PISEL_ADDR        0xF00E2804     /* "USB Input Port Selection Register" */
#define USB_ID_ADDR           0xF00E2808     /* "USB Module Identification Register" */
#define USB_DCR_ADDR          0xF00E2810     /* "Device Control Register" */
#define USB_DSR_ADDR          0xF00E2814     /* "Device Status Register" */
#define USB_EPSTL_ADDR        0xF00E2818     /* "Endpoint Stall Register" */
#define USB_EPSSR_ADDR        0xF00E281C     /* "Endpoint Stall Set / Reset Register" */
#define USB_CNFR_ADDR         0xF00E2820     /* "Configuration Request Register" */
#define USB_FNR_ADDR          0xF00E2824     /* "Frame Number Register" */
#define USB_EPDIR_ADDR        0xF00E2828     /* "Endpoint Direction Register" */
#define USB_EPDSR_ADDR        0xF00E282C     /* "Endpoint Direction Set/Reset Register" */
#define USB_FCON_ADDR         0xF00E2830     /* "FIFO Control Register" */
#define USB_CPLPR_ADDR        0xF00E2834     /* "CPU Local Pointer Register" */
#define USB_DATA32_ADDR       0xF00E2838     /* "Data Register for 32bit Accesses" */
#define USB_DATA16_ADDR       0xF00E283C     /* "Data Register for 16bit Accesses" */
#define USB_DATA8_ADDR        0xF00E2840     /* "Data Register for 8bit Accesses" */
#define USB_EPVLD_ADDR        0xF00E2844     /* "Endpoint Valid Register" */
#define USB_EVSR_ADDR         0xF00E2848     /* "Endpoint Valid Set/Reset Register" */
#define USB_DIER_ADDR         0xF00E284C     /* "Device Interrupt Enable Register" */
#define USB_DIRR_ADDR         0xF00E2850     /* "Device Interrupt Request Register" */
#define USB_DIRST_ADDR        0xF00E2854     /* "Device Interrupt Reset Register" */
#define USB_DINP_ADDR         0xF00E2858     /* "Device Interrupt Node Pointer Register" */
#define USB_EPIR0_ADDR        0xF00E285C     /* "Endpoint Interrupt Request Register" */
#define USB_EPIR1_ADDR        0xF00E2860     /* "Endpoint Interrupt Request Register" */
#define USB_EPIR2_ADDR        0xF00E2864     /* "Endpoint  Interrupt Request Register" */
#define USB_EPIR3_ADDR        0xF00E2868     /* "Endpoint  Interrupt Request Register" */
#define USB_EPIRST0_ADDR      0xF00E286C     /* "Endpoint Interrupt Reset Register" */
#define USB_EPIRST1_ADDR      0xF00E2870     /* "Endpoint Interrupt Reset Register" */
#define USB_EPIRST2_ADDR      0xF00E2874     /* "Endpoint Interrupt Reset Register" */
#define USB_EPIRST3_ADDR      0xF00E2878     /* "Endpoint Interrupt Reset Register" */
#define USB_EPIT0_ADDR        0xF00E287C     /* "Endpoint Interrupt Test Register" */
#define USB_EPIT1_ADDR        0xF00E2880     /* "Endpoint Interrupt Test Register" */
#define USB_EPIT2_ADDR        0xF00E2884     /* "Endpoint Interrupt Test Register" */
#define USB_EPIT3_ADDR        0xF00E2888     /* "Endpoint Interrupt Test Register" */
#define USB_DIT_ADDR          0xF00E288C     /* "Device Interrupt Test Register" */
#define USB_ZLPEN_ADDR        0xF00E2890     /* "Zero-Length-Package Enable Register" */
#define USB_ZLPSR_ADDR        0xF00E2894     /* "Zero-Length-Package Set/Reset Register" */
#define USB_SRC7_ADDR         0xF00E28E0     /* "Service Request Control Register 7" */
#define USB_SRC6_ADDR         0xF00E28E4     /* "Service Request Control Register 6" */
#define USB_SRC5_ADDR         0xF00E28E8     /* "Service Request Control Register 5" */
#define USB_SRC4_ADDR         0xF00E28EC     /* "Service Request Control Register 4" */
#define USB_SRC3_ADDR         0xF00E28F0     /* "Service Request Control Register 3" */
#define USB_SRC2_ADDR         0xF00E28F4     /* "Service Request Control Register 2" */
#define USB_SRC1_ADDR         0xF00E28F8     /* "Service Request Control Register 1" */
#define USB_SRC0_ADDR         0xF00E28FC     /* "Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_USB_ADDRESSES_H_ (block "USB") */


