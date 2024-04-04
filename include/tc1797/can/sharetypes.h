/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CAN_SHARETYPES_H_
#define _HAVE_TRICORE_CAN_SHARETYPES_H_


/********************** CAN_LISTm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int BEGIN:8;             /*  = [0..7] = 0x000000ff */
      unsigned int END:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int SIZE:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int EMPTY:1;             /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_LISTm_t_nonv;

typedef volatile CAN_LISTm_t_nonv CAN_LISTm_t;

/********************** CAN_MOAMRm_t *************************/
/*
   CAN_MOAMR0            "Message Object 0 Acceptance Mask Register"
   CAN_MOAMR1            "Message Object 1 Acceptance Mask Register"
   CAN_MOAMR10           "Message Object 10 Acceptance Mask Register"
   CAN_MOAMR100          "Message Object 100 Acceptance Mask Register"
   CAN_MOAMR101          "Message Object 101 Acceptance Mask Register"
   CAN_MOAMR102          "Message Object 102 Acceptance Mask Register"
   CAN_MOAMR103          "Message Object 103 Acceptance Mask Register"
   CAN_MOAMR104          "Message Object 104 Acceptance Mask Register"
   CAN_MOAMR105          "Message Object 105 Acceptance Mask Register"
   CAN_MOAMR106          "Message Object 106 Acceptance Mask Register"
   CAN_MOAMR107          "Message Object 107 Acceptance Mask Register"
   CAN_MOAMR108          "Message Object 108 Acceptance Mask Register"
   CAN_MOAMR109          "Message Object 109 Acceptance Mask Register"
   CAN_MOAMR11           "Message Object 11 Acceptance Mask Register"
   CAN_MOAMR110          "Message Object 110 Acceptance Mask Register"
   CAN_MOAMR111          "Message Object 111 Acceptance Mask Register"
   CAN_MOAMR112          "Message Object 112 Acceptance Mask Register"
   CAN_MOAMR113          "Message Object 113 Acceptance Mask Register"
   CAN_MOAMR114          "Message Object 114 Acceptance Mask Register"
   CAN_MOAMR115          "Message Object 115 Acceptance Mask Register"
   CAN_MOAMR116          "Message Object 116 Acceptance Mask Register"
   CAN_MOAMR117          "Message Object 117 Acceptance Mask Register"
   CAN_MOAMR118          "Message Object 118 Acceptance Mask Register"
   CAN_MOAMR119          "Message Object 119 Acceptance Mask Register"
   CAN_MOAMR12           "Message Object 12 Acceptance Mask Register"
   CAN_MOAMR120          "Message Object 120 Acceptance Mask Register"
   CAN_MOAMR121          "Message Object 121 Acceptance Mask Register"
   CAN_MOAMR122          "Message Object 122 Acceptance Mask Register"
   CAN_MOAMR123          "Message Object 123 Acceptance Mask Register"
   CAN_MOAMR124          "Message Object 124 Acceptance Mask Register"
   CAN_MOAMR125          "Message Object 125 Acceptance Mask Register"
   CAN_MOAMR126          "Message Object 126 Acceptance Mask Register"
   CAN_MOAMR127          "Message Object 127 Acceptance Mask Register"
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
   CAN_MOAMR64           "Message Object 64 Acceptance Mask Register"
   CAN_MOAMR65           "Message Object 65 Acceptance Mask Register"
   CAN_MOAMR66           "Message Object 66 Acceptance Mask Register"
   CAN_MOAMR67           "Message Object 67 Acceptance Mask Register"
   CAN_MOAMR68           "Message Object 68 Acceptance Mask Register"
   CAN_MOAMR69           "Message Object 69 Acceptance Mask Register"
   CAN_MOAMR7            "Message Object 7 Acceptance Mask Register"
   CAN_MOAMR70           "Message Object 70 Acceptance Mask Register"
   CAN_MOAMR71           "Message Object 71 Acceptance Mask Register"
   CAN_MOAMR72           "Message Object 72 Acceptance Mask Register"
   CAN_MOAMR73           "Message Object 73 Acceptance Mask Register"
   CAN_MOAMR74           "Message Object 74 Acceptance Mask Register"
   CAN_MOAMR75           "Message Object 75 Acceptance Mask Register"
   CAN_MOAMR76           "Message Object 76 Acceptance Mask Register"
   CAN_MOAMR77           "Message Object 77 Acceptance Mask Register"
   CAN_MOAMR78           "Message Object 78 Acceptance Mask Register"
   CAN_MOAMR79           "Message Object 79 Acceptance Mask Register"
   CAN_MOAMR8            "Message Object 8 Acceptance Mask Register"
   CAN_MOAMR80           "Message Object 80 Acceptance Mask Register"
   CAN_MOAMR81           "Message Object 81 Acceptance Mask Register"
   CAN_MOAMR82           "Message Object 82 Acceptance Mask Register"
   CAN_MOAMR83           "Message Object 83 Acceptance Mask Register"
   CAN_MOAMR84           "Message Object 84 Acceptance Mask Register"
   CAN_MOAMR85           "Message Object 85 Acceptance Mask Register"
   CAN_MOAMR86           "Message Object 86 Acceptance Mask Register"
   CAN_MOAMR87           "Message Object 87 Acceptance Mask Register"
   CAN_MOAMR88           "Message Object 88 Acceptance Mask Register"
   CAN_MOAMR89           "Message Object 89 Acceptance Mask Register"
   CAN_MOAMR9            "Message Object 9 Acceptance Mask Register"
   CAN_MOAMR90           "Message Object 90 Acceptance Mask Register"
   CAN_MOAMR91           "Message Object 91 Acceptance Mask Register"
   CAN_MOAMR92           "Message Object 92 Acceptance Mask Register"
   CAN_MOAMR93           "Message Object 93 Acceptance Mask Register"
   CAN_MOAMR94           "Message Object 94 Acceptance Mask Register"
   CAN_MOAMR95           "Message Object 95 Acceptance Mask Register"
   CAN_MOAMR96           "Message Object 96 Acceptance Mask Register"
   CAN_MOAMR97           "Message Object 97 Acceptance Mask Register"
   CAN_MOAMR98           "Message Object 98 Acceptance Mask Register"
   CAN_MOAMR99           "Message Object 99 Acceptance Mask Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AM:29;               /*  = [0..28] = 0x1fffffff */
      unsigned int MIDE:1;              /*  = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MOAMRm_t_nonv;

typedef volatile CAN_MOAMRm_t_nonv CAN_MOAMRm_t;

/********************** CAN_MOARm_t *************************/
/*
   CAN_MOAR0             "Message Object 0 Arbitration Register"
   CAN_MOAR1             "Message Object 1 Arbitration Register"
   CAN_MOAR10            "Message Object 10 Arbitration Register"
   CAN_MOAR100           "Message Object 100 Arbitration Register"
   CAN_MOAR101           "Message Object 101 Arbitration Register"
   CAN_MOAR102           "Message Object 102 Arbitration Register"
   CAN_MOAR103           "Message Object 103 Arbitration Register"
   CAN_MOAR104           "Message Object 104 Arbitration Register"
   CAN_MOAR105           "Message Object 105 Arbitration Register"
   CAN_MOAR106           "Message Object 106 Arbitration Register"
   CAN_MOAR107           "Message Object 107 Arbitration Register"
   CAN_MOAR108           "Message Object 108 Arbitration Register"
   CAN_MOAR109           "Message Object 109 Arbitration Register"
   CAN_MOAR11            "Message Object 11 Arbitration Register"
   CAN_MOAR110           "Message Object 110 Arbitration Register"
   CAN_MOAR111           "Message Object 111 Arbitration Register"
   CAN_MOAR112           "Message Object 112 Arbitration Register"
   CAN_MOAR113           "Message Object 113 Arbitration Register"
   CAN_MOAR114           "Message Object 114 Arbitration Register"
   CAN_MOAR115           "Message Object 115 Arbitration Register"
   CAN_MOAR116           "Message Object 116 Arbitration Register"
   CAN_MOAR117           "Message Object 117 Arbitration Register"
   CAN_MOAR118           "Message Object 118 Arbitration Register"
   CAN_MOAR119           "Message Object 119 Arbitration Register"
   CAN_MOAR12            "Message Object 12 Arbitration Register"
   CAN_MOAR120           "Message Object 120 Arbitration Register"
   CAN_MOAR121           "Message Object 121 Arbitration Register"
   CAN_MOAR122           "Message Object 122 Arbitration Register"
   CAN_MOAR123           "Message Object 123 Arbitration Register"
   CAN_MOAR124           "Message Object 124 Arbitration Register"
   CAN_MOAR125           "Message Object 125 Arbitration Register"
   CAN_MOAR126           "Message Object 126 Arbitration Register"
   CAN_MOAR127           "Message Object 127 Arbitration Register"
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
   CAN_MOAR64            "Message Object 64 Arbitration Register"
   CAN_MOAR65            "Message Object 65 Arbitration Register"
   CAN_MOAR66            "Message Object 66 Arbitration Register"
   CAN_MOAR67            "Message Object 67 Arbitration Register"
   CAN_MOAR68            "Message Object 68 Arbitration Register"
   CAN_MOAR69            "Message Object 69 Arbitration Register"
   CAN_MOAR7             "Message Object 7 Arbitration Register"
   CAN_MOAR70            "Message Object 70 Arbitration Register"
   CAN_MOAR71            "Message Object 71 Arbitration Register"
   CAN_MOAR72            "Message Object 72 Arbitration Register"
   CAN_MOAR73            "Message Object 73 Arbitration Register"
   CAN_MOAR74            "Message Object 74 Arbitration Register"
   CAN_MOAR75            "Message Object 75 Arbitration Register"
   CAN_MOAR76            "Message Object 76 Arbitration Register"
   CAN_MOAR77            "Message Object 77 Arbitration Register"
   CAN_MOAR78            "Message Object 78 Arbitration Register"
   CAN_MOAR79            "Message Object 79 Arbitration Register"
   CAN_MOAR8             "Message Object 8 Arbitration Register"
   CAN_MOAR80            "Message Object 80 Arbitration Register"
   CAN_MOAR81            "Message Object 81 Arbitration Register"
   CAN_MOAR82            "Message Object 82 Arbitration Register"
   CAN_MOAR83            "Message Object 83 Arbitration Register"
   CAN_MOAR84            "Message Object 84 Arbitration Register"
   CAN_MOAR85            "Message Object 85 Arbitration Register"
   CAN_MOAR86            "Message Object 86 Arbitration Register"
   CAN_MOAR87            "Message Object 87 Arbitration Register"
   CAN_MOAR88            "Message Object 88 Arbitration Register"
   CAN_MOAR89            "Message Object 89 Arbitration Register"
   CAN_MOAR9             "Message Object 9 Arbitration Register"
   CAN_MOAR90            "Message Object 90 Arbitration Register"
   CAN_MOAR91            "Message Object 91 Arbitration Register"
   CAN_MOAR92            "Message Object 92 Arbitration Register"
   CAN_MOAR93            "Message Object 93 Arbitration Register"
   CAN_MOAR94            "Message Object 94 Arbitration Register"
   CAN_MOAR95            "Message Object 95 Arbitration Register"
   CAN_MOAR96            "Message Object 96 Arbitration Register"
   CAN_MOAR97            "Message Object 97 Arbitration Register"
   CAN_MOAR98            "Message Object 98 Arbitration Register"
   CAN_MOAR99            "Message Object 99 Arbitration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ID:29;               /*  = [0..28] = 0x1fffffff */
      unsigned int IDE:1;               /*  = [29..29] = 0x20000000 */
      unsigned int PRI:2;               /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MOARm_t_nonv;

typedef volatile CAN_MOARm_t_nonv CAN_MOARm_t;

/********************** CAN_MOCTRm_t *************************/
/*
   CAN_MOCTR0            "Message Object 0"
   CAN_MOCTR1            "Message Object 1"
   CAN_MOCTR10           "Message Object 10"
   CAN_MOCTR100          "Message Object 100"
   CAN_MOCTR101          "Message Object 101"
   CAN_MOCTR102          "Message Object 102"
   CAN_MOCTR103          "Message Object 103"
   CAN_MOCTR104          "Message Object 104"
   CAN_MOCTR105          "Message Object 105"
   CAN_MOCTR106          "Message Object 106"
   CAN_MOCTR107          "Message Object 107"
   CAN_MOCTR108          "Message Object 108"
   CAN_MOCTR109          "Message Object 109"
   CAN_MOCTR11           "Message Object 11"
   CAN_MOCTR110          "Message Object 110"
   CAN_MOCTR111          "Message Object 111"
   CAN_MOCTR112          "Message Object 112"
   CAN_MOCTR113          "Message Object 113"
   CAN_MOCTR114          "Message Object 114"
   CAN_MOCTR115          "Message Object 115"
   CAN_MOCTR116          "Message Object 116"
   CAN_MOCTR117          "Message Object 117"
   CAN_MOCTR118          "Message Object 118"
   CAN_MOCTR119          "Message Object 119"
   CAN_MOCTR12           "Message Object 12"
   CAN_MOCTR120          "Message Object 120"
   CAN_MOCTR121          "Message Object 121"
   CAN_MOCTR122          "Message Object 122"
   CAN_MOCTR123          "Message Object 123"
   CAN_MOCTR124          "Message Object 124"
   CAN_MOCTR125          "Message Object 125"
   CAN_MOCTR126          "Message Object 126"
   CAN_MOCTR127          "Message Object 127"
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
   CAN_MOCTR64           "Message Object 64"
   CAN_MOCTR65           "Message Object 65"
   CAN_MOCTR66           "Message Object 66"
   CAN_MOCTR67           "Message Object 67"
   CAN_MOCTR68           "Message Object 68"
   CAN_MOCTR69           "Message Object 69"
   CAN_MOCTR7            "Message Object 7"
   CAN_MOCTR70           "Message Object 70"
   CAN_MOCTR71           "Message Object 71"
   CAN_MOCTR72           "Message Object 72"
   CAN_MOCTR73           "Message Object 73"
   CAN_MOCTR74           "Message Object 74"
   CAN_MOCTR75           "Message Object 75"
   CAN_MOCTR76           "Message Object 76"
   CAN_MOCTR77           "Message Object 77"
   CAN_MOCTR78           "Message Object 78"
   CAN_MOCTR79           "Message Object 79"
   CAN_MOCTR8            "Message Object 8"
   CAN_MOCTR80           "Message Object 80"
   CAN_MOCTR81           "Message Object 81"
   CAN_MOCTR82           "Message Object 82"
   CAN_MOCTR83           "Message Object 83"
   CAN_MOCTR84           "Message Object 84"
   CAN_MOCTR85           "Message Object 85"
   CAN_MOCTR86           "Message Object 86"
   CAN_MOCTR87           "Message Object 87"
   CAN_MOCTR88           "Message Object 88"
   CAN_MOCTR89           "Message Object 89"
   CAN_MOCTR9            "Message Object 9"
   CAN_MOCTR90           "Message Object 90"
   CAN_MOCTR91           "Message Object 91"
   CAN_MOCTR92           "Message Object 92"
   CAN_MOCTR93           "Message Object 93"
   CAN_MOCTR94           "Message Object 94"
   CAN_MOCTR95           "Message Object 95"
   CAN_MOCTR96           "Message Object 96"
   CAN_MOCTR97           "Message Object 97"
   CAN_MOCTR98           "Message Object 98"
   CAN_MOCTR99           "Message Object 99"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct { /* Message Object 0 Control Register */
      unsigned int RESRXPND:1;          /*  = [0..0] = 0x00000001 */
      unsigned int RESTXPND:1;          /*  = [1..1] = 0x00000002 */
      unsigned int RESRXUPD:1;          /*  = [2..2] = 0x00000004 */
      unsigned int RESNEWDAT:1;         /*  = [3..3] = 0x00000008 */
      unsigned int RESMSGLST:1;         /*  = [4..4] = 0x00000010 */
      unsigned int RESMSGVAL:1;         /*  = [5..5] = 0x00000020 */
      unsigned int RESRTSEL:1;          /*  = [6..6] = 0x00000040 */
      unsigned int RESRXEN:1;           /*  = [7..7] = 0x00000080 */
      unsigned int RESTXRQ:1;           /*  = [8..8] = 0x00000100 */
      unsigned int RESTXEN0:1;          /*  = [9..9] = 0x00000200 */
      unsigned int RESTXEN1:1;          /*  = [10..10] = 0x00000400 */
      unsigned int RESDIR:1;            /*  = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SETRXPND:1;          /*  = [16..16] = 0x00010000 */
      unsigned int SETTXPND:1;          /*  = [17..17] = 0x00020000 */
      unsigned int SETRXUPD:1;          /*  = [18..18] = 0x00040000 */
      unsigned int SETNEWDAT:1;         /*  = [19..19] = 0x00080000 */
      unsigned int SETMSGLST:1;         /*  = [20..20] = 0x00100000 */
      unsigned int SETMSGVAL:1;         /*  = [21..21] = 0x00200000 */
      unsigned int SETRTSEL:1;          /*  = [22..22] = 0x00400000 */
      unsigned int SETRXEN:1;           /*  = [23..23] = 0x00800000 */
      unsigned int SETTXRQ:1;           /*  = [24..24] = 0x01000000 */
      unsigned int SETTXEN0:1;          /*  = [25..25] = 0x02000000 */
      unsigned int SETTXEN1:1;          /*  = [26..26] = 0x04000000 */
      unsigned int SETDIR:1;            /*  = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } ctr;
   struct { /* Message Object 0 Status Register */
      unsigned int RXPND:1;             /*  = [0..0] = 0x00000001 */
      unsigned int TXPND:1;             /*  = [1..1] = 0x00000002 */
      unsigned int RXUPD:1;             /*  = [2..2] = 0x00000004 */
      unsigned int NEWDAT:1;            /*  = [3..3] = 0x00000008 */
      unsigned int MSGLST:1;            /*  = [4..4] = 0x00000010 */
      unsigned int MSGVAL:1;            /*  = [5..5] = 0x00000020 */
      unsigned int RTSEL:1;             /*  = [6..6] = 0x00000040 */
      unsigned int RXEN:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TXRQ:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TXEN0:1;             /*  = [9..9] = 0x00000200 */
      unsigned int TXEN1:1;             /*  = [10..10] = 0x00000400 */
      unsigned int DIR:1;               /*  = [11..11] = 0x00000800 */
      unsigned int LIST:4;              /*  = [12..15] = 0x0000f000 */
      unsigned int PPREV:8;             /*  = [16..23] = 0x00ff0000 */
      unsigned int PNEXT:8;             /*  = [24..31] = 0xff000000 */
   } stat;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MOCTRm_t_nonv;

typedef volatile CAN_MOCTRm_t_nonv CAN_MOCTRm_t;

/********************** CAN_MODATAHm_t *************************/
/*
   CAN_MODATAH0          "Message Object 0 Data Register High"
   CAN_MODATAH1          "Message Object 1 Data Register High"
   CAN_MODATAH10         "Message Object 10 Data Register High"
   CAN_MODATAH100        "Message Object 100 Data Register High"
   CAN_MODATAH101        "Message Object 101 Data Register High"
   CAN_MODATAH102        "Message Object 102 Data Register High"
   CAN_MODATAH103        "Message Object 103 Data Register High"
   CAN_MODATAH104        "Message Object 104 Data Register High"
   CAN_MODATAH105        "Message Object 105 Data Register High"
   CAN_MODATAH106        "Message Object 106 Data Register High"
   CAN_MODATAH107        "Message Object 107 Data Register High"
   CAN_MODATAH108        "Message Object 108 Data Register High"
   CAN_MODATAH109        "Message Object 109 Data Register High"
   CAN_MODATAH11         "Message Object 11 Data Register High"
   CAN_MODATAH110        "Message Object 110 Data Register High"
   CAN_MODATAH111        "Message Object 111 Data Register High"
   CAN_MODATAH112        "Message Object 112 Data Register High"
   CAN_MODATAH113        "Message Object 113 Data Register High"
   CAN_MODATAH114        "Message Object 114 Data Register High"
   CAN_MODATAH115        "Message Object 115 Data Register High"
   CAN_MODATAH116        "Message Object 116 Data Register High"
   CAN_MODATAH117        "Message Object 117 Data Register High"
   CAN_MODATAH118        "Message Object 118 Data Register High"
   CAN_MODATAH119        "Message Object 119 Data Register High"
   CAN_MODATAH12         "Message Object 12 Data Register High"
   CAN_MODATAH120        "Message Object 120 Data Register High"
   CAN_MODATAH121        "Message Object 121 Data Register High"
   CAN_MODATAH122        "Message Object 122 Data Register High"
   CAN_MODATAH123        "Message Object 123 Data Register High"
   CAN_MODATAH124        "Message Object 124 Data Register High"
   CAN_MODATAH125        "Message Object 125 Data Register High"
   CAN_MODATAH126        "Message Object 126 Data Register High"
   CAN_MODATAH127        "Message Object 127 Data Register High"
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
   CAN_MODATAH64         "Message Object 64 Data Register High"
   CAN_MODATAH65         "Message Object 65 Data Register High"
   CAN_MODATAH66         "Message Object 66 Data Register High"
   CAN_MODATAH67         "Message Object 67 Data Register High"
   CAN_MODATAH68         "Message Object 68 Data Register High"
   CAN_MODATAH69         "Message Object 69 Data Register High"
   CAN_MODATAH7          "Message Object 7 Data Register High"
   CAN_MODATAH70         "Message Object 70 Data Register High"
   CAN_MODATAH71         "Message Object 71 Data Register High"
   CAN_MODATAH72         "Message Object 72 Data Register High"
   CAN_MODATAH73         "Message Object 73 Data Register High"
   CAN_MODATAH74         "Message Object 74 Data Register High"
   CAN_MODATAH75         "Message Object 75 Data Register High"
   CAN_MODATAH76         "Message Object 76 Data Register High"
   CAN_MODATAH77         "Message Object 77 Data Register High"
   CAN_MODATAH78         "Message Object 78 Data Register High"
   CAN_MODATAH79         "Message Object 79 Data Register High"
   CAN_MODATAH8          "Message Object 8 Data Register High"
   CAN_MODATAH80         "Message Object 80 Data Register High"
   CAN_MODATAH81         "Message Object 81 Data Register High"
   CAN_MODATAH82         "Message Object 82 Data Register High"
   CAN_MODATAH83         "Message Object 83 Data Register High"
   CAN_MODATAH84         "Message Object 84 Data Register High"
   CAN_MODATAH85         "Message Object 85 Data Register High"
   CAN_MODATAH86         "Message Object 86 Data Register High"
   CAN_MODATAH87         "Message Object 87 Data Register High"
   CAN_MODATAH88         "Message Object 88 Data Register High"
   CAN_MODATAH89         "Message Object 89 Data Register High"
   CAN_MODATAH9          "Message Object 9 Data Register High"
   CAN_MODATAH90         "Message Object 90 Data Register High"
   CAN_MODATAH91         "Message Object 91 Data Register High"
   CAN_MODATAH92         "Message Object 92 Data Register High"
   CAN_MODATAH93         "Message Object 93 Data Register High"
   CAN_MODATAH94         "Message Object 94 Data Register High"
   CAN_MODATAH95         "Message Object 95 Data Register High"
   CAN_MODATAH96         "Message Object 96 Data Register High"
   CAN_MODATAH97         "Message Object 97 Data Register High"
   CAN_MODATAH98         "Message Object 98 Data Register High"
   CAN_MODATAH99         "Message Object 99 Data Register High"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DB4:8;               /*  = [0..7] = 0x000000ff */
      unsigned int DB5:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int DB6:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int DB7:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MODATAHm_t_nonv;

typedef volatile CAN_MODATAHm_t_nonv CAN_MODATAHm_t;

/********************** CAN_MODATALm_t *************************/
/*
   CAN_MODATAL0          "Message Object 0 Data Register Low"
   CAN_MODATAL1          "Message Object 1 Data Register Low"
   CAN_MODATAL10         "Message Object 10 Data Register Low"
   CAN_MODATAL100        "Message Object 100 Data Register Low"
   CAN_MODATAL101        "Message Object 101 Data Register Low"
   CAN_MODATAL102        "Message Object 102 Data Register Low"
   CAN_MODATAL103        "Message Object 103 Data Register Low"
   CAN_MODATAL104        "Message Object 104 Data Register Low"
   CAN_MODATAL105        "Message Object 105 Data Register Low"
   CAN_MODATAL106        "Message Object 106 Data Register Low"
   CAN_MODATAL107        "Message Object 107 Data Register Low"
   CAN_MODATAL108        "Message Object 108 Data Register Low"
   CAN_MODATAL109        "Message Object 109 Data Register Low"
   CAN_MODATAL11         "Message Object 11 Data Register Low"
   CAN_MODATAL110        "Message Object 110 Data Register Low"
   CAN_MODATAL111        "Message Object 111 Data Register Low"
   CAN_MODATAL112        "Message Object 112 Data Register Low"
   CAN_MODATAL113        "Message Object 113 Data Register Low"
   CAN_MODATAL114        "Message Object 114 Data Register Low"
   CAN_MODATAL115        "Message Object 115 Data Register Low"
   CAN_MODATAL116        "Message Object 116 Data Register Low"
   CAN_MODATAL117        "Message Object 117 Data Register Low"
   CAN_MODATAL118        "Message Object 118 Data Register Low"
   CAN_MODATAL119        "Message Object 119 Data Register Low"
   CAN_MODATAL12         "Message Object 12 Data Register Low"
   CAN_MODATAL120        "Message Object 120 Data Register Low"
   CAN_MODATAL121        "Message Object 121 Data Register Low"
   CAN_MODATAL122        "Message Object 122 Data Register Low"
   CAN_MODATAL123        "Message Object 123 Data Register Low"
   CAN_MODATAL124        "Message Object 124 Data Register Low"
   CAN_MODATAL125        "Message Object 125 Data Register Low"
   CAN_MODATAL126        "Message Object 126 Data Register Low"
   CAN_MODATAL127        "Message Object 127 Data Register Low"
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
   CAN_MODATAL64         "Message Object 64 Data Register Low"
   CAN_MODATAL65         "Message Object 65 Data Register Low"
   CAN_MODATAL66         "Message Object 66 Data Register Low"
   CAN_MODATAL67         "Message Object 67 Data Register Low"
   CAN_MODATAL68         "Message Object 68 Data Register Low"
   CAN_MODATAL69         "Message Object 69 Data Register Low"
   CAN_MODATAL7          "Message Object 7 Data Register Low"
   CAN_MODATAL70         "Message Object 70 Data Register Low"
   CAN_MODATAL71         "Message Object 71 Data Register Low"
   CAN_MODATAL72         "Message Object 72 Data Register Low"
   CAN_MODATAL73         "Message Object 73 Data Register Low"
   CAN_MODATAL74         "Message Object 74 Data Register Low"
   CAN_MODATAL75         "Message Object 75 Data Register Low"
   CAN_MODATAL76         "Message Object 76 Data Register Low"
   CAN_MODATAL77         "Message Object 77 Data Register Low"
   CAN_MODATAL78         "Message Object 78 Data Register Low"
   CAN_MODATAL79         "Message Object 79 Data Register Low"
   CAN_MODATAL8          "Message Object 8 Data Register Low"
   CAN_MODATAL80         "Message Object 80 Data Register Low"
   CAN_MODATAL81         "Message Object 81 Data Register Low"
   CAN_MODATAL82         "Message Object 82 Data Register Low"
   CAN_MODATAL83         "Message Object 83 Data Register Low"
   CAN_MODATAL84         "Message Object 84 Data Register Low"
   CAN_MODATAL85         "Message Object 85 Data Register Low"
   CAN_MODATAL86         "Message Object 86 Data Register Low"
   CAN_MODATAL87         "Message Object 87 Data Register Low"
   CAN_MODATAL88         "Message Object 88 Data Register Low"
   CAN_MODATAL89         "Message Object 89 Data Register Low"
   CAN_MODATAL9          "Message Object 9 Data Register Low"
   CAN_MODATAL90         "Message Object 90 Data Register Low"
   CAN_MODATAL91         "Message Object 91 Data Register Low"
   CAN_MODATAL92         "Message Object 92 Data Register Low"
   CAN_MODATAL93         "Message Object 93 Data Register Low"
   CAN_MODATAL94         "Message Object 94 Data Register Low"
   CAN_MODATAL95         "Message Object 95 Data Register Low"
   CAN_MODATAL96         "Message Object 96 Data Register Low"
   CAN_MODATAL97         "Message Object 97 Data Register Low"
   CAN_MODATAL98         "Message Object 98 Data Register Low"
   CAN_MODATAL99         "Message Object 99 Data Register Low"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DB0:8;               /*  = [0..7] = 0x000000ff */
      unsigned int DB1:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int DB2:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int DB3:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MODATALm_t_nonv;

typedef volatile CAN_MODATALm_t_nonv CAN_MODATALm_t;

/********************** CAN_MOFCRm_t *************************/
/*
   CAN_MOFCR0            "Message Object 0 Function Control Register"
   CAN_MOFCR1            "Message Object 1 Function Control Register"
   CAN_MOFCR10           "Message Object 10 Function Control Register"
   CAN_MOFCR100          "Message Object 100 Function Control Register"
   CAN_MOFCR101          "Message Object 101 Function Control Register"
   CAN_MOFCR102          "Message Object 102 Function Control Register"
   CAN_MOFCR103          "Message Object 103 Function Control Register"
   CAN_MOFCR104          "Message Object 104 Function Control Register"
   CAN_MOFCR105          "Message Object 105 Function Control Register"
   CAN_MOFCR106          "Message Object 106 Function Control Register"
   CAN_MOFCR107          "Message Object 107 Function Control Register"
   CAN_MOFCR108          "Message Object 108 Function Control Register"
   CAN_MOFCR109          "Message Object 109 Function Control Register"
   CAN_MOFCR11           "Message Object 11 Function Control Register"
   CAN_MOFCR110          "Message Object 110 Function Control Register"
   CAN_MOFCR111          "Message Object 111 Function Control Register"
   CAN_MOFCR112          "Message Object 112 Function Control Register"
   CAN_MOFCR113          "Message Object 113 Function Control Register"
   CAN_MOFCR114          "Message Object 114 Function Control Register"
   CAN_MOFCR115          "Message Object 115 Function Control Register"
   CAN_MOFCR116          "Message Object 116 Function Control Register"
   CAN_MOFCR117          "Message Object 117 Function Control Register"
   CAN_MOFCR118          "Message Object 118 Function Control Register"
   CAN_MOFCR119          "Message Object 119 Function Control Register"
   CAN_MOFCR12           "Message Object 12 Function Control Register"
   CAN_MOFCR120          "Message Object 120 Function Control Register"
   CAN_MOFCR121          "Message Object 121 Function Control Register"
   CAN_MOFCR122          "Message Object 122 Function Control Register"
   CAN_MOFCR123          "Message Object 123 Function Control Register"
   CAN_MOFCR124          "Message Object 124 Function Control Register"
   CAN_MOFCR125          "Message Object 125 Function Control Register"
   CAN_MOFCR126          "Message Object 126 Function Control Register"
   CAN_MOFCR127          "Message Object 127 Function Control Register"
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
   CAN_MOFCR64           "Message Object 64 Function Control Register"
   CAN_MOFCR65           "Message Object 65 Function Control Register"
   CAN_MOFCR66           "Message Object 66 Function Control Register"
   CAN_MOFCR67           "Message Object 67 Function Control Register"
   CAN_MOFCR68           "Message Object 68 Function Control Register"
   CAN_MOFCR69           "Message Object 69 Function Control Register"
   CAN_MOFCR7            "Message Object 7 Function Control Register"
   CAN_MOFCR70           "Message Object 70 Function Control Register"
   CAN_MOFCR71           "Message Object 71 Function Control Register"
   CAN_MOFCR72           "Message Object 72 Function Control Register"
   CAN_MOFCR73           "Message Object 73 Function Control Register"
   CAN_MOFCR74           "Message Object 74 Function Control Register"
   CAN_MOFCR75           "Message Object 75 Function Control Register"
   CAN_MOFCR76           "Message Object 76 Function Control Register"
   CAN_MOFCR77           "Message Object 77 Function Control Register"
   CAN_MOFCR78           "Message Object 78 Function Control Register"
   CAN_MOFCR79           "Message Object 79 Function Control Register"
   CAN_MOFCR8            "Message Object 8 Function Control Register"
   CAN_MOFCR80           "Message Object 80 Function Control Register"
   CAN_MOFCR81           "Message Object 81 Function Control Register"
   CAN_MOFCR82           "Message Object 82 Function Control Register"
   CAN_MOFCR83           "Message Object 83 Function Control Register"
   CAN_MOFCR84           "Message Object 84 Function Control Register"
   CAN_MOFCR85           "Message Object 85 Function Control Register"
   CAN_MOFCR86           "Message Object 86 Function Control Register"
   CAN_MOFCR87           "Message Object 87 Function Control Register"
   CAN_MOFCR88           "Message Object 88 Function Control Register"
   CAN_MOFCR89           "Message Object 89 Function Control Register"
   CAN_MOFCR9            "Message Object 9 Function Control Register"
   CAN_MOFCR90           "Message Object 90 Function Control Register"
   CAN_MOFCR91           "Message Object 91 Function Control Register"
   CAN_MOFCR92           "Message Object 92 Function Control Register"
   CAN_MOFCR93           "Message Object 93 Function Control Register"
   CAN_MOFCR94           "Message Object 94 Function Control Register"
   CAN_MOFCR95           "Message Object 95 Function Control Register"
   CAN_MOFCR96           "Message Object 96 Function Control Register"
   CAN_MOFCR97           "Message Object 97 Function Control Register"
   CAN_MOFCR98           "Message Object 98 Function Control Register"
   CAN_MOFCR99           "Message Object 99 Function Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MMC:4;               /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int GDFS:1;              /*  = [8..8] = 0x00000100 */
      unsigned int IDC:1;               /*  = [9..9] = 0x00000200 */
      unsigned int DLCC:1;              /*  = [10..10] = 0x00000400 */
      unsigned int DATC:1;              /*  = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int RXIE:1;              /*  = [16..16] = 0x00010000 */
      unsigned int TXIE:1;              /*  = [17..17] = 0x00020000 */
      unsigned int OVIE:1;              /*  = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int FRREN:1;             /*  = [20..20] = 0x00100000 */
      unsigned int RMM:1;               /*  = [21..21] = 0x00200000 */
      unsigned int SDT:1;               /*  = [22..22] = 0x00400000 */
      unsigned int STT:1;               /*  = [23..23] = 0x00800000 */
      unsigned int DLC:4;               /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MOFCRm_t_nonv;

typedef volatile CAN_MOFCRm_t_nonv CAN_MOFCRm_t;

/********************** CAN_MOFGPRm_t *************************/
/*
   CAN_MOFGPR0           "Message Object 0 FIFO/Gateway Pointer Register"
   CAN_MOFGPR1           "Message Object 1 FIFO/Gateway Pointer Register"
   CAN_MOFGPR10          "Message Object 10 FIFO/Gateway Pointer Register"
   CAN_MOFGPR100         "Message Object 100 FIFO/Gateway Pointer Register"
   CAN_MOFGPR101         "Message Object 101 FIFO/Gateway Pointer Register"
   CAN_MOFGPR102         "Message Object 102 FIFO/Gateway Pointer Register"
   CAN_MOFGPR103         "Message Object 103 FIFO/Gateway Pointer Register"
   CAN_MOFGPR104         "Message Object 104 FIFO/Gateway Pointer Register"
   CAN_MOFGPR105         "Message Object 105 FIFO/Gateway Pointer Register"
   CAN_MOFGPR106         "Message Object 106 FIFO/Gateway Pointer Register"
   CAN_MOFGPR107         "Message Object 107 FIFO/Gateway Pointer Register"
   CAN_MOFGPR108         "Message Object 108 FIFO/Gateway Pointer Register"
   CAN_MOFGPR109         "Message Object 109 FIFO/Gateway Pointer Register"
   CAN_MOFGPR11          "Message Object 11 FIFO/Gateway Pointer Register"
   CAN_MOFGPR110         "Message Object 110 FIFO/Gateway Pointer Register"
   CAN_MOFGPR111         "Message Object 111 FIFO/Gateway Pointer Register"
   CAN_MOFGPR112         "Message Object 112 FIFO/Gateway Pointer Register"
   CAN_MOFGPR113         "Message Object 113 FIFO/Gateway Pointer Register"
   CAN_MOFGPR114         "Message Object 114 FIFO/Gateway Pointer Register"
   CAN_MOFGPR115         "Message Object 115 FIFO/Gateway Pointer Register"
   CAN_MOFGPR116         "Message Object 116 FIFO/Gateway Pointer Register"
   CAN_MOFGPR117         "Message Object 117 FIFO/Gateway Pointer Register"
   CAN_MOFGPR118         "Message Object 118 FIFO/Gateway Pointer Register"
   CAN_MOFGPR119         "Message Object 119 FIFO/Gateway Pointer Register"
   CAN_MOFGPR12          "Message Object 12 FIFO/Gateway Pointer Register"
   CAN_MOFGPR120         "Message Object 120 FIFO/Gateway Pointer Register"
   CAN_MOFGPR121         "Message Object 121 FIFO/Gateway Pointer Register"
   CAN_MOFGPR122         "Message Object 122 FIFO/Gateway Pointer Register"
   CAN_MOFGPR123         "Message Object 123 FIFO/Gateway Pointer Register"
   CAN_MOFGPR124         "Message Object 124 FIFO/Gateway Pointer Register"
   CAN_MOFGPR125         "Message Object 125 FIFO/Gateway Pointer Register"
   CAN_MOFGPR126         "Message Object 126 FIFO/Gateway Pointer Register"
   CAN_MOFGPR127         "Message Object 127 FIFO/Gateway Pointer Register"
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
   CAN_MOFGPR64          "Message Object 64 FIFO/Gateway Pointer Register"
   CAN_MOFGPR65          "Message Object 65 FIFO/Gateway Pointer Register"
   CAN_MOFGPR66          "Message Object 66 FIFO/Gateway Pointer Register"
   CAN_MOFGPR67          "Message Object 67 FIFO/Gateway Pointer Register"
   CAN_MOFGPR68          "Message Object 68 FIFO/Gateway Pointer Register"
   CAN_MOFGPR69          "Message Object 69 FIFO/Gateway Pointer Register"
   CAN_MOFGPR7           "Message Object 7 FIFO/Gateway Pointer Register"
   CAN_MOFGPR70          "Message Object 70 FIFO/Gateway Pointer Register"
   CAN_MOFGPR71          "Message Object 71 FIFO/Gateway Pointer Register"
   CAN_MOFGPR72          "Message Object 72 FIFO/Gateway Pointer Register"
   CAN_MOFGPR73          "Message Object 73 FIFO/Gateway Pointer Register"
   CAN_MOFGPR74          "Message Object 74 FIFO/Gateway Pointer Register"
   CAN_MOFGPR75          "Message Object 75 FIFO/Gateway Pointer Register"
   CAN_MOFGPR76          "Message Object 76 FIFO/Gateway Pointer Register"
   CAN_MOFGPR77          "Message Object 77 FIFO/Gateway Pointer Register"
   CAN_MOFGPR78          "Message Object 78 FIFO/Gateway Pointer Register"
   CAN_MOFGPR79          "Message Object 79 FIFO/Gateway Pointer Register"
   CAN_MOFGPR8           "Message Object 8 FIFO/Gateway Pointer Register"
   CAN_MOFGPR80          "Message Object 80 FIFO/Gateway Pointer Register"
   CAN_MOFGPR81          "Message Object 81 FIFO/Gateway Pointer Register"
   CAN_MOFGPR82          "Message Object 82 FIFO/Gateway Pointer Register"
   CAN_MOFGPR83          "Message Object 83 FIFO/Gateway Pointer Register"
   CAN_MOFGPR84          "Message Object 84 FIFO/Gateway Pointer Register"
   CAN_MOFGPR85          "Message Object 85 FIFO/Gateway Pointer Register"
   CAN_MOFGPR86          "Message Object 86 FIFO/Gateway Pointer Register"
   CAN_MOFGPR87          "Message Object 87 FIFO/Gateway Pointer Register"
   CAN_MOFGPR88          "Message Object 88 FIFO/Gateway Pointer Register"
   CAN_MOFGPR89          "Message Object 89 FIFO/Gateway Pointer Register"
   CAN_MOFGPR9           "Message Object 9 FIFO/Gateway Pointer Register"
   CAN_MOFGPR90          "Message Object 90 FIFO/Gateway Pointer Register"
   CAN_MOFGPR91          "Message Object 91 FIFO/Gateway Pointer Register"
   CAN_MOFGPR92          "Message Object 92 FIFO/Gateway Pointer Register"
   CAN_MOFGPR93          "Message Object 93 FIFO/Gateway Pointer Register"
   CAN_MOFGPR94          "Message Object 94 FIFO/Gateway Pointer Register"
   CAN_MOFGPR95          "Message Object 95 FIFO/Gateway Pointer Register"
   CAN_MOFGPR96          "Message Object 96 FIFO/Gateway Pointer Register"
   CAN_MOFGPR97          "Message Object 97 FIFO/Gateway Pointer Register"
   CAN_MOFGPR98          "Message Object 98 FIFO/Gateway Pointer Register"
   CAN_MOFGPR99          "Message Object 99 FIFO/Gateway Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BOT:8;               /*  = [0..7] = 0x000000ff */
      unsigned int TOP:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int CUR:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int SEL:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MOFGPRm_t_nonv;

typedef volatile CAN_MOFGPRm_t_nonv CAN_MOFGPRm_t;

/********************** CAN_MOIPRm_t *************************/
/*
   CAN_MOIPR0            "Message Object 0 Interrupt Pointer Register"
   CAN_MOIPR1            "Message Object 1 Interrupt Pointer Register"
   CAN_MOIPR10           "Message Object 10 Interrupt Pointer Register"
   CAN_MOIPR100          "Message Object 100 Interrupt Pointer Register"
   CAN_MOIPR101          "Message Object 101 Interrupt Pointer Register"
   CAN_MOIPR102          "Message Object 102 Interrupt Pointer Register"
   CAN_MOIPR103          "Message Object 103 Interrupt Pointer Register"
   CAN_MOIPR104          "Message Object 104 Interrupt Pointer Register"
   CAN_MOIPR105          "Message Object 105 Interrupt Pointer Register"
   CAN_MOIPR106          "Message Object 106 Interrupt Pointer Register"
   CAN_MOIPR107          "Message Object 107 Interrupt Pointer Register"
   CAN_MOIPR108          "Message Object 108 Interrupt Pointer Register"
   CAN_MOIPR109          "Message Object 109 Interrupt Pointer Register"
   CAN_MOIPR11           "Message Object 11 Interrupt Pointer Register"
   CAN_MOIPR110          "Message Object 110 Interrupt Pointer Register"
   CAN_MOIPR111          "Message Object 111 Interrupt Pointer Register"
   CAN_MOIPR112          "Message Object 112 Interrupt Pointer Register"
   CAN_MOIPR113          "Message Object 113 Interrupt Pointer Register"
   CAN_MOIPR114          "Message Object 114 Interrupt Pointer Register"
   CAN_MOIPR115          "Message Object 115 Interrupt Pointer Register"
   CAN_MOIPR116          "Message Object 116 Interrupt Pointer Register"
   CAN_MOIPR117          "Message Object 117 Interrupt Pointer Register"
   CAN_MOIPR118          "Message Object 118 Interrupt Pointer Register"
   CAN_MOIPR119          "Message Object 119 Interrupt Pointer Register"
   CAN_MOIPR12           "Message Object 12 Interrupt Pointer Register"
   CAN_MOIPR120          "Message Object 120 Interrupt Pointer Register"
   CAN_MOIPR121          "Message Object 121 Interrupt Pointer Register"
   CAN_MOIPR122          "Message Object 122 Interrupt Pointer Register"
   CAN_MOIPR123          "Message Object 123 Interrupt Pointer Register"
   CAN_MOIPR124          "Message Object 124 Interrupt Pointer Register"
   CAN_MOIPR125          "Message Object 125 Interrupt Pointer Register"
   CAN_MOIPR126          "Message Object 126 Interrupt Pointer Register"
   CAN_MOIPR127          "Message Object 127 Interrupt Pointer Register"
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
   CAN_MOIPR64           "Message Object 64 Interrupt Pointer Register"
   CAN_MOIPR65           "Message Object 65 Interrupt Pointer Register"
   CAN_MOIPR66           "Message Object 66 Interrupt Pointer Register"
   CAN_MOIPR67           "Message Object 67 Interrupt Pointer Register"
   CAN_MOIPR68           "Message Object 68 Interrupt Pointer Register"
   CAN_MOIPR69           "Message Object 69 Interrupt Pointer Register"
   CAN_MOIPR7            "Message Object 7 Interrupt Pointer Register"
   CAN_MOIPR70           "Message Object 70 Interrupt Pointer Register"
   CAN_MOIPR71           "Message Object 71 Interrupt Pointer Register"
   CAN_MOIPR72           "Message Object 72 Interrupt Pointer Register"
   CAN_MOIPR73           "Message Object 73 Interrupt Pointer Register"
   CAN_MOIPR74           "Message Object 74 Interrupt Pointer Register"
   CAN_MOIPR75           "Message Object 75 Interrupt Pointer Register"
   CAN_MOIPR76           "Message Object 76 Interrupt Pointer Register"
   CAN_MOIPR77           "Message Object 77 Interrupt Pointer Register"
   CAN_MOIPR78           "Message Object 78 Interrupt Pointer Register"
   CAN_MOIPR79           "Message Object 79 Interrupt Pointer Register"
   CAN_MOIPR8            "Message Object 8 Interrupt Pointer Register"
   CAN_MOIPR80           "Message Object 80 Interrupt Pointer Register"
   CAN_MOIPR81           "Message Object 81 Interrupt Pointer Register"
   CAN_MOIPR82           "Message Object 82 Interrupt Pointer Register"
   CAN_MOIPR83           "Message Object 83 Interrupt Pointer Register"
   CAN_MOIPR84           "Message Object 84 Interrupt Pointer Register"
   CAN_MOIPR85           "Message Object 85 Interrupt Pointer Register"
   CAN_MOIPR86           "Message Object 86 Interrupt Pointer Register"
   CAN_MOIPR87           "Message Object 87 Interrupt Pointer Register"
   CAN_MOIPR88           "Message Object 88 Interrupt Pointer Register"
   CAN_MOIPR89           "Message Object 89 Interrupt Pointer Register"
   CAN_MOIPR9            "Message Object 9 Interrupt Pointer Register"
   CAN_MOIPR90           "Message Object 90 Interrupt Pointer Register"
   CAN_MOIPR91           "Message Object 91 Interrupt Pointer Register"
   CAN_MOIPR92           "Message Object 92 Interrupt Pointer Register"
   CAN_MOIPR93           "Message Object 93 Interrupt Pointer Register"
   CAN_MOIPR94           "Message Object 94 Interrupt Pointer Register"
   CAN_MOIPR95           "Message Object 95 Interrupt Pointer Register"
   CAN_MOIPR96           "Message Object 96 Interrupt Pointer Register"
   CAN_MOIPR97           "Message Object 97 Interrupt Pointer Register"
   CAN_MOIPR98           "Message Object 98 Interrupt Pointer Register"
   CAN_MOIPR99           "Message Object 99 Interrupt Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RXINP:4;             /*  = [0..3] = 0x0000000f */
      unsigned int TXINP:4;             /*  = [4..7] = 0x000000f0 */
      unsigned int MPN:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int CFCVAL:16;           /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MOIPRm_t_nonv;

typedef volatile CAN_MOIPRm_t_nonv CAN_MOIPRm_t;

/********************** CAN_MSIDm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int INDEX:6;             /*  = [0..5] = 0x0000003f */
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
} __attribute__((aligned(4))) CAN_MSIDm_t_nonv;

typedef volatile CAN_MSIDm_t_nonv CAN_MSIDm_t;

/********************** CAN_MSPNDm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int PND:32;              /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MSPNDm_t_nonv;

typedef volatile CAN_MSPNDm_t_nonv CAN_MSPNDm_t;

/********************** CAN_NBTRm_t *************************/
/*
   CAN_NBTR0             "Node 0 Bit Timing Register"
   CAN_NBTR1             "Node 1 Bit Timing Register"
   CAN_NBTR2             "Node 2 Bit Timing Register"
   CAN_NBTR3             "Node 3 Bit Timing Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BRP:6;               /*  = [0..5] = 0x0000003f */
      unsigned int SJW:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int TSEG1:4;             /*  = [8..11] = 0x00000f00 */
      unsigned int TSEG2:3;             /*  = [12..14] = 0x00007000 */
      unsigned int DIV8:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) CAN_NBTRm_t_nonv;

typedef volatile CAN_NBTRm_t_nonv CAN_NBTRm_t;

/********************** CAN_NCRm_t *************************/
/*
   CAN_NCR0              "Node 0 Control Register"
   CAN_NCR1              "Node 1 Control Register"
   CAN_NCR2              "Node 2 Control Register"
   CAN_NCR3              "Node 3 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int INIT:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TRIE:1;              /*  = [1..1] = 0x00000002 */
      unsigned int LECIE:1;             /*  = [2..2] = 0x00000004 */
      unsigned int ALIE:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CANDIS:1;            /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int CCE:1;               /*  = [6..6] = 0x00000040 */
      unsigned int CALM:1;              /*  = [7..7] = 0x00000080 */
      unsigned int SUSEN:1;             /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) CAN_NCRm_t_nonv;

typedef volatile CAN_NCRm_t_nonv CAN_NCRm_t;

/********************** CAN_NECNTm_t *************************/
/*
   CAN_NECNT0            "Node 0 Error Counter Register"
   CAN_NECNT1            "Node 1 Error Counter Register"
   CAN_NECNT2            "Node 2 Error Counter Register"
   CAN_NECNT3            "Node 3 Error Counter Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REC:8;               /*  = [0..7] = 0x000000ff */
      unsigned int TEC:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int EWRNLVL:8;           /*  = [16..23] = 0x00ff0000 */
      unsigned int LETD:1;              /*  = [24..24] = 0x01000000 */
      unsigned int LEINC:1;             /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_NECNTm_t_nonv;

typedef volatile CAN_NECNTm_t_nonv CAN_NECNTm_t;

/********************** CAN_NFCRm_t *************************/
/*
   CAN_NFCR0             "Node 0 Frame Counter Register"
   CAN_NFCR1             "Node 1 Frame Counter Register"
   CAN_NFCR2             "Node 2 Frame Counter Register"
   CAN_NFCR3             "Node 3 Frame Counter Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CFC:16;              /*  = [0..15] = 0x0000ffff */
      unsigned int CFSEL:3;             /*  = [16..18] = 0x00070000 */
      unsigned int CFMOD:2;             /*  = [19..20] = 0x00180000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int CFCIE:1;             /*  = [22..22] = 0x00400000 */
      unsigned int CFCOV:1;             /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) CAN_NFCRm_t_nonv;

typedef volatile CAN_NFCRm_t_nonv CAN_NFCRm_t;

/********************** CAN_NIPRm_t *************************/
/*
   CAN_NIPR0             "Node 0 Interrupt Pointer Register"
   CAN_NIPR1             "Node 1 Interrupt Pointer Register"
   CAN_NIPR2             "Node 2 Interrupt Pointer Register"
   CAN_NIPR3             "Node 3 Interrupt Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ALINP:4;             /*  = [0..3] = 0x0000000f */
      unsigned int LECINP:4;            /*  = [4..7] = 0x000000f0 */
      unsigned int TRINP:4;             /*  = [8..11] = 0x00000f00 */
      unsigned int CFCINP:4;            /*  = [12..15] = 0x0000f000 */
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
} __attribute__((aligned(4))) CAN_NIPRm_t_nonv;

typedef volatile CAN_NIPRm_t_nonv CAN_NIPRm_t;

/********************** CAN_NPCRm_t *************************/
/*
   CAN_NPCR0             "Node 0 Port Control Register"
   CAN_NPCR1             "Node 1 Port Control Register"
   CAN_NPCR2             "Node 2 Port Control Register"
   CAN_NPCR3             "Node 3 Port Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RXSEL:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int LBM:1;               /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) CAN_NPCRm_t_nonv;

typedef volatile CAN_NPCRm_t_nonv CAN_NPCRm_t;

/********************** CAN_NSRm_t *************************/
/*
   CAN_NSR0              "Node 0 Status Register"
   CAN_NSR1              "Node 1 Status Register"
   CAN_NSR2              "Node 2 Status Register"
   CAN_NSR3              "Node 3 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEC:3;               /*  = [0..2] = 0x00000007 */
      unsigned int TXOK:1;              /*  = [3..3] = 0x00000008 */
      unsigned int RXOK:1;              /*  = [4..4] = 0x00000010 */
      unsigned int ALERT:1;             /*  = [5..5] = 0x00000020 */
      unsigned int EWRN:1;              /*  = [6..6] = 0x00000040 */
      unsigned int BOFF:1;              /*  = [7..7] = 0x00000080 */
      unsigned int LLE:1;               /*  = [8..8] = 0x00000100 */
      unsigned int LOE:1;               /*  = [9..9] = 0x00000200 */
      unsigned int SUSACK:1;            /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) CAN_NSRm_t_nonv;

typedef volatile CAN_NSRm_t_nonv CAN_NSRm_t;

/********************** CAN_SRCm_t *************************/
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
} __attribute__((aligned(4))) CAN_SRCm_t_nonv;

typedef volatile CAN_SRCm_t_nonv CAN_SRCm_t;


#endif /* _HAVE_TRICORE_CAN_SHARETYPES_H_ */

