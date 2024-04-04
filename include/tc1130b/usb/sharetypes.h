/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_SHARETYPES_H_
#define _HAVE_TRICORE_USB_SHARETYPES_H_


/********************** USB_EPIRSTm_t *************************/
/*
   USB_EPIRST0           "Endpoint Interrupt Reset Register"
   USB_EPIRST1           "Endpoint Interrupt Reset Register"
   USB_EPIRST2           "Endpoint Interrupt Reset Register"
   USB_EPIRST3           "Endpoint Interrupt Reset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ACKR00:1;            /*  = [0..0] = 0x00000001 */
      unsigned int NACKR00:1;           /*  = [1..1] = 0x00000002 */
      unsigned int BNRR00:1;            /*  = [2..2] = 0x00000004 */
      unsigned int WNIR00:1;            /*  = [3..3] = 0x00000008 */
      unsigned int TRIR00:1;            /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int ACKR01:1;            /*  = [8..8] = 0x00000100 */
      unsigned int NACKR01:1;           /*  = [9..9] = 0x00000200 */
      unsigned int BNRR01:1;            /*  = [10..10] = 0x00000400 */
      unsigned int WNIR01:1;            /*  = [11..11] = 0x00000800 */
      unsigned int TRIR01:1;            /*  = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int ACKR02:1;            /*  = [16..16] = 0x00010000 */
      unsigned int NACKR02:1;           /*  = [17..17] = 0x00020000 */
      unsigned int BNRR02:1;            /*  = [18..18] = 0x00040000 */
      unsigned int WNIR02:1;            /*  = [19..19] = 0x00080000 */
      unsigned int TRIR02:1;            /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int ACKR03:1;            /*  = [24..24] = 0x01000000 */
      unsigned int NACKR03:1;           /*  = [25..25] = 0x02000000 */
      unsigned int BNRR03:1;            /*  = [26..26] = 0x04000000 */
      unsigned int WNIR03:1;            /*  = [27..27] = 0x08000000 */
      unsigned int TRIR03:1;            /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPIRSTm_t_nonv;

typedef volatile USB_EPIRSTm_t_nonv USB_EPIRSTm_t;

/********************** USB_EPIRm_t *************************/
/*
   USB_EPIR0             "Endpoint Interrupt Request Register"
   USB_EPIR1             "Endpoint Interrupt Request Register"
   USB_EPIR2             "Endpoint  Interrupt Request Register"
   USB_EPIR3             "Endpoint  Interrupt Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ACK00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int NACK00:1;            /*  = [1..1] = 0x00000002 */
      unsigned int BNR00:1;             /*  = [2..2] = 0x00000004 */
      unsigned int WNI00:1;             /*  = [3..3] = 0x00000008 */
      unsigned int TRI00:1;             /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int ACK01:1;             /*  = [8..8] = 0x00000100 */
      unsigned int NACK01:1;            /*  = [9..9] = 0x00000200 */
      unsigned int BNR01:1;             /*  = [10..10] = 0x00000400 */
      unsigned int WNI01:1;             /*  = [11..11] = 0x00000800 */
      unsigned int TRI01:1;             /*  = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int ACK02:1;             /*  = [16..16] = 0x00010000 */
      unsigned int NACK02:1;            /*  = [17..17] = 0x00020000 */
      unsigned int BNR02:1;             /*  = [18..18] = 0x00040000 */
      unsigned int WNI02:1;             /*  = [19..19] = 0x00080000 */
      unsigned int TRI02:1;             /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int ACK03:1;             /*  = [24..24] = 0x01000000 */
      unsigned int NACK03:1;            /*  = [25..25] = 0x02000000 */
      unsigned int BNR03:1;             /*  = [26..26] = 0x04000000 */
      unsigned int WNI03:1;             /*  = [27..27] = 0x08000000 */
      unsigned int TRI03:1;             /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPIRm_t_nonv;

typedef volatile USB_EPIRm_t_nonv USB_EPIRm_t;

/********************** USB_EPITm_t *************************/
/*
   USB_EPIT0             "Endpoint Interrupt Test Register"
   USB_EPIT1             "Endpoint Interrupt Test Register"
   USB_EPIT2             "Endpoint Interrupt Test Register"
   USB_EPIT3             "Endpoint Interrupt Test Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ACKT00:1;            /*  = [0..0] = 0x00000001 */
      unsigned int NACKT00:1;           /*  = [1..1] = 0x00000002 */
      unsigned int BNRT00:1;            /*  = [2..2] = 0x00000004 */
      unsigned int WNIT00:1;            /*  = [3..3] = 0x00000008 */
      unsigned int TRIT00:1;            /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int ACKT01:1;            /*  = [8..8] = 0x00000100 */
      unsigned int NACKT01:1;           /*  = [9..9] = 0x00000200 */
      unsigned int BNRT01:1;            /*  = [10..10] = 0x00000400 */
      unsigned int WNIT01:1;            /*  = [11..11] = 0x00000800 */
      unsigned int TRIT01:1;            /*  = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int ACKT02:1;            /*  = [16..16] = 0x00010000 */
      unsigned int NACKT02:1;           /*  = [17..17] = 0x00020000 */
      unsigned int BNRT02:1;            /*  = [18..18] = 0x00040000 */
      unsigned int WNIT02:1;            /*  = [19..19] = 0x00080000 */
      unsigned int TRIT02:1;            /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int ACKT03:1;            /*  = [24..24] = 0x01000000 */
      unsigned int NACKT03:1;           /*  = [25..25] = 0x02000000 */
      unsigned int BNRT03:1;            /*  = [26..26] = 0x04000000 */
      unsigned int WNIT03:1;            /*  = [27..27] = 0x08000000 */
      unsigned int TRIT03:1;            /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPITm_t_nonv;

typedef volatile USB_EPITm_t_nonv USB_EPITm_t;

/********************** USB_SRCm_t *************************/
/*
   USB_SRC0              "Service Request Control Register 0"
   USB_SRC1              "Service Request Control Register 1"
   USB_SRC2              "Service Request Control Register 2"
   USB_SRC3              "Service Request Control Register 3"
   USB_SRC4              "Service Request Control Register 4"
   USB_SRC5              "Service Request Control Register 5"
   USB_SRC6              "Service Request Control Register 6"
   USB_SRC7              "Service Request Control Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SRE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13..13] = 0x00002000 */
      unsigned int CLRR:1;              /*  = [14..14] = 0x00004000 */
      unsigned int SETR:1;              /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_SRCm_t_nonv;

typedef volatile USB_SRCm_t_nonv USB_SRCm_t;


#endif /* _HAVE_TRICORE_USB_SHARETYPES_H_ */

