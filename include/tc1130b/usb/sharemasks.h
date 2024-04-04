/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_SHAREMASKS_H_
#define _HAVE_TRICORE_USB_SHAREMASKS_H_


/****************** Masks for USB_EPIRSTm_t **********************/
/*
   USB_EPIRST0           "Endpoint Interrupt Reset Register"
   USB_EPIRST1           "Endpoint Interrupt Reset Register"
   USB_EPIRST2           "Endpoint Interrupt Reset Register"
   USB_EPIRST3           "Endpoint Interrupt Reset Register"
*/
/**********************************************************/

#define USB_EPIRSTm_MASK                0x1f1f1f1f
#define USB_EPIRSTm_ACKR00_MASK         0x00000001
#define USB_EPIRSTm_ACKR00_SHIFT        0
#define USB_EPIRSTm_NACKR00_MASK        0x00000002
#define USB_EPIRSTm_NACKR00_SHIFT       1
#define USB_EPIRSTm_BNRR00_MASK         0x00000004
#define USB_EPIRSTm_BNRR00_SHIFT        2
#define USB_EPIRSTm_WNIR00_MASK         0x00000008
#define USB_EPIRSTm_WNIR00_SHIFT        3
#define USB_EPIRSTm_TRIR00_MASK         0x00000010
#define USB_EPIRSTm_TRIR00_SHIFT        4
#define USB_EPIRSTm_ACKR01_MASK         0x00000100
#define USB_EPIRSTm_ACKR01_SHIFT        8
#define USB_EPIRSTm_NACKR01_MASK        0x00000200
#define USB_EPIRSTm_NACKR01_SHIFT       9
#define USB_EPIRSTm_BNRR01_MASK         0x00000400
#define USB_EPIRSTm_BNRR01_SHIFT        10
#define USB_EPIRSTm_WNIR01_MASK         0x00000800
#define USB_EPIRSTm_WNIR01_SHIFT        11
#define USB_EPIRSTm_TRIR01_MASK         0x00001000
#define USB_EPIRSTm_TRIR01_SHIFT        12
#define USB_EPIRSTm_ACKR02_MASK         0x00010000
#define USB_EPIRSTm_ACKR02_SHIFT        16
#define USB_EPIRSTm_NACKR02_MASK        0x00020000
#define USB_EPIRSTm_NACKR02_SHIFT       17
#define USB_EPIRSTm_BNRR02_MASK         0x00040000
#define USB_EPIRSTm_BNRR02_SHIFT        18
#define USB_EPIRSTm_WNIR02_MASK         0x00080000
#define USB_EPIRSTm_WNIR02_SHIFT        19
#define USB_EPIRSTm_TRIR02_MASK         0x00100000
#define USB_EPIRSTm_TRIR02_SHIFT        20
#define USB_EPIRSTm_ACKR03_MASK         0x01000000
#define USB_EPIRSTm_ACKR03_SHIFT        24
#define USB_EPIRSTm_NACKR03_MASK        0x02000000
#define USB_EPIRSTm_NACKR03_SHIFT       25
#define USB_EPIRSTm_BNRR03_MASK         0x04000000
#define USB_EPIRSTm_BNRR03_SHIFT        26
#define USB_EPIRSTm_WNIR03_MASK         0x08000000
#define USB_EPIRSTm_WNIR03_SHIFT        27
#define USB_EPIRSTm_TRIR03_MASK         0x10000000
#define USB_EPIRSTm_TRIR03_SHIFT        28



/****************** Masks for USB_EPIRm_t **********************/
/*
   USB_EPIR0             "Endpoint Interrupt Request Register"
   USB_EPIR1             "Endpoint Interrupt Request Register"
   USB_EPIR2             "Endpoint  Interrupt Request Register"
   USB_EPIR3             "Endpoint  Interrupt Request Register"
*/
/**********************************************************/

#define USB_EPIRm_MASK                  0x1f1f1f1f
#define USB_EPIRm_ACK00_MASK            0x00000001
#define USB_EPIRm_ACK00_SHIFT           0
#define USB_EPIRm_NACK00_MASK           0x00000002
#define USB_EPIRm_NACK00_SHIFT          1
#define USB_EPIRm_BNR00_MASK            0x00000004
#define USB_EPIRm_BNR00_SHIFT           2
#define USB_EPIRm_WNI00_MASK            0x00000008
#define USB_EPIRm_WNI00_SHIFT           3
#define USB_EPIRm_TRI00_MASK            0x00000010
#define USB_EPIRm_TRI00_SHIFT           4
#define USB_EPIRm_ACK01_MASK            0x00000100
#define USB_EPIRm_ACK01_SHIFT           8
#define USB_EPIRm_NACK01_MASK           0x00000200
#define USB_EPIRm_NACK01_SHIFT          9
#define USB_EPIRm_BNR01_MASK            0x00000400
#define USB_EPIRm_BNR01_SHIFT           10
#define USB_EPIRm_WNI01_MASK            0x00000800
#define USB_EPIRm_WNI01_SHIFT           11
#define USB_EPIRm_TRI01_MASK            0x00001000
#define USB_EPIRm_TRI01_SHIFT           12
#define USB_EPIRm_ACK02_MASK            0x00010000
#define USB_EPIRm_ACK02_SHIFT           16
#define USB_EPIRm_NACK02_MASK           0x00020000
#define USB_EPIRm_NACK02_SHIFT          17
#define USB_EPIRm_BNR02_MASK            0x00040000
#define USB_EPIRm_BNR02_SHIFT           18
#define USB_EPIRm_WNI02_MASK            0x00080000
#define USB_EPIRm_WNI02_SHIFT           19
#define USB_EPIRm_TRI02_MASK            0x00100000
#define USB_EPIRm_TRI02_SHIFT           20
#define USB_EPIRm_ACK03_MASK            0x01000000
#define USB_EPIRm_ACK03_SHIFT           24
#define USB_EPIRm_NACK03_MASK           0x02000000
#define USB_EPIRm_NACK03_SHIFT          25
#define USB_EPIRm_BNR03_MASK            0x04000000
#define USB_EPIRm_BNR03_SHIFT           26
#define USB_EPIRm_WNI03_MASK            0x08000000
#define USB_EPIRm_WNI03_SHIFT           27
#define USB_EPIRm_TRI03_MASK            0x10000000
#define USB_EPIRm_TRI03_SHIFT           28



/****************** Masks for USB_EPITm_t **********************/
/*
   USB_EPIT0             "Endpoint Interrupt Test Register"
   USB_EPIT1             "Endpoint Interrupt Test Register"
   USB_EPIT2             "Endpoint Interrupt Test Register"
   USB_EPIT3             "Endpoint Interrupt Test Register"
*/
/**********************************************************/

#define USB_EPITm_MASK                  0x1f1f1f1f
#define USB_EPITm_ACKT00_MASK           0x00000001
#define USB_EPITm_ACKT00_SHIFT          0
#define USB_EPITm_NACKT00_MASK          0x00000002
#define USB_EPITm_NACKT00_SHIFT         1
#define USB_EPITm_BNRT00_MASK           0x00000004
#define USB_EPITm_BNRT00_SHIFT          2
#define USB_EPITm_WNIT00_MASK           0x00000008
#define USB_EPITm_WNIT00_SHIFT          3
#define USB_EPITm_TRIT00_MASK           0x00000010
#define USB_EPITm_TRIT00_SHIFT          4
#define USB_EPITm_ACKT01_MASK           0x00000100
#define USB_EPITm_ACKT01_SHIFT          8
#define USB_EPITm_NACKT01_MASK          0x00000200
#define USB_EPITm_NACKT01_SHIFT         9
#define USB_EPITm_BNRT01_MASK           0x00000400
#define USB_EPITm_BNRT01_SHIFT          10
#define USB_EPITm_WNIT01_MASK           0x00000800
#define USB_EPITm_WNIT01_SHIFT          11
#define USB_EPITm_TRIT01_MASK           0x00001000
#define USB_EPITm_TRIT01_SHIFT          12
#define USB_EPITm_ACKT02_MASK           0x00010000
#define USB_EPITm_ACKT02_SHIFT          16
#define USB_EPITm_NACKT02_MASK          0x00020000
#define USB_EPITm_NACKT02_SHIFT         17
#define USB_EPITm_BNRT02_MASK           0x00040000
#define USB_EPITm_BNRT02_SHIFT          18
#define USB_EPITm_WNIT02_MASK           0x00080000
#define USB_EPITm_WNIT02_SHIFT          19
#define USB_EPITm_TRIT02_MASK           0x00100000
#define USB_EPITm_TRIT02_SHIFT          20
#define USB_EPITm_ACKT03_MASK           0x01000000
#define USB_EPITm_ACKT03_SHIFT          24
#define USB_EPITm_NACKT03_MASK          0x02000000
#define USB_EPITm_NACKT03_SHIFT         25
#define USB_EPITm_BNRT03_MASK           0x04000000
#define USB_EPITm_BNRT03_SHIFT          26
#define USB_EPITm_WNIT03_MASK           0x08000000
#define USB_EPITm_WNIT03_SHIFT          27
#define USB_EPITm_TRIT03_MASK           0x10000000
#define USB_EPITm_TRIT03_SHIFT          28



/****************** Masks for USB_SRCm_t **********************/
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

#define USB_SRCm_MASK                   0x0000f4ff
#define USB_SRCm_SRPN_MASK              0x000000ff
#define USB_SRCm_SRPN_SHIFT             0
#define USB_SRCm_TOS_MASK               0x00000400
#define USB_SRCm_TOS_SHIFT              10
#define USB_SRCm_SRE_MASK               0x00001000
#define USB_SRCm_SRE_SHIFT              12
#define USB_SRCm_SRR_MASK               0x00002000
#define USB_SRCm_SRR_SHIFT              13
#define USB_SRCm_CLRR_MASK              0x00004000
#define USB_SRCm_CLRR_SHIFT             14
#define USB_SRCm_SETR_MASK              0x00008000
#define USB_SRCm_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_USB_SHAREMASKS_H_ */

