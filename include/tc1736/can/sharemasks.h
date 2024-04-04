/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CAN_SHAREMASKS_H_
#define _HAVE_TRICORE_CAN_SHAREMASKS_H_


/****************** Masks for CAN_LISTm_t **********************/
/*
   CAN_LIST0             "List Register 0"
   CAN_LIST1             "List Register 1"
   CAN_LIST2             "List Register 2"
   CAN_LIST3             "List Register 3"
   CAN_LIST4             "List Register 4"
   CAN_LIST5             "List Register 5"
   CAN_LIST6             "List Register 6"
   CAN_LIST7             "List Register 7"
*/
/**********************************************************/

#define CAN_LISTm_MASK                  0x01ffffff
#define CAN_LISTm_BEGIN_MASK            0x000000ff
#define CAN_LISTm_BEGIN_SHIFT           0
#define CAN_LISTm_END_MASK              0x0000ff00
#define CAN_LISTm_END_SHIFT             8
#define CAN_LISTm_SIZE_MASK             0x00ff0000
#define CAN_LISTm_SIZE_SHIFT            16
#define CAN_LISTm_EMPTY_MASK            0x01000000
#define CAN_LISTm_EMPTY_SHIFT           24



/****************** Masks for CAN_MOAMRm_t **********************/
/*
   CAN_MOAMR0            "Message Object 0 Acceptance Mask Register"
   CAN_MOAMR1            "Message Object 1 Acceptance Mask Register"
   CAN_MOAMR10           "Message Object 10 Acceptance Mask Register"
   CAN_MOAMR11           "Message Object 11 Acceptance Mask Register"
   CAN_MOAMR12           "Message Object 12 Acceptance Mask Register"
   CAN_MOAMR13           "Message Object 13 Acceptance Mask Register"
   CAN_MOAMR14           "Message Object 14 Acceptance Mask Register"
   CAN_MOAMR15           "Message Object 15 Acceptance Mask Register"
   CAN_MOAMR16           "Message Object 16 Acceptance Mask Register"
   CAN_MOAMR17           "Message Object 17 Acceptance Mask Register"
   CAN_MOAMR18           "Message Object 18 Acceptance Mask Register"
   CAN_MOAMR19           "Message Object 19 Acceptance Mask Register"
   CAN_MOAMR2            "Message Object 2 Acceptance Mask Register"
   CAN_MOAMR20           "Message Object 20 Acceptance Mask Register"
   CAN_MOAMR21           "Message Object 21 Acceptance Mask Register"
   CAN_MOAMR22           "Message Object 22 Acceptance Mask Register"
   CAN_MOAMR23           "Message Object 23 Acceptance Mask Register"
   CAN_MOAMR24           "Message Object 24 Acceptance Mask Register"
   CAN_MOAMR25           "Message Object 25 Acceptance Mask Register"
   CAN_MOAMR26           "Message Object 26 Acceptance Mask Register"
   CAN_MOAMR27           "Message Object 27 Acceptance Mask Register"
   CAN_MOAMR28           "Message Object 28 Acceptance Mask Register"
   CAN_MOAMR29           "Message Object 29 Acceptance Mask Register"
   CAN_MOAMR3            "Message Object 3 Acceptance Mask Register"
   CAN_MOAMR30           "Message Object 30 Acceptance Mask Register"
   CAN_MOAMR31           "Message Object 31 Acceptance Mask Register"
   CAN_MOAMR32           "Message Object 32 Acceptance Mask Register"
   CAN_MOAMR33           "Message Object 33 Acceptance Mask Register"
   CAN_MOAMR34           "Message Object 34 Acceptance Mask Register"
   CAN_MOAMR35           "Message Object 35 Acceptance Mask Register"
   CAN_MOAMR36           "Message Object 36 Acceptance Mask Register"
   CAN_MOAMR37           "Message Object 37 Acceptance Mask Register"
   CAN_MOAMR38           "Message Object 38 Acceptance Mask Register"
   CAN_MOAMR39           "Message Object 39 Acceptance Mask Register"
   CAN_MOAMR4            "Message Object 4 Acceptance Mask Register"
   CAN_MOAMR40           "Message Object 40 Acceptance Mask Register"
   CAN_MOAMR41           "Message Object 41 Acceptance Mask Register"
   CAN_MOAMR42           "Message Object 42 Acceptance Mask Register"
   CAN_MOAMR43           "Message Object 43 Acceptance Mask Register"
   CAN_MOAMR44           "Message Object 44 Acceptance Mask Register"
   CAN_MOAMR45           "Message Object 45 Acceptance Mask Register"
   CAN_MOAMR46           "Message Object 46 Acceptance Mask Register"
   CAN_MOAMR47           "Message Object 47 Acceptance Mask Register"
   CAN_MOAMR48           "Message Object 48 Acceptance Mask Register"
   CAN_MOAMR49           "Message Object 49 Acceptance Mask Register"
   CAN_MOAMR5            "Message Object 5 Acceptance Mask Register"
   CAN_MOAMR50           "Message Object 50 Acceptance Mask Register"
   CAN_MOAMR51           "Message Object 51 Acceptance Mask Register"
   CAN_MOAMR52           "Message Object 52 Acceptance Mask Register"
   CAN_MOAMR53           "Message Object 53 Acceptance Mask Register"
   CAN_MOAMR54           "Message Object 54 Acceptance Mask Register"
   CAN_MOAMR55           "Message Object 55 Acceptance Mask Register"
   CAN_MOAMR56           "Message Object 56 Acceptance Mask Register"
   CAN_MOAMR57           "Message Object 57 Acceptance Mask Register"
   CAN_MOAMR58           "Message Object 58 Acceptance Mask Register"
   CAN_MOAMR59           "Message Object 59 Acceptance Mask Register"
   CAN_MOAMR6            "Message Object 6 Acceptance Mask Register"
   CAN_MOAMR60           "Message Object 60 Acceptance Mask Register"
   CAN_MOAMR61           "Message Object 61 Acceptance Mask Register"
   CAN_MOAMR62           "Message Object 62 Acceptance Mask Register"
   CAN_MOAMR63           "Message Object 63 Acceptance Mask Register"
   CAN_MOAMR7            "Message Object 7 Acceptance Mask Register"
   CAN_MOAMR8            "Message Object 8 Acceptance Mask Register"
   CAN_MOAMR9            "Message Object 9 Acceptance Mask Register"
*/
/**********************************************************/

#define CAN_MOAMRm_MASK                 0x3fffffff
#define CAN_MOAMRm_AM_MASK              0x1fffffff
#define CAN_MOAMRm_AM_SHIFT             0
#define CAN_MOAMRm_MIDE_MASK            0x20000000
#define CAN_MOAMRm_MIDE_SHIFT           29



/****************** Masks for CAN_MOARm_t **********************/
/*
   CAN_MOAR0             "Message Object 0 Arbitration Register"
   CAN_MOAR1             "Message Object 1 Arbitration Register"
   CAN_MOAR10            "Message Object 10 Arbitration Register"
   CAN_MOAR11            "Message Object 11 Arbitration Register"
   CAN_MOAR12            "Message Object 12 Arbitration Register"
   CAN_MOAR13            "Message Object 13 Arbitration Register"
   CAN_MOAR14            "Message Object 14 Arbitration Register"
   CAN_MOAR15            "Message Object 15 Arbitration Register"
   CAN_MOAR16            "Message Object 16 Arbitration Register"
   CAN_MOAR17            "Message Object 17 Arbitration Register"
   CAN_MOAR18            "Message Object 18 Arbitration Register"
   CAN_MOAR19            "Message Object 19 Arbitration Register"
   CAN_MOAR2             "Message Object 2 Arbitration Register"
   CAN_MOAR20            "Message Object 20 Arbitration Register"
   CAN_MOAR21            "Message Object 21 Arbitration Register"
   CAN_MOAR22            "Message Object 22 Arbitration Register"
   CAN_MOAR23            "Message Object 23 Arbitration Register"
   CAN_MOAR24            "Message Object 24 Arbitration Register"
   CAN_MOAR25            "Message Object 25 Arbitration Register"
   CAN_MOAR26            "Message Object 26 Arbitration Register"
   CAN_MOAR27            "Message Object 27 Arbitration Register"
   CAN_MOAR28            "Message Object 28 Arbitration Register"
   CAN_MOAR29            "Message Object 29 Arbitration Register"
   CAN_MOAR3             "Message Object 3 Arbitration Register"
   CAN_MOAR30            "Message Object 30 Arbitration Register"
   CAN_MOAR31            "Message Object 31 Arbitration Register"
   CAN_MOAR32            "Message Object 32 Arbitration Register"
   CAN_MOAR33            "Message Object 33 Arbitration Register"
   CAN_MOAR34            "Message Object 34 Arbitration Register"
   CAN_MOAR35            "Message Object 35 Arbitration Register"
   CAN_MOAR36            "Message Object 36 Arbitration Register"
   CAN_MOAR37            "Message Object 37 Arbitration Register"
   CAN_MOAR38            "Message Object 38 Arbitration Register"
   CAN_MOAR39            "Message Object 39 Arbitration Register"
   CAN_MOAR4             "Message Object 4 Arbitration Register"
   CAN_MOAR40            "Message Object 40 Arbitration Register"
   CAN_MOAR41            "Message Object 41 Arbitration Register"
   CAN_MOAR42            "Message Object 42 Arbitration Register"
   CAN_MOAR43            "Message Object 43 Arbitration Register"
   CAN_MOAR44            "Message Object 44 Arbitration Register"
   CAN_MOAR45            "Message Object 45 Arbitration Register"
   CAN_MOAR46            "Message Object 46 Arbitration Register"
   CAN_MOAR47            "Message Object 47 Arbitration Register"
   CAN_MOAR48            "Message Object 48 Arbitration Register"
   CAN_MOAR49            "Message Object 49 Arbitration Register"
   CAN_MOAR5             "Message Object 5 Arbitration Register"
   CAN_MOAR50            "Message Object 50 Arbitration Register"
   CAN_MOAR51            "Message Object 51 Arbitration Register"
   CAN_MOAR52            "Message Object 52 Arbitration Register"
   CAN_MOAR53            "Message Object 53 Arbitration Register"
   CAN_MOAR54            "Message Object 54 Arbitration Register"
   CAN_MOAR55            "Message Object 55 Arbitration Register"
   CAN_MOAR56            "Message Object 56 Arbitration Register"
   CAN_MOAR57            "Message Object 57 Arbitration Register"
   CAN_MOAR58            "Message Object 58 Arbitration Register"
   CAN_MOAR59            "Message Object 59 Arbitration Register"
   CAN_MOAR6             "Message Object 6 Arbitration Register"
   CAN_MOAR60            "Message Object 60 Arbitration Register"
   CAN_MOAR61            "Message Object 61 Arbitration Register"
   CAN_MOAR62            "Message Object 62 Arbitration Register"
   CAN_MOAR63            "Message Object 63 Arbitration Register"
   CAN_MOAR7             "Message Object 7 Arbitration Register"
   CAN_MOAR8             "Message Object 8 Arbitration Register"
   CAN_MOAR9             "Message Object 9 Arbitration Register"
*/
/**********************************************************/

#define CAN_MOARm_MASK                  0xffffffff
#define CAN_MOARm_ID_MASK               0x1fffffff
#define CAN_MOARm_ID_SHIFT              0
#define CAN_MOARm_IDE_MASK              0x20000000
#define CAN_MOARm_IDE_SHIFT             29
#define CAN_MOARm_PRI_MASK              0xc0000000
#define CAN_MOARm_PRI_SHIFT             30



/****************** Masks for CAN_MOCTRm_t **********************/
/*
   CAN_MOCTR0            "Message Object 0"
   CAN_MOCTR1            "Message Object 1"
   CAN_MOCTR10           "Message Object 10"
   CAN_MOCTR11           "Message Object 11"
   CAN_MOCTR12           "Message Object 12"
   CAN_MOCTR13           "Message Object 13"
   CAN_MOCTR14           "Message Object 14"
   CAN_MOCTR15           "Message Object 15"
   CAN_MOCTR16           "Message Object 16"
   CAN_MOCTR17           "Message Object 17"
   CAN_MOCTR18           "Message Object 18"
   CAN_MOCTR19           "Message Object 19"
   CAN_MOCTR2            "Message Object 2"
   CAN_MOCTR20           "Message Object 20"
   CAN_MOCTR21           "Message Object 21"
   CAN_MOCTR22           "Message Object 22"
   CAN_MOCTR23           "Message Object 23"
   CAN_MOCTR24           "Message Object 24"
   CAN_MOCTR25           "Message Object 25"
   CAN_MOCTR26           "Message Object 26"
   CAN_MOCTR27           "Message Object 27"
   CAN_MOCTR28           "Message Object 28"
   CAN_MOCTR29           "Message Object 29"
   CAN_MOCTR3            "Message Object 3"
   CAN_MOCTR30           "Message Object 30"
   CAN_MOCTR31           "Message Object 31"
   CAN_MOCTR32           "Message Object 32"
   CAN_MOCTR33           "Message Object 33"
   CAN_MOCTR34           "Message Object 34"
   CAN_MOCTR35           "Message Object 35"
   CAN_MOCTR36           "Message Object 36"
   CAN_MOCTR37           "Message Object 37"
   CAN_MOCTR38           "Message Object 38"
   CAN_MOCTR39           "Message Object 39"
   CAN_MOCTR4            "Message Object 4"
   CAN_MOCTR40           "Message Object 40"
   CAN_MOCTR41           "Message Object 41"
   CAN_MOCTR42           "Message Object 42"
   CAN_MOCTR43           "Message Object 43"
   CAN_MOCTR44           "Message Object 44"
   CAN_MOCTR45           "Message Object 45"
   CAN_MOCTR46           "Message Object 46"
   CAN_MOCTR47           "Message Object 47"
   CAN_MOCTR48           "Message Object 48"
   CAN_MOCTR49           "Message Object 49"
   CAN_MOCTR5            "Message Object 5"
   CAN_MOCTR50           "Message Object 50"
   CAN_MOCTR51           "Message Object 51"
   CAN_MOCTR52           "Message Object 52"
   CAN_MOCTR53           "Message Object 53"
   CAN_MOCTR54           "Message Object 54"
   CAN_MOCTR55           "Message Object 55"
   CAN_MOCTR56           "Message Object 56"
   CAN_MOCTR57           "Message Object 57"
   CAN_MOCTR58           "Message Object 58"
   CAN_MOCTR59           "Message Object 59"
   CAN_MOCTR6            "Message Object 6"
   CAN_MOCTR60           "Message Object 60"
   CAN_MOCTR61           "Message Object 61"
   CAN_MOCTR62           "Message Object 62"
   CAN_MOCTR63           "Message Object 63"
   CAN_MOCTR7            "Message Object 7"
   CAN_MOCTR8            "Message Object 8"
   CAN_MOCTR9            "Message Object 9"
*/
/**********************************************************/

#define CAN_MOCTRm_CTR_MASK             0x0fff0fff
#define CAN_MOCTRm_CTR_RESRXPND_MASK    0x00000001
#define CAN_MOCTRm_CTR_RESRXPND_SHIFT   0
#define CAN_MOCTRm_CTR_RESTXPND_MASK    0x00000002
#define CAN_MOCTRm_CTR_RESTXPND_SHIFT   1
#define CAN_MOCTRm_CTR_RESRXUPD_MASK    0x00000004
#define CAN_MOCTRm_CTR_RESRXUPD_SHIFT   2
#define CAN_MOCTRm_CTR_RESNEWDAT_MASK   0x00000008
#define CAN_MOCTRm_CTR_RESNEWDAT_SHIFT  3
#define CAN_MOCTRm_CTR_RESMSGLST_MASK   0x00000010
#define CAN_MOCTRm_CTR_RESMSGLST_SHIFT  4
#define CAN_MOCTRm_CTR_RESMSGVAL_MASK   0x00000020
#define CAN_MOCTRm_CTR_RESMSGVAL_SHIFT  5
#define CAN_MOCTRm_CTR_RESRTSEL_MASK    0x00000040
#define CAN_MOCTRm_CTR_RESRTSEL_SHIFT   6
#define CAN_MOCTRm_CTR_RESRXEN_MASK     0x00000080
#define CAN_MOCTRm_CTR_RESRXEN_SHIFT    7
#define CAN_MOCTRm_CTR_RESTXRQ_MASK     0x00000100
#define CAN_MOCTRm_CTR_RESTXRQ_SHIFT    8
#define CAN_MOCTRm_CTR_RESTXEN0_MASK    0x00000200
#define CAN_MOCTRm_CTR_RESTXEN0_SHIFT   9
#define CAN_MOCTRm_CTR_RESTXEN1_MASK    0x00000400
#define CAN_MOCTRm_CTR_RESTXEN1_SHIFT   10
#define CAN_MOCTRm_CTR_RESDIR_MASK      0x00000800
#define CAN_MOCTRm_CTR_RESDIR_SHIFT     11
#define CAN_MOCTRm_CTR_SETRXPND_MASK    0x00010000
#define CAN_MOCTRm_CTR_SETRXPND_SHIFT   16
#define CAN_MOCTRm_CTR_SETTXPND_MASK    0x00020000
#define CAN_MOCTRm_CTR_SETTXPND_SHIFT   17
#define CAN_MOCTRm_CTR_SETRXUPD_MASK    0x00040000
#define CAN_MOCTRm_CTR_SETRXUPD_SHIFT   18
#define CAN_MOCTRm_CTR_SETNEWDAT_MASK   0x00080000
#define CAN_MOCTRm_CTR_SETNEWDAT_SHIFT  19
#define CAN_MOCTRm_CTR_SETMSGLST_MASK   0x00100000
#define CAN_MOCTRm_CTR_SETMSGLST_SHIFT  20
#define CAN_MOCTRm_CTR_SETMSGVAL_MASK   0x00200000
#define CAN_MOCTRm_CTR_SETMSGVAL_SHIFT  21
#define CAN_MOCTRm_CTR_SETRTSEL_MASK    0x00400000
#define CAN_MOCTRm_CTR_SETRTSEL_SHIFT   22
#define CAN_MOCTRm_CTR_SETRXEN_MASK     0x00800000
#define CAN_MOCTRm_CTR_SETRXEN_SHIFT    23
#define CAN_MOCTRm_CTR_SETTXRQ_MASK     0x01000000
#define CAN_MOCTRm_CTR_SETTXRQ_SHIFT    24
#define CAN_MOCTRm_CTR_SETTXEN0_MASK    0x02000000
#define CAN_MOCTRm_CTR_SETTXEN0_SHIFT   25
#define CAN_MOCTRm_CTR_SETTXEN1_MASK    0x04000000
#define CAN_MOCTRm_CTR_SETTXEN1_SHIFT   26
#define CAN_MOCTRm_CTR_SETDIR_MASK      0x08000000
#define CAN_MOCTRm_CTR_SETDIR_SHIFT     27

#define CAN_MOCTRm_STAT_MASK            0xffffffff
#define CAN_MOCTRm_STAT_RXPND_MASK      0x00000001
#define CAN_MOCTRm_STAT_RXPND_SHIFT     0
#define CAN_MOCTRm_STAT_TXPND_MASK      0x00000002
#define CAN_MOCTRm_STAT_TXPND_SHIFT     1
#define CAN_MOCTRm_STAT_RXUPD_MASK      0x00000004
#define CAN_MOCTRm_STAT_RXUPD_SHIFT     2
#define CAN_MOCTRm_STAT_NEWDAT_MASK     0x00000008
#define CAN_MOCTRm_STAT_NEWDAT_SHIFT    3
#define CAN_MOCTRm_STAT_MSGLST_MASK     0x00000010
#define CAN_MOCTRm_STAT_MSGLST_SHIFT    4
#define CAN_MOCTRm_STAT_MSGVAL_MASK     0x00000020
#define CAN_MOCTRm_STAT_MSGVAL_SHIFT    5
#define CAN_MOCTRm_STAT_RTSEL_MASK      0x00000040
#define CAN_MOCTRm_STAT_RTSEL_SHIFT     6
#define CAN_MOCTRm_STAT_RXEN_MASK       0x00000080
#define CAN_MOCTRm_STAT_RXEN_SHIFT      7
#define CAN_MOCTRm_STAT_TXRQ_MASK       0x00000100
#define CAN_MOCTRm_STAT_TXRQ_SHIFT      8
#define CAN_MOCTRm_STAT_TXEN0_MASK      0x00000200
#define CAN_MOCTRm_STAT_TXEN0_SHIFT     9
#define CAN_MOCTRm_STAT_TXEN1_MASK      0x00000400
#define CAN_MOCTRm_STAT_TXEN1_SHIFT     10
#define CAN_MOCTRm_STAT_DIR_MASK        0x00000800
#define CAN_MOCTRm_STAT_DIR_SHIFT       11
#define CAN_MOCTRm_STAT_LIST_MASK       0x0000f000
#define CAN_MOCTRm_STAT_LIST_SHIFT      12
#define CAN_MOCTRm_STAT_PPREV_MASK      0x00ff0000
#define CAN_MOCTRm_STAT_PPREV_SHIFT     16
#define CAN_MOCTRm_STAT_PNEXT_MASK      0xff000000
#define CAN_MOCTRm_STAT_PNEXT_SHIFT     24



/****************** Masks for CAN_MODATAHm_t **********************/
/*
   CAN_MODATAH0          "Message Object 0 Data Register High"
   CAN_MODATAH1          "Message Object 1 Data Register High"
   CAN_MODATAH10         "Message Object 10 Data Register High"
   CAN_MODATAH11         "Message Object 11 Data Register High"
   CAN_MODATAH12         "Message Object 12 Data Register High"
   CAN_MODATAH13         "Message Object 13 Data Register High"
   CAN_MODATAH14         "Message Object 14 Data Register High"
   CAN_MODATAH15         "Message Object 15 Data Register High"
   CAN_MODATAH16         "Message Object 16 Data Register High"
   CAN_MODATAH17         "Message Object 17 Data Register High"
   CAN_MODATAH18         "Message Object 18 Data Register High"
   CAN_MODATAH19         "Message Object 19 Data Register High"
   CAN_MODATAH2          "Message Object 2 Data Register High"
   CAN_MODATAH20         "Message Object 20 Data Register High"
   CAN_MODATAH21         "Message Object 21 Data Register High"
   CAN_MODATAH22         "Message Object 22 Data Register High"
   CAN_MODATAH23         "Message Object 23 Data Register High"
   CAN_MODATAH24         "Message Object 24 Data Register High"
   CAN_MODATAH25         "Message Object 25 Data Register High"
   CAN_MODATAH26         "Message Object 26 Data Register High"
   CAN_MODATAH27         "Message Object 27 Data Register High"
   CAN_MODATAH28         "Message Object 28 Data Register High"
   CAN_MODATAH29         "Message Object 29 Data Register High"
   CAN_MODATAH3          "Message Object 3 Data Register High"
   CAN_MODATAH30         "Message Object 30 Data Register High"
   CAN_MODATAH31         "Message Object 31 Data Register High"
   CAN_MODATAH32         "Message Object 32 Data Register High"
   CAN_MODATAH33         "Message Object 33 Data Register High"
   CAN_MODATAH34         "Message Object 34 Data Register High"
   CAN_MODATAH35         "Message Object 35 Data Register High"
   CAN_MODATAH36         "Message Object 36 Data Register High"
   CAN_MODATAH37         "Message Object 37 Data Register High"
   CAN_MODATAH38         "Message Object 38 Data Register High"
   CAN_MODATAH39         "Message Object 39 Data Register High"
   CAN_MODATAH4          "Message Object 4 Data Register High"
   CAN_MODATAH40         "Message Object 40 Data Register High"
   CAN_MODATAH41         "Message Object 41 Data Register High"
   CAN_MODATAH42         "Message Object 42 Data Register High"
   CAN_MODATAH43         "Message Object 43 Data Register High"
   CAN_MODATAH44         "Message Object 44 Data Register High"
   CAN_MODATAH45         "Message Object 45 Data Register High"
   CAN_MODATAH46         "Message Object 46 Data Register High"
   CAN_MODATAH47         "Message Object 47 Data Register High"
   CAN_MODATAH48         "Message Object 48 Data Register High"
   CAN_MODATAH49         "Message Object 49 Data Register High"
   CAN_MODATAH5          "Message Object 5 Data Register High"
   CAN_MODATAH50         "Message Object 50 Data Register High"
   CAN_MODATAH51         "Message Object 51 Data Register High"
   CAN_MODATAH52         "Message Object 52 Data Register High"
   CAN_MODATAH53         "Message Object 53 Data Register High"
   CAN_MODATAH54         "Message Object 54 Data Register High"
   CAN_MODATAH55         "Message Object 55 Data Register High"
   CAN_MODATAH56         "Message Object 56 Data Register High"
   CAN_MODATAH57         "Message Object 57 Data Register High"
   CAN_MODATAH58         "Message Object 58 Data Register High"
   CAN_MODATAH59         "Message Object 59 Data Register High"
   CAN_MODATAH6          "Message Object 6 Data Register High"
   CAN_MODATAH60         "Message Object 60 Data Register High"
   CAN_MODATAH61         "Message Object 61 Data Register High"
   CAN_MODATAH62         "Message Object 62 Data Register High"
   CAN_MODATAH63         "Message Object 63 Data Register High"
   CAN_MODATAH7          "Message Object 7 Data Register High"
   CAN_MODATAH8          "Message Object 8 Data Register High"
   CAN_MODATAH9          "Message Object 9 Data Register High"
*/
/**********************************************************/

#define CAN_MODATAHm_MASK               0xffffffff
#define CAN_MODATAHm_DB4_MASK           0x000000ff
#define CAN_MODATAHm_DB4_SHIFT          0
#define CAN_MODATAHm_DB5_MASK           0x0000ff00
#define CAN_MODATAHm_DB5_SHIFT          8
#define CAN_MODATAHm_DB6_MASK           0x00ff0000
#define CAN_MODATAHm_DB6_SHIFT          16
#define CAN_MODATAHm_DB7_MASK           0xff000000
#define CAN_MODATAHm_DB7_SHIFT          24



/****************** Masks for CAN_MODATALm_t **********************/
/*
   CAN_MODATAL0          "Message Object 0 Data Register Low"
   CAN_MODATAL1          "Message Object 1 Data Register Low"
   CAN_MODATAL10         "Message Object 10 Data Register Low"
   CAN_MODATAL11         "Message Object 11 Data Register Low"
   CAN_MODATAL12         "Message Object 12 Data Register Low"
   CAN_MODATAL13         "Message Object 13 Data Register Low"
   CAN_MODATAL14         "Message Object 14 Data Register Low"
   CAN_MODATAL15         "Message Object 15 Data Register Low"
   CAN_MODATAL16         "Message Object 16 Data Register Low"
   CAN_MODATAL17         "Message Object 17 Data Register Low"
   CAN_MODATAL18         "Message Object 18 Data Register Low"
   CAN_MODATAL19         "Message Object 19 Data Register Low"
   CAN_MODATAL2          "Message Object 2 Data Register Low"
   CAN_MODATAL20         "Message Object 20 Data Register Low"
   CAN_MODATAL21         "Message Object 21 Data Register Low"
   CAN_MODATAL22         "Message Object 22 Data Register Low"
   CAN_MODATAL23         "Message Object 23 Data Register Low"
   CAN_MODATAL24         "Message Object 24 Data Register Low"
   CAN_MODATAL25         "Message Object 25 Data Register Low"
   CAN_MODATAL26         "Message Object 26 Data Register Low"
   CAN_MODATAL27         "Message Object 27 Data Register Low"
   CAN_MODATAL28         "Message Object 28 Data Register Low"
   CAN_MODATAL29         "Message Object 29 Data Register Low"
   CAN_MODATAL3          "Message Object 3 Data Register Low"
   CAN_MODATAL30         "Message Object 30 Data Register Low"
   CAN_MODATAL31         "Message Object 31 Data Register Low"
   CAN_MODATAL32         "Message Object 32 Data Register Low"
   CAN_MODATAL33         "Message Object 33 Data Register Low"
   CAN_MODATAL34         "Message Object 34 Data Register Low"
   CAN_MODATAL35         "Message Object 35 Data Register Low"
   CAN_MODATAL36         "Message Object 36 Data Register Low"
   CAN_MODATAL37         "Message Object 37 Data Register Low"
   CAN_MODATAL38         "Message Object 38 Data Register Low"
   CAN_MODATAL39         "Message Object 39 Data Register Low"
   CAN_MODATAL4          "Message Object 4 Data Register Low"
   CAN_MODATAL40         "Message Object 40 Data Register Low"
   CAN_MODATAL41         "Message Object 41 Data Register Low"
   CAN_MODATAL42         "Message Object 42 Data Register Low"
   CAN_MODATAL43         "Message Object 43 Data Register Low"
   CAN_MODATAL44         "Message Object 44 Data Register Low"
   CAN_MODATAL45         "Message Object 45 Data Register Low"
   CAN_MODATAL46         "Message Object 46 Data Register Low"
   CAN_MODATAL47         "Message Object 47 Data Register Low"
   CAN_MODATAL48         "Message Object 48 Data Register Low"
   CAN_MODATAL49         "Message Object 49 Data Register Low"
   CAN_MODATAL5          "Message Object 5 Data Register Low"
   CAN_MODATAL50         "Message Object 50 Data Register Low"
   CAN_MODATAL51         "Message Object 51 Data Register Low"
   CAN_MODATAL52         "Message Object 52 Data Register Low"
   CAN_MODATAL53         "Message Object 53 Data Register Low"
   CAN_MODATAL54         "Message Object 54 Data Register Low"
   CAN_MODATAL55         "Message Object 55 Data Register Low"
   CAN_MODATAL56         "Message Object 56 Data Register Low"
   CAN_MODATAL57         "Message Object 57 Data Register Low"
   CAN_MODATAL58         "Message Object 58 Data Register Low"
   CAN_MODATAL59         "Message Object 59 Data Register Low"
   CAN_MODATAL6          "Message Object 6 Data Register Low"
   CAN_MODATAL60         "Message Object 60 Data Register Low"
   CAN_MODATAL61         "Message Object 61 Data Register Low"
   CAN_MODATAL62         "Message Object 62 Data Register Low"
   CAN_MODATAL63         "Message Object 63 Data Register Low"
   CAN_MODATAL7          "Message Object 7 Data Register Low"
   CAN_MODATAL8          "Message Object 8 Data Register Low"
   CAN_MODATAL9          "Message Object 9 Data Register Low"
*/
/**********************************************************/

#define CAN_MODATALm_MASK               0xffffffff
#define CAN_MODATALm_DB0_MASK           0x000000ff
#define CAN_MODATALm_DB0_SHIFT          0
#define CAN_MODATALm_DB1_MASK           0x0000ff00
#define CAN_MODATALm_DB1_SHIFT          8
#define CAN_MODATALm_DB2_MASK           0x00ff0000
#define CAN_MODATALm_DB2_SHIFT          16
#define CAN_MODATALm_DB3_MASK           0xff000000
#define CAN_MODATALm_DB3_SHIFT          24



/****************** Masks for CAN_MOFCRm_t **********************/
/*
   CAN_MOFCR0            "Message Object 0 Function Control Register"
   CAN_MOFCR1            "Message Object 1 Function Control Register"
   CAN_MOFCR10           "Message Object 10 Function Control Register"
   CAN_MOFCR11           "Message Object 11 Function Control Register"
   CAN_MOFCR12           "Message Object 12 Function Control Register"
   CAN_MOFCR13           "Message Object 13 Function Control Register"
   CAN_MOFCR14           "Message Object 14 Function Control Register"
   CAN_MOFCR15           "Message Object 15 Function Control Register"
   CAN_MOFCR16           "Message Object 16 Function Control Register"
   CAN_MOFCR17           "Message Object 17 Function Control Register"
   CAN_MOFCR18           "Message Object 18 Function Control Register"
   CAN_MOFCR19           "Message Object 19 Function Control Register"
   CAN_MOFCR2            "Message Object 2 Function Control Register"
   CAN_MOFCR20           "Message Object 20 Function Control Register"
   CAN_MOFCR21           "Message Object 21 Function Control Register"
   CAN_MOFCR22           "Message Object 22 Function Control Register"
   CAN_MOFCR23           "Message Object 23 Function Control Register"
   CAN_MOFCR24           "Message Object 24 Function Control Register"
   CAN_MOFCR25           "Message Object 25 Function Control Register"
   CAN_MOFCR26           "Message Object 26 Function Control Register"
   CAN_MOFCR27           "Message Object 27 Function Control Register"
   CAN_MOFCR28           "Message Object 28 Function Control Register"
   CAN_MOFCR29           "Message Object 29 Function Control Register"
   CAN_MOFCR3            "Message Object 3 Function Control Register"
   CAN_MOFCR30           "Message Object 30 Function Control Register"
   CAN_MOFCR31           "Message Object 31 Function Control Register"
   CAN_MOFCR32           "Message Object 32 Function Control Register"
   CAN_MOFCR33           "Message Object 33 Function Control Register"
   CAN_MOFCR34           "Message Object 34 Function Control Register"
   CAN_MOFCR35           "Message Object 35 Function Control Register"
   CAN_MOFCR36           "Message Object 36 Function Control Register"
   CAN_MOFCR37           "Message Object 37 Function Control Register"
   CAN_MOFCR38           "Message Object 38 Function Control Register"
   CAN_MOFCR39           "Message Object 39 Function Control Register"
   CAN_MOFCR4            "Message Object 4 Function Control Register"
   CAN_MOFCR40           "Message Object 40 Function Control Register"
   CAN_MOFCR41           "Message Object 41 Function Control Register"
   CAN_MOFCR42           "Message Object 42 Function Control Register"
   CAN_MOFCR43           "Message Object 43 Function Control Register"
   CAN_MOFCR44           "Message Object 44 Function Control Register"
   CAN_MOFCR45           "Message Object 45 Function Control Register"
   CAN_MOFCR46           "Message Object 46 Function Control Register"
   CAN_MOFCR47           "Message Object 47 Function Control Register"
   CAN_MOFCR48           "Message Object 48 Function Control Register"
   CAN_MOFCR49           "Message Object 49 Function Control Register"
   CAN_MOFCR5            "Message Object 5 Function Control Register"
   CAN_MOFCR50           "Message Object 50 Function Control Register"
   CAN_MOFCR51           "Message Object 51 Function Control Register"
   CAN_MOFCR52           "Message Object 52 Function Control Register"
   CAN_MOFCR53           "Message Object 53 Function Control Register"
   CAN_MOFCR54           "Message Object 54 Function Control Register"
   CAN_MOFCR55           "Message Object 55 Function Control Register"
   CAN_MOFCR56           "Message Object 56 Function Control Register"
   CAN_MOFCR57           "Message Object 57 Function Control Register"
   CAN_MOFCR58           "Message Object 58 Function Control Register"
   CAN_MOFCR59           "Message Object 59 Function Control Register"
   CAN_MOFCR6            "Message Object 6 Function Control Register"
   CAN_MOFCR60           "Message Object 60 Function Control Register"
   CAN_MOFCR61           "Message Object 61 Function Control Register"
   CAN_MOFCR62           "Message Object 62 Function Control Register"
   CAN_MOFCR63           "Message Object 63 Function Control Register"
   CAN_MOFCR7            "Message Object 7 Function Control Register"
   CAN_MOFCR8            "Message Object 8 Function Control Register"
   CAN_MOFCR9            "Message Object 9 Function Control Register"
*/
/**********************************************************/

#define CAN_MOFCRm_MASK                 0x0ff70f0f
#define CAN_MOFCRm_MMC_MASK             0x0000000f
#define CAN_MOFCRm_MMC_SHIFT            0
#define CAN_MOFCRm_GDFS_MASK            0x00000100
#define CAN_MOFCRm_GDFS_SHIFT           8
#define CAN_MOFCRm_IDC_MASK             0x00000200
#define CAN_MOFCRm_IDC_SHIFT            9
#define CAN_MOFCRm_DLCC_MASK            0x00000400
#define CAN_MOFCRm_DLCC_SHIFT           10
#define CAN_MOFCRm_DATC_MASK            0x00000800
#define CAN_MOFCRm_DATC_SHIFT           11
#define CAN_MOFCRm_RXIE_MASK            0x00010000
#define CAN_MOFCRm_RXIE_SHIFT           16
#define CAN_MOFCRm_TXIE_MASK            0x00020000
#define CAN_MOFCRm_TXIE_SHIFT           17
#define CAN_MOFCRm_OVIE_MASK            0x00040000
#define CAN_MOFCRm_OVIE_SHIFT           18
#define CAN_MOFCRm_FRREN_MASK           0x00100000
#define CAN_MOFCRm_FRREN_SHIFT          20
#define CAN_MOFCRm_RMM_MASK             0x00200000
#define CAN_MOFCRm_RMM_SHIFT            21
#define CAN_MOFCRm_SDT_MASK             0x00400000
#define CAN_MOFCRm_SDT_SHIFT            22
#define CAN_MOFCRm_STT_MASK             0x00800000
#define CAN_MOFCRm_STT_SHIFT            23
#define CAN_MOFCRm_DLC_MASK             0x0f000000
#define CAN_MOFCRm_DLC_SHIFT            24



/****************** Masks for CAN_MOFGPRm_t **********************/
/*
   CAN_MOFGPR0           "Message Object 0 FIFO/Gateway Pointer Register"
   CAN_MOFGPR1           "Message Object 1 FIFO/Gateway Pointer Register"
   CAN_MOFGPR10          "Message Object 10 FIFO/Gateway Pointer Register"
   CAN_MOFGPR11          "Message Object 11 FIFO/Gateway Pointer Register"
   CAN_MOFGPR12          "Message Object 12 FIFO/Gateway Pointer Register"
   CAN_MOFGPR13          "Message Object 13 FIFO/Gateway Pointer Register"
   CAN_MOFGPR14          "Message Object 14 FIFO/Gateway Pointer Register"
   CAN_MOFGPR15          "Message Object 15 FIFO/Gateway Pointer Register"
   CAN_MOFGPR16          "Message Object 16 FIFO/Gateway Pointer Register"
   CAN_MOFGPR17          "Message Object 17 FIFO/Gateway Pointer Register"
   CAN_MOFGPR18          "Message Object 18 FIFO/Gateway Pointer Register"
   CAN_MOFGPR19          "Message Object 19 FIFO/Gateway Pointer Register"
   CAN_MOFGPR2           "Message Object 2 FIFO/Gateway Pointer Register"
   CAN_MOFGPR20          "Message Object 20 FIFO/Gateway Pointer Register"
   CAN_MOFGPR21          "Message Object 21 FIFO/Gateway Pointer Register"
   CAN_MOFGPR22          "Message Object 22 FIFO/Gateway Pointer Register"
   CAN_MOFGPR23          "Message Object 23 FIFO/Gateway Pointer Register"
   CAN_MOFGPR24          "Message Object 24 FIFO/Gateway Pointer Register"
   CAN_MOFGPR25          "Message Object 25 FIFO/Gateway Pointer Register"
   CAN_MOFGPR26          "Message Object 26 FIFO/Gateway Pointer Register"
   CAN_MOFGPR27          "Message Object 27 FIFO/Gateway Pointer Register"
   CAN_MOFGPR28          "Message Object 28 FIFO/Gateway Pointer Register"
   CAN_MOFGPR29          "Message Object 29 FIFO/Gateway Pointer Register"
   CAN_MOFGPR3           "Message Object 3 FIFO/Gateway Pointer Register"
   CAN_MOFGPR30          "Message Object 30 FIFO/Gateway Pointer Register"
   CAN_MOFGPR31          "Message Object 31 FIFO/Gateway Pointer Register"
   CAN_MOFGPR32          "Message Object 32 FIFO/Gateway Pointer Register"
   CAN_MOFGPR33          "Message Object 33 FIFO/Gateway Pointer Register"
   CAN_MOFGPR34          "Message Object 34 FIFO/Gateway Pointer Register"
   CAN_MOFGPR35          "Message Object 35 FIFO/Gateway Pointer Register"
   CAN_MOFGPR36          "Message Object 36 FIFO/Gateway Pointer Register"
   CAN_MOFGPR37          "Message Object 37 FIFO/Gateway Pointer Register"
   CAN_MOFGPR38          "Message Object 38 FIFO/Gateway Pointer Register"
   CAN_MOFGPR39          "Message Object 39 FIFO/Gateway Pointer Register"
   CAN_MOFGPR4           "Message Object 4 FIFO/Gateway Pointer Register"
   CAN_MOFGPR40          "Message Object 40 FIFO/Gateway Pointer Register"
   CAN_MOFGPR41          "Message Object 41 FIFO/Gateway Pointer Register"
   CAN_MOFGPR42          "Message Object 42 FIFO/Gateway Pointer Register"
   CAN_MOFGPR43          "Message Object 43 FIFO/Gateway Pointer Register"
   CAN_MOFGPR44          "Message Object 44 FIFO/Gateway Pointer Register"
   CAN_MOFGPR45          "Message Object 45 FIFO/Gateway Pointer Register"
   CAN_MOFGPR46          "Message Object 46 FIFO/Gateway Pointer Register"
   CAN_MOFGPR47          "Message Object 47 FIFO/Gateway Pointer Register"
   CAN_MOFGPR48          "Message Object 48 FIFO/Gateway Pointer Register"
   CAN_MOFGPR49          "Message Object 49 FIFO/Gateway Pointer Register"
   CAN_MOFGPR5           "Message Object 5 FIFO/Gateway Pointer Register"
   CAN_MOFGPR50          "Message Object 50 FIFO/Gateway Pointer Register"
   CAN_MOFGPR51          "Message Object 51 FIFO/Gateway Pointer Register"
   CAN_MOFGPR52          "Message Object 52 FIFO/Gateway Pointer Register"
   CAN_MOFGPR53          "Message Object 53 FIFO/Gateway Pointer Register"
   CAN_MOFGPR54          "Message Object 54 FIFO/Gateway Pointer Register"
   CAN_MOFGPR55          "Message Object 55 FIFO/Gateway Pointer Register"
   CAN_MOFGPR56          "Message Object 56 FIFO/Gateway Pointer Register"
   CAN_MOFGPR57          "Message Object 57 FIFO/Gateway Pointer Register"
   CAN_MOFGPR58          "Message Object 58 FIFO/Gateway Pointer Register"
   CAN_MOFGPR59          "Message Object 59 FIFO/Gateway Pointer Register"
   CAN_MOFGPR6           "Message Object 6 FIFO/Gateway Pointer Register"
   CAN_MOFGPR60          "Message Object 60 FIFO/Gateway Pointer Register"
   CAN_MOFGPR61          "Message Object 61 FIFO/Gateway Pointer Register"
   CAN_MOFGPR62          "Message Object 62 FIFO/Gateway Pointer Register"
   CAN_MOFGPR63          "Message Object 63 FIFO/Gateway Pointer Register"
   CAN_MOFGPR7           "Message Object 7 FIFO/Gateway Pointer Register"
   CAN_MOFGPR8           "Message Object 8 FIFO/Gateway Pointer Register"
   CAN_MOFGPR9           "Message Object 9 FIFO/Gateway Pointer Register"
*/
/**********************************************************/

#define CAN_MOFGPRm_MASK                0xffffffff
#define CAN_MOFGPRm_BOT_MASK            0x000000ff
#define CAN_MOFGPRm_BOT_SHIFT           0
#define CAN_MOFGPRm_TOP_MASK            0x0000ff00
#define CAN_MOFGPRm_TOP_SHIFT           8
#define CAN_MOFGPRm_CUR_MASK            0x00ff0000
#define CAN_MOFGPRm_CUR_SHIFT           16
#define CAN_MOFGPRm_SEL_MASK            0xff000000
#define CAN_MOFGPRm_SEL_SHIFT           24



/****************** Masks for CAN_MOIPRm_t **********************/
/*
   CAN_MOIPR0            "Message Object 0 Interrupt Pointer Register"
   CAN_MOIPR1            "Message Object 1 Interrupt Pointer Register"
   CAN_MOIPR10           "Message Object 10 Interrupt Pointer Register"
   CAN_MOIPR11           "Message Object 11 Interrupt Pointer Register"
   CAN_MOIPR12           "Message Object 12 Interrupt Pointer Register"
   CAN_MOIPR13           "Message Object 13 Interrupt Pointer Register"
   CAN_MOIPR14           "Message Object 14 Interrupt Pointer Register"
   CAN_MOIPR15           "Message Object 15 Interrupt Pointer Register"
   CAN_MOIPR16           "Message Object 16 Interrupt Pointer Register"
   CAN_MOIPR17           "Message Object 17 Interrupt Pointer Register"
   CAN_MOIPR18           "Message Object 18 Interrupt Pointer Register"
   CAN_MOIPR19           "Message Object 19 Interrupt Pointer Register"
   CAN_MOIPR2            "Message Object 2 Interrupt Pointer Register"
   CAN_MOIPR20           "Message Object 20 Interrupt Pointer Register"
   CAN_MOIPR21           "Message Object 21 Interrupt Pointer Register"
   CAN_MOIPR22           "Message Object 22 Interrupt Pointer Register"
   CAN_MOIPR23           "Message Object 23 Interrupt Pointer Register"
   CAN_MOIPR24           "Message Object 24 Interrupt Pointer Register"
   CAN_MOIPR25           "Message Object 25 Interrupt Pointer Register"
   CAN_MOIPR26           "Message Object 26 Interrupt Pointer Register"
   CAN_MOIPR27           "Message Object 27 Interrupt Pointer Register"
   CAN_MOIPR28           "Message Object 28 Interrupt Pointer Register"
   CAN_MOIPR29           "Message Object 29 Interrupt Pointer Register"
   CAN_MOIPR3            "Message Object 3 Interrupt Pointer Register"
   CAN_MOIPR30           "Message Object 30 Interrupt Pointer Register"
   CAN_MOIPR31           "Message Object 31 Interrupt Pointer Register"
   CAN_MOIPR32           "Message Object 32 Interrupt Pointer Register"
   CAN_MOIPR33           "Message Object 33 Interrupt Pointer Register"
   CAN_MOIPR34           "Message Object 34 Interrupt Pointer Register"
   CAN_MOIPR35           "Message Object 35 Interrupt Pointer Register"
   CAN_MOIPR36           "Message Object 36 Interrupt Pointer Register"
   CAN_MOIPR37           "Message Object 37 Interrupt Pointer Register"
   CAN_MOIPR38           "Message Object 38 Interrupt Pointer Register"
   CAN_MOIPR39           "Message Object 39 Interrupt Pointer Register"
   CAN_MOIPR4            "Message Object 4 Interrupt Pointer Register"
   CAN_MOIPR40           "Message Object 40 Interrupt Pointer Register"
   CAN_MOIPR41           "Message Object 41 Interrupt Pointer Register"
   CAN_MOIPR42           "Message Object 42 Interrupt Pointer Register"
   CAN_MOIPR43           "Message Object 43 Interrupt Pointer Register"
   CAN_MOIPR44           "Message Object 44 Interrupt Pointer Register"
   CAN_MOIPR45           "Message Object 45 Interrupt Pointer Register"
   CAN_MOIPR46           "Message Object 46 Interrupt Pointer Register"
   CAN_MOIPR47           "Message Object 47 Interrupt Pointer Register"
   CAN_MOIPR48           "Message Object 48 Interrupt Pointer Register"
   CAN_MOIPR49           "Message Object 49 Interrupt Pointer Register"
   CAN_MOIPR5            "Message Object 5 Interrupt Pointer Register"
   CAN_MOIPR50           "Message Object 50 Interrupt Pointer Register"
   CAN_MOIPR51           "Message Object 51 Interrupt Pointer Register"
   CAN_MOIPR52           "Message Object 52 Interrupt Pointer Register"
   CAN_MOIPR53           "Message Object 53 Interrupt Pointer Register"
   CAN_MOIPR54           "Message Object 54 Interrupt Pointer Register"
   CAN_MOIPR55           "Message Object 55 Interrupt Pointer Register"
   CAN_MOIPR56           "Message Object 56 Interrupt Pointer Register"
   CAN_MOIPR57           "Message Object 57 Interrupt Pointer Register"
   CAN_MOIPR58           "Message Object 58 Interrupt Pointer Register"
   CAN_MOIPR59           "Message Object 59 Interrupt Pointer Register"
   CAN_MOIPR6            "Message Object 6 Interrupt Pointer Register"
   CAN_MOIPR60           "Message Object 60 Interrupt Pointer Register"
   CAN_MOIPR61           "Message Object 61 Interrupt Pointer Register"
   CAN_MOIPR62           "Message Object 62 Interrupt Pointer Register"
   CAN_MOIPR63           "Message Object 63 Interrupt Pointer Register"
   CAN_MOIPR7            "Message Object 7 Interrupt Pointer Register"
   CAN_MOIPR8            "Message Object 8 Interrupt Pointer Register"
   CAN_MOIPR9            "Message Object 9 Interrupt Pointer Register"
*/
/**********************************************************/

#define CAN_MOIPRm_MASK                 0xffffffff
#define CAN_MOIPRm_RXINP_MASK           0x0000000f
#define CAN_MOIPRm_RXINP_SHIFT          0
#define CAN_MOIPRm_TXINP_MASK           0x000000f0
#define CAN_MOIPRm_TXINP_SHIFT          4
#define CAN_MOIPRm_MPN_MASK             0x0000ff00
#define CAN_MOIPRm_MPN_SHIFT            8
#define CAN_MOIPRm_CFCVAL_MASK          0xffff0000
#define CAN_MOIPRm_CFCVAL_SHIFT         16



/****************** Masks for CAN_MSIDm_t **********************/
/*
   CAN_MSID0             "Message Index Register 0"
   CAN_MSID1             "Message Index Register 1"
   CAN_MSID2             "Message Index Register 2"
   CAN_MSID3             "Message Index Register 3"
   CAN_MSID4             "Message Index Register 4"
   CAN_MSID5             "Message Index Register 5"
   CAN_MSID6             "Message Index Register 6"
   CAN_MSID7             "Message Index Register 7"
*/
/**********************************************************/

#define CAN_MSIDm_MASK                  0x0000003f
#define CAN_MSIDm_INDEX_MASK            0x0000003f
#define CAN_MSIDm_INDEX_SHIFT           0



/****************** Masks for CAN_MSPNDm_t **********************/
/*
   CAN_MSPND0            "Message Pending Register 0"
   CAN_MSPND1            "Message Pending Register 1"
   CAN_MSPND2            "Message Pending Register 2"
   CAN_MSPND3            "Message Pending Register 3"
   CAN_MSPND4            "Message Pending Register 4"
   CAN_MSPND5            "Message Pending Register 5"
   CAN_MSPND6            "Message Pending Register 6"
   CAN_MSPND7            "Message Pending Register 7"
*/
/**********************************************************/

#define CAN_MSPNDm_MASK                 0xffffffff
#define CAN_MSPNDm_PND_MASK             0xffffffff
#define CAN_MSPNDm_PND_SHIFT            0



/****************** Masks for CAN_NBTRm_t **********************/
/*
   CAN_NBTR0             "Node 0 Bit Timing Register"
   CAN_NBTR1             "Node 1 Bit Timing Register"
*/
/**********************************************************/

#define CAN_NBTRm_MASK                  0x0000ffff
#define CAN_NBTRm_BRP_MASK              0x0000003f
#define CAN_NBTRm_BRP_SHIFT             0
#define CAN_NBTRm_SJW_MASK              0x000000c0
#define CAN_NBTRm_SJW_SHIFT             6
#define CAN_NBTRm_TSEG1_MASK            0x00000f00
#define CAN_NBTRm_TSEG1_SHIFT           8
#define CAN_NBTRm_TSEG2_MASK            0x00007000
#define CAN_NBTRm_TSEG2_SHIFT           12
#define CAN_NBTRm_DIV8_MASK             0x00008000
#define CAN_NBTRm_DIV8_SHIFT            15



/****************** Masks for CAN_NCRm_t **********************/
/*
   CAN_NCR0              "Node 0 Control Register"
   CAN_NCR1              "Node 1 Control Register"
*/
/**********************************************************/

#define CAN_NCRm_MASK                   0x000001df
#define CAN_NCRm_INIT_MASK              0x00000001
#define CAN_NCRm_INIT_SHIFT             0
#define CAN_NCRm_TRIE_MASK              0x00000002
#define CAN_NCRm_TRIE_SHIFT             1
#define CAN_NCRm_LECIE_MASK             0x00000004
#define CAN_NCRm_LECIE_SHIFT            2
#define CAN_NCRm_ALIE_MASK              0x00000008
#define CAN_NCRm_ALIE_SHIFT             3
#define CAN_NCRm_CANDIS_MASK            0x00000010
#define CAN_NCRm_CANDIS_SHIFT           4
#define CAN_NCRm_CCE_MASK               0x00000040
#define CAN_NCRm_CCE_SHIFT              6
#define CAN_NCRm_CALM_MASK              0x00000080
#define CAN_NCRm_CALM_SHIFT             7
#define CAN_NCRm_SUSEN_MASK             0x00000100
#define CAN_NCRm_SUSEN_SHIFT            8



/****************** Masks for CAN_NECNTm_t **********************/
/*
   CAN_NECNT0            "Node 0 Error Counter Register"
   CAN_NECNT1            "Node 1 Error Counter Register"
*/
/**********************************************************/

#define CAN_NECNTm_MASK                 0x03ffffff
#define CAN_NECNTm_REC_MASK             0x000000ff
#define CAN_NECNTm_REC_SHIFT            0
#define CAN_NECNTm_TEC_MASK             0x0000ff00
#define CAN_NECNTm_TEC_SHIFT            8
#define CAN_NECNTm_EWRNLVL_MASK         0x00ff0000
#define CAN_NECNTm_EWRNLVL_SHIFT        16
#define CAN_NECNTm_LETD_MASK            0x01000000
#define CAN_NECNTm_LETD_SHIFT           24
#define CAN_NECNTm_LEINC_MASK           0x02000000
#define CAN_NECNTm_LEINC_SHIFT          25



/****************** Masks for CAN_NFCRm_t **********************/
/*
   CAN_NFCR0             "Node 0 Frame Counter Register"
   CAN_NFCR1             "Node 1 Frame Counter Register"
*/
/**********************************************************/

#define CAN_NFCRm_MASK                  0x00dfffff
#define CAN_NFCRm_CFC_MASK              0x0000ffff
#define CAN_NFCRm_CFC_SHIFT             0
#define CAN_NFCRm_CFSEL_MASK            0x00070000
#define CAN_NFCRm_CFSEL_SHIFT           16
#define CAN_NFCRm_CFMOD_MASK            0x00180000
#define CAN_NFCRm_CFMOD_SHIFT           19
#define CAN_NFCRm_CFCIE_MASK            0x00400000
#define CAN_NFCRm_CFCIE_SHIFT           22
#define CAN_NFCRm_CFCOV_MASK            0x00800000
#define CAN_NFCRm_CFCOV_SHIFT           23



/****************** Masks for CAN_NIPRm_t **********************/
/*
   CAN_NIPR0             "Node 0 Interrupt Pointer Register"
   CAN_NIPR1             "Node 1 Interrupt Pointer Register"
*/
/**********************************************************/

#define CAN_NIPRm_MASK                  0x0000ffff
#define CAN_NIPRm_ALINP_MASK            0x0000000f
#define CAN_NIPRm_ALINP_SHIFT           0
#define CAN_NIPRm_LECINP_MASK           0x000000f0
#define CAN_NIPRm_LECINP_SHIFT          4
#define CAN_NIPRm_TRINP_MASK            0x00000f00
#define CAN_NIPRm_TRINP_SHIFT           8
#define CAN_NIPRm_CFCINP_MASK           0x0000f000
#define CAN_NIPRm_CFCINP_SHIFT          12



/****************** Masks for CAN_NPCRm_t **********************/
/*
   CAN_NPCR0             "Node 0 Port Control Register"
   CAN_NPCR1             "Node 1 Port Control Register"
*/
/**********************************************************/

#define CAN_NPCRm_MASK                  0x00000107
#define CAN_NPCRm_RXSEL_MASK            0x00000007
#define CAN_NPCRm_RXSEL_SHIFT           0
#define CAN_NPCRm_LBM_MASK              0x00000100
#define CAN_NPCRm_LBM_SHIFT             8



/****************** Masks for CAN_NSRm_t **********************/
/*
   CAN_NSR0              "Node 0 Status Register"
   CAN_NSR1              "Node 1 Status Register"
*/
/**********************************************************/

#define CAN_NSRm_MASK                   0x000007ff
#define CAN_NSRm_LEC_MASK               0x00000007
#define CAN_NSRm_LEC_SHIFT              0
#define CAN_NSRm_TXOK_MASK              0x00000008
#define CAN_NSRm_TXOK_SHIFT             3
#define CAN_NSRm_RXOK_MASK              0x00000010
#define CAN_NSRm_RXOK_SHIFT             4
#define CAN_NSRm_ALERT_MASK             0x00000020
#define CAN_NSRm_ALERT_SHIFT            5
#define CAN_NSRm_EWRN_MASK              0x00000040
#define CAN_NSRm_EWRN_SHIFT             6
#define CAN_NSRm_BOFF_MASK              0x00000080
#define CAN_NSRm_BOFF_SHIFT             7
#define CAN_NSRm_LLE_MASK               0x00000100
#define CAN_NSRm_LLE_SHIFT              8
#define CAN_NSRm_LOE_MASK               0x00000200
#define CAN_NSRm_LOE_SHIFT              9
#define CAN_NSRm_SUSACK_MASK            0x00000400
#define CAN_NSRm_SUSACK_SHIFT           10



/****************** Masks for CAN_SRCm_t **********************/
/*
   CAN_SRC0              "CAN Service Request Control Register 0"
   CAN_SRC1              "CAN Service Request Control Register 1"
   CAN_SRC10             "CAN Service Request Control Register 10"
   CAN_SRC11             "CAN Service Request Control Register 11"
   CAN_SRC12             "CAN Service Request Control Register 12"
   CAN_SRC13             "CAN Service Request Control Register 13"
   CAN_SRC14             "CAN Service Request Control Register 14"
   CAN_SRC15             "CAN Service Request Control Register 15"
   CAN_SRC2              "CAN Service Request Control Register 2"
   CAN_SRC3              "CAN Service Request Control Register 3"
   CAN_SRC4              "CAN Service Request Control Register 4"
   CAN_SRC5              "CAN Service Request Control Register 5"
   CAN_SRC6              "CAN Service Request Control Register 6"
   CAN_SRC7              "CAN Service Request Control Register 7"
   CAN_SRC8              "CAN Service Request Control Register 8"
   CAN_SRC9              "CAN Service Request Control Register 9"
*/
/**********************************************************/

#define CAN_SRCm_MASK                   0x0000f4ff
#define CAN_SRCm_SRPN_MASK              0x000000ff
#define CAN_SRCm_SRPN_SHIFT             0
#define CAN_SRCm_TOS_MASK               0x00000400
#define CAN_SRCm_TOS_SHIFT              10
#define CAN_SRCm_SRE_MASK               0x00001000
#define CAN_SRCm_SRE_SHIFT              12
#define CAN_SRCm_SRR_MASK               0x00002000
#define CAN_SRCm_SRR_SHIFT              13
#define CAN_SRCm_CLRR_MASK              0x00004000
#define CAN_SRCm_CLRR_SHIFT             14
#define CAN_SRCm_SETR_MASK              0x00008000
#define CAN_SRCm_SETR_SHIFT             15




#endif /* _HAVE_TRICORE_CAN_SHAREMASKS_H_ */

