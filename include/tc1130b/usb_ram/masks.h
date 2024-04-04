/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_RAM_MASKS_H_
#define _HAVE_TRICORE_USB_RAM_MASKS_H_


/****************** Masks for USB_SUTH_t **********************/
/*
   USB_SUTH              "Setup Token High Bytes Register"
*/
/**********************************************************/

#define USB_SUTH_MASK                   0xffffffff
#define USB_SUTH_SUT4_MASK              0x000000ff
#define USB_SUTH_SUT4_SHIFT             0
#define USB_SUTH_SUT5_MASK              0x0000ff00
#define USB_SUTH_SUT5_SHIFT             8
#define USB_SUTH_SUT6_MASK              0x00ff0000
#define USB_SUTH_SUT6_SHIFT             16
#define USB_SUTH_SUT7_MASK              0xff000000
#define USB_SUTH_SUT7_SHIFT             24



/****************** Masks for USB_SUTL_t **********************/
/*
   USB_SUTL              "Setup Token Low Bytes Register"
*/
/**********************************************************/

#define USB_SUTL_MASK                   0xffffffff
#define USB_SUTL_SUT0_MASK              0x000000ff
#define USB_SUTL_SUT0_SHIFT             0
#define USB_SUTL_SUT1_MASK              0x0000ff00
#define USB_SUTL_SUT1_SHIFT             8
#define USB_SUTL_SUT2_MASK              0x00ff0000
#define USB_SUTL_SUT2_SHIFT             16
#define USB_SUTL_SUT3_MASK              0xff000000
#define USB_SUTL_SUT3_SHIFT             24




#endif /* _HAVE_TRICORE_USB_RAM_MASKS_H_ */

