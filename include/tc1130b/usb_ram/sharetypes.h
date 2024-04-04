/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_RAM_SHARETYPES_H_
#define _HAVE_TRICORE_USB_RAM_SHARETYPES_H_


/********************** USB_EPBCm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int WRNn:13;             /*  = [0..12] = 0x00001fff */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int NEBn:13;             /*  = [16..28] = 0x1fff0000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPBCm_t_nonv;

typedef volatile USB_EPBCm_t_nonv USB_EPBCm_t;

/********************** USB_EPCPm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int UAVMn:1;             /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int BSZn:13;             /*  = [3..15] = 0x0000fff8 */
      unsigned int CAPn:16;             /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPCPm_t_nonv;

typedef volatile USB_EPCPm_t_nonv USB_EPCPm_t;

/********************** USB_EPICm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int ACKEn:1;             /*  = [0..0] = 0x00000001 */
      unsigned int NACKEn:1;            /*  = [1..1] = 0x00000002 */
      unsigned int BNREn:1;             /*  = [2..2] = 0x00000004 */
      unsigned int WNIEn:1;             /*  = [3..3] = 0x00000008 */
      unsigned int TRIEn:1;             /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int INP4:3;              /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int INP5:3;              /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int INP6:3;              /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int INP7:3;              /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPICm_t_nonv;

typedef volatile USB_EPICm_t_nonv USB_EPICm_t;

/********************** USB_EPUPm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int PSZn:3;              /*  = [0..2] = 0x00000007 */
      unsigned int BSPn:13;             /*  = [3..15] = 0x0000fff8 */
      unsigned int UAPn:16;             /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPUPm_t_nonv;

typedef volatile USB_EPUPm_t_nonv USB_EPUPm_t;


#endif /* _HAVE_TRICORE_USB_RAM_SHARETYPES_H_ */

