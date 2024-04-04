/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_RAM_TYPES_H_
#define _HAVE_TRICORE_USB_RAM_TYPES_H_


/********************** USB_SUTH_t *************************/
/*
   USB_SUTH              "Setup Token High Bytes Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SUT4:8;              /*  = [0..7] = 0x000000ff */
      unsigned int SUT5:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int SUT6:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int SUT7:8;              /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_SUTH_t_nonv;

typedef volatile USB_SUTH_t_nonv USB_SUTH_t;

/********************** USB_SUTL_t *************************/
/*
   USB_SUTL              "Setup Token Low Bytes Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SUT0:8;              /*  = [0..7] = 0x000000ff */
      unsigned int SUT1:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int SUT2:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int SUT3:8;              /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_SUTL_t_nonv;

typedef volatile USB_SUTL_t_nonv USB_SUTL_t;


#endif /* _HAVE_TRICORE_USB_RAM_TYPES_H_ */

