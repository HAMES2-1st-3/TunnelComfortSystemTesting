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
   CAN_MOAMR0            "CAN Message Object 0 Acceptance Mask Register"
   CAN_MOAMR1            "CAN Message Object 1 Acceptance Mask Register"
   CAN_MOAMR10           "CAN Message Object 10 Acceptance Mask Register"
   CAN_MOAMR11           "CAN Message Object 11 Acceptance Mask Register"
   CAN_MOAMR12           "CAN Message Object 12 Acceptance Mask Register"
   CAN_MOAMR13           "CAN Message Object 13 Acceptance Mask Register"
   CAN_MOAMR14           "CAN Message Object 14 Acceptance Mask Register"
   CAN_MOAMR15           "CAN Message Object 15 Acceptance Mask Register"
   CAN_MOAMR16           "CAN Message Object 16 Acceptance Mask Register"
   CAN_MOAMR17           "CAN Message Object 17 Acceptance Mask Register"
   CAN_MOAMR18           "CAN Message Object 18 Acceptance Mask Register"
   CAN_MOAMR19           "CAN Message Object 19 Acceptance Mask Register"
   CAN_MOAMR2            "CAN Message Object 2 Acceptance Mask Register"
   CAN_MOAMR20           "CAN Message Object 20 Acceptance Mask Register"
   CAN_MOAMR21           "CAN Message Object 21 Acceptance Mask Register"
   CAN_MOAMR22           "CAN Message Object 22 Acceptance Mask Register"
   CAN_MOAMR23           "CAN Message Object 23 Acceptance Mask Register"
   CAN_MOAMR24           "CAN Message Object 24 Acceptance Mask Register"
   CAN_MOAMR25           "CAN Message Object 25 Acceptance Mask Register"
   CAN_MOAMR26           "CAN Message Object 26 Acceptance Mask Register"
   CAN_MOAMR27           "CAN Message Object 27 Acceptance Mask Register"
   CAN_MOAMR28           "CAN Message Object 28 Acceptance Mask Register"
   CAN_MOAMR29           "CAN Message Object 29 Acceptance Mask Register"
   CAN_MOAMR3            "CAN Message Object 3 Acceptance Mask Register"
   CAN_MOAMR30           "CAN Message Object 30 Acceptance Mask Register"
   CAN_MOAMR31           "CAN Message Object 31 Acceptance Mask Register"
   CAN_MOAMR32           "CAN Message Object 32 Acceptance Mask Register"
   CAN_MOAMR33           "CAN Message Object 33 Acceptance Mask Register"
   CAN_MOAMR34           "CAN Message Object 34 Acceptance Mask Register"
   CAN_MOAMR35           "CAN Message Object 35 Acceptance Mask Register"
   CAN_MOAMR36           "CAN Message Object 36 Acceptance Mask Register"
   CAN_MOAMR37           "CAN Message Object 37 Acceptance Mask Register"
   CAN_MOAMR38           "CAN Message Object 38 Acceptance Mask Register"
   CAN_MOAMR39           "CAN Message Object 39 Acceptance Mask Register"
   CAN_MOAMR4            "CAN Message Object 4 Acceptance Mask Register"
   CAN_MOAMR40           "CAN Message Object 40 Acceptance Mask Register"
   CAN_MOAMR41           "CAN Message Object 41 Acceptance Mask Register"
   CAN_MOAMR42           "CAN Message Object 42 Acceptance Mask Register"
   CAN_MOAMR43           "CAN Message Object 43 Acceptance Mask Register"
   CAN_MOAMR44           "CAN Message Object 44 Acceptance Mask Register"
   CAN_MOAMR45           "CAN Message Object 45 Acceptance Mask Register"
   CAN_MOAMR46           "CAN Message Object 46 Acceptance Mask Register"
   CAN_MOAMR47           "CAN Message Object 47 Acceptance Mask Register"
   CAN_MOAMR48           "CAN Message Object 48 Acceptance Mask Register"
   CAN_MOAMR49           "CAN Message Object 49 Acceptance Mask Register"
   CAN_MOAMR5            "CAN Message Object 5 Acceptance Mask Register"
   CAN_MOAMR50           "CAN Message Object 50 Acceptance Mask Register"
   CAN_MOAMR51           "CAN Message Object 51 Acceptance Mask Register"
   CAN_MOAMR52           "CAN Message Object 52 Acceptance Mask Register"
   CAN_MOAMR53           "CAN Message Object 53 Acceptance Mask Register"
   CAN_MOAMR54           "CAN Message Object 54 Acceptance Mask Register"
   CAN_MOAMR55           "CAN Message Object 55 Acceptance Mask Register"
   CAN_MOAMR56           "CAN Message Object 56 Acceptance Mask Register"
   CAN_MOAMR57           "CAN Message Object 57 Acceptance Mask Register"
   CAN_MOAMR58           "CAN Message Object 58 Acceptance Mask Register"
   CAN_MOAMR59           "CAN Message Object 59 Acceptance Mask Register"
   CAN_MOAMR6            "CAN Message Object 6 Acceptance Mask Register"
   CAN_MOAMR60           "CAN Message Object 60 Acceptance Mask Register"
   CAN_MOAMR61           "CAN Message Object 61 Acceptance Mask Register"
   CAN_MOAMR62           "CAN Message Object 62 Acceptance Mask Register"
   CAN_MOAMR63           "CAN Message Object 63 Acceptance Mask Register"
   CAN_MOAMR7            "CAN Message Object 7 Acceptance Mask Register"
   CAN_MOAMR8            "CAN Message Object 8 Acceptance Mask Register"
   CAN_MOAMR9            "CAN Message Object 9 Acceptance Mask Register"
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
   CAN_MOAR0             "CAN Message Object 0 Arbitration Register"
   CAN_MOAR1             "CAN Message Object 1 Arbitration Register"
   CAN_MOAR10            "CAN Message Object 10 Arbitration Register"
   CAN_MOAR11            "CAN Message Object 11 Arbitration Register"
   CAN_MOAR12            "CAN Message Object 12 Arbitration Register"
   CAN_MOAR13            "CAN Message Object 13 Arbitration Register"
   CAN_MOAR14            "CAN Message Object 14 Arbitration Register"
   CAN_MOAR15            "CAN Message Object 15 Arbitration Register"
   CAN_MOAR16            "CAN Message Object 16 Arbitration Register"
   CAN_MOAR17            "CAN Message Object 17 Arbitration Register"
   CAN_MOAR18            "CAN Message Object 18 Arbitration Register"
   CAN_MOAR19            "CAN Message Object 19 Arbitration Register"
   CAN_MOAR2             "CAN Message Object 2 Arbitration Register"
   CAN_MOAR20            "CAN Message Object 20 Arbitration Register"
   CAN_MOAR21            "CAN Message Object 21 Arbitration Register"
   CAN_MOAR22            "CAN Message Object 22 Arbitration Register"
   CAN_MOAR23            "CAN Message Object 23 Arbitration Register"
   CAN_MOAR24            "CAN Message Object 24 Arbitration Register"
   CAN_MOAR25            "CAN Message Object 25 Arbitration Register"
   CAN_MOAR26            "CAN Message Object 26 Arbitration Register"
   CAN_MOAR27            "CAN Message Object 27 Arbitration Register"
   CAN_MOAR28            "CAN Message Object 28 Arbitration Register"
   CAN_MOAR29            "CAN Message Object 29 Arbitration Register"
   CAN_MOAR3             "CAN Message Object 3 Arbitration Register"
   CAN_MOAR30            "CAN Message Object 30 Arbitration Register"
   CAN_MOAR31            "CAN Message Object 31 Arbitration Register"
   CAN_MOAR32            "CAN Message Object 32 Arbitration Register"
   CAN_MOAR33            "CAN Message Object 33 Arbitration Register"
   CAN_MOAR34            "CAN Message Object 34 Arbitration Register"
   CAN_MOAR35            "CAN Message Object 35 Arbitration Register"
   CAN_MOAR36            "CAN Message Object 36 Arbitration Register"
   CAN_MOAR37            "CAN Message Object 37 Arbitration Register"
   CAN_MOAR38            "CAN Message Object 38 Arbitration Register"
   CAN_MOAR39            "CAN Message Object 39 Arbitration Register"
   CAN_MOAR4             "CAN Message Object 4 Arbitration Register"
   CAN_MOAR40            "CAN Message Object 40 Arbitration Register"
   CAN_MOAR41            "CAN Message Object 41 Arbitration Register"
   CAN_MOAR42            "CAN Message Object 42 Arbitration Register"
   CAN_MOAR43            "CAN Message Object 43 Arbitration Register"
   CAN_MOAR44            "CAN Message Object 44 Arbitration Register"
   CAN_MOAR45            "CAN Message Object 45 Arbitration Register"
   CAN_MOAR46            "CAN Message Object 46 Arbitration Register"
   CAN_MOAR47            "CAN Message Object 47 Arbitration Register"
   CAN_MOAR48            "CAN Message Object 48 Arbitration Register"
   CAN_MOAR49            "CAN Message Object 49 Arbitration Register"
   CAN_MOAR5             "CAN Message Object 5 Arbitration Register"
   CAN_MOAR50            "CAN Message Object 50 Arbitration Register"
   CAN_MOAR51            "CAN Message Object 51 Arbitration Register"
   CAN_MOAR52            "CAN Message Object 52 Arbitration Register"
   CAN_MOAR53            "CAN Message Object 53 Arbitration Register"
   CAN_MOAR54            "CAN Message Object 54 Arbitration Register"
   CAN_MOAR55            "CAN Message Object 55 Arbitration Register"
   CAN_MOAR56            "CAN Message Object 56 Arbitration Register"
   CAN_MOAR57            "CAN Message Object 57 Arbitration Register"
   CAN_MOAR58            "CAN Message Object 58 Arbitration Register"
   CAN_MOAR59            "CAN Message Object 59 Arbitration Register"
   CAN_MOAR6             "CAN Message Object 6 Arbitration Register"
   CAN_MOAR60            "CAN Message Object 60 Arbitration Register"
   CAN_MOAR61            "CAN Message Object 61 Arbitration Register"
   CAN_MOAR62            "CAN Message Object 62 Arbitration Register"
   CAN_MOAR63            "CAN Message Object 63 Arbitration Register"
   CAN_MOAR7             "CAN Message Object 7 Arbitration Register"
   CAN_MOAR8             "CAN Message Object 8 Arbitration Register"
   CAN_MOAR9             "CAN Message Object 9 Arbitration Register"
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

/********************** CAN_MODATAHm_t *************************/
/*
   CAN_MODATAH0          "CAN Message Object 0 Data Register High"
   CAN_MODATAH1          "CAN Message Object 1 Data Register High"
   CAN_MODATAH10         "CAN Message Object 10 Data Register High"
   CAN_MODATAH11         "CAN Message Object 11 Data Register High"
   CAN_MODATAH12         "CAN Message Object 12 Data Register High"
   CAN_MODATAH13         "CAN Message Object 13 Data Register High"
   CAN_MODATAH14         "CAN Message Object 14 Data Register High"
   CAN_MODATAH15         "CAN Message Object 15 Data Register High"
   CAN_MODATAH16         "CAN Message Object 16 Data Register High"
   CAN_MODATAH17         "CAN Message Object 17 Data Register High"
   CAN_MODATAH18         "CAN Message Object 18 Data Register High"
   CAN_MODATAH19         "CAN Message Object 19 Data Register High"
   CAN_MODATAH2          "CAN Message Object 2 Data Register High"
   CAN_MODATAH20         "CAN Message Object 20 Data Register High"
   CAN_MODATAH21         "CAN Message Object 21 Data Register High"
   CAN_MODATAH22         "CAN Message Object 22 Data Register High"
   CAN_MODATAH23         "CAN Message Object 23 Data Register High"
   CAN_MODATAH24         "CAN Message Object 24 Data Register High"
   CAN_MODATAH25         "CAN Message Object 25 Data Register High"
   CAN_MODATAH26         "CAN Message Object 26 Data Register High"
   CAN_MODATAH27         "CAN Message Object 27 Data Register High"
   CAN_MODATAH28         "CAN Message Object 28 Data Register High"
   CAN_MODATAH29         "CAN Message Object 29 Data Register High"
   CAN_MODATAH3          "CAN Message Object 3 Data Register High"
   CAN_MODATAH30         "CAN Message Object 30 Data Register High"
   CAN_MODATAH31         "CAN Message Object 31 Data Register High"
   CAN_MODATAH32         "CAN Message Object 32 Data Register High"
   CAN_MODATAH33         "CAN Message Object 33 Data Register High"
   CAN_MODATAH34         "CAN Message Object 34 Data Register High"
   CAN_MODATAH35         "CAN Message Object 35 Data Register High"
   CAN_MODATAH36         "CAN Message Object 36 Data Register High"
   CAN_MODATAH37         "CAN Message Object 37 Data Register High"
   CAN_MODATAH38         "CAN Message Object 38 Data Register High"
   CAN_MODATAH39         "CAN Message Object 39 Data Register High"
   CAN_MODATAH4          "CAN Message Object 4 Data Register High"
   CAN_MODATAH40         "CAN Message Object 40 Data Register High"
   CAN_MODATAH41         "CAN Message Object 41 Data Register High"
   CAN_MODATAH42         "CAN Message Object 42 Data Register High"
   CAN_MODATAH43         "CAN Message Object 43 Data Register High"
   CAN_MODATAH44         "CAN Message Object 44 Data Register High"
   CAN_MODATAH45         "CAN Message Object 45 Data Register High"
   CAN_MODATAH46         "CAN Message Object 46 Data Register High"
   CAN_MODATAH47         "CAN Message Object 47 Data Register High"
   CAN_MODATAH48         "CAN Message Object 48 Data Register High"
   CAN_MODATAH49         "CAN Message Object 49 Data Register High"
   CAN_MODATAH5          "CAN Message Object 5 Data Register High"
   CAN_MODATAH50         "CAN Message Object 50 Data Register High"
   CAN_MODATAH51         "CAN Message Object 51 Data Register High"
   CAN_MODATAH52         "CAN Message Object 52 Data Register High"
   CAN_MODATAH53         "CAN Message Object 53 Data Register High"
   CAN_MODATAH54         "CAN Message Object 54 Data Register High"
   CAN_MODATAH55         "CAN Message Object 55 Data Register High"
   CAN_MODATAH56         "CAN Message Object 56 Data Register High"
   CAN_MODATAH57         "CAN Message Object 57 Data Register High"
   CAN_MODATAH58         "CAN Message Object 58 Data Register High"
   CAN_MODATAH59         "CAN Message Object 59 Data Register High"
   CAN_MODATAH6          "CAN Message Object 6 Data Register High"
   CAN_MODATAH60         "CAN Message Object 60 Data Register High"
   CAN_MODATAH61         "CAN Message Object 61 Data Register High"
   CAN_MODATAH62         "CAN Message Object 62 Data Register High"
   CAN_MODATAH63         "CAN Message Object 63 Data Register High"
   CAN_MODATAH7          "CAN Message Object 7 Data Register High"
   CAN_MODATAH8          "CAN Message Object 8 Data Register High"
   CAN_MODATAH9          "CAN Message Object 9 Data Register High"
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
   CAN_MODATAL0          "CAN Message Object 0 Data Register Low"
   CAN_MODATAL1          "CAN Message Object 1 Data Register Low"
   CAN_MODATAL10         "CAN Message Object 10 Data Register Low"
   CAN_MODATAL11         "CAN Message Object 11 Data Register Low"
   CAN_MODATAL12         "CAN Message Object 12 Data Register Low"
   CAN_MODATAL13         "CAN Message Object 13 Data Register Low"
   CAN_MODATAL14         "CAN Message Object 14 Data Register Low"
   CAN_MODATAL15         "CAN Message Object 15 Data Register Low"
   CAN_MODATAL16         "CAN Message Object 16 Data Register Low"
   CAN_MODATAL17         "CAN Message Object 17 Data Register Low"
   CAN_MODATAL18         "CAN Message Object 18 Data Register Low"
   CAN_MODATAL19         "CAN Message Object 19 Data Register Low"
   CAN_MODATAL2          "CAN Message Object 2 Data Register Low"
   CAN_MODATAL20         "CAN Message Object 20 Data Register Low"
   CAN_MODATAL21         "CAN Message Object 21 Data Register Low"
   CAN_MODATAL22         "CAN Message Object 22 Data Register Low"
   CAN_MODATAL23         "CAN Message Object 23 Data Register Low"
   CAN_MODATAL24         "CAN Message Object 24 Data Register Low"
   CAN_MODATAL25         "CAN Message Object 25 Data Register Low"
   CAN_MODATAL26         "CAN Message Object 26 Data Register Low"
   CAN_MODATAL27         "CAN Message Object 27 Data Register Low"
   CAN_MODATAL28         "CAN Message Object 28 Data Register Low"
   CAN_MODATAL29         "CAN Message Object 29 Data Register Low"
   CAN_MODATAL3          "CAN Message Object 3 Data Register Low"
   CAN_MODATAL30         "CAN Message Object 30 Data Register Low"
   CAN_MODATAL31         "CAN Message Object 31 Data Register Low"
   CAN_MODATAL32         "CAN Message Object 32 Data Register Low"
   CAN_MODATAL33         "CAN Message Object 33 Data Register Low"
   CAN_MODATAL34         "CAN Message Object 34 Data Register Low"
   CAN_MODATAL35         "CAN Message Object 35 Data Register Low"
   CAN_MODATAL36         "CAN Message Object 36 Data Register Low"
   CAN_MODATAL37         "CAN Message Object 37 Data Register Low"
   CAN_MODATAL38         "CAN Message Object 38 Data Register Low"
   CAN_MODATAL39         "CAN Message Object 39 Data Register Low"
   CAN_MODATAL4          "CAN Message Object 4 Data Register Low"
   CAN_MODATAL40         "CAN Message Object 40 Data Register Low"
   CAN_MODATAL41         "CAN Message Object 41 Data Register Low"
   CAN_MODATAL42         "CAN Message Object 42 Data Register Low"
   CAN_MODATAL43         "CAN Message Object 43 Data Register Low"
   CAN_MODATAL44         "CAN Message Object 44 Data Register Low"
   CAN_MODATAL45         "CAN Message Object 45 Data Register Low"
   CAN_MODATAL46         "CAN Message Object 46 Data Register Low"
   CAN_MODATAL47         "CAN Message Object 47 Data Register Low"
   CAN_MODATAL48         "CAN Message Object 48 Data Register Low"
   CAN_MODATAL49         "CAN Message Object 49 Data Register Low"
   CAN_MODATAL5          "CAN Message Object 5 Data Register Low"
   CAN_MODATAL50         "CAN Message Object 50 Data Register Low"
   CAN_MODATAL51         "CAN Message Object 51 Data Register Low"
   CAN_MODATAL52         "CAN Message Object 52 Data Register Low"
   CAN_MODATAL53         "CAN Message Object 53 Data Register Low"
   CAN_MODATAL54         "CAN Message Object 54 Data Register Low"
   CAN_MODATAL55         "CAN Message Object 55 Data Register Low"
   CAN_MODATAL56         "CAN Message Object 56 Data Register Low"
   CAN_MODATAL57         "CAN Message Object 57 Data Register Low"
   CAN_MODATAL58         "CAN Message Object 58 Data Register Low"
   CAN_MODATAL59         "CAN Message Object 59 Data Register Low"
   CAN_MODATAL6          "CAN Message Object 6 Data Register Low"
   CAN_MODATAL60         "CAN Message Object 60 Data Register Low"
   CAN_MODATAL61         "CAN Message Object 61 Data Register Low"
   CAN_MODATAL62         "CAN Message Object 62 Data Register Low"
   CAN_MODATAL63         "CAN Message Object 63 Data Register Low"
   CAN_MODATAL7          "CAN Message Object 7 Data Register Low"
   CAN_MODATAL8          "CAN Message Object 8 Data Register Low"
   CAN_MODATAL9          "CAN Message Object 9 Data Register Low"
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
   CAN_MOFCR0            "CAN Message Object 0 Function Control Register"
   CAN_MOFCR1            "CAN Message Object 1 Function Control Register"
   CAN_MOFCR10           "CAN Message Object 10 Function Control Register"
   CAN_MOFCR11           "CAN Message Object 11 Function Control Register"
   CAN_MOFCR12           "CAN Message Object 12 Function Control Register"
   CAN_MOFCR13           "CAN Message Object 13 Function Control Register"
   CAN_MOFCR14           "CAN Message Object 14 Function Control Register"
   CAN_MOFCR15           "CAN Message Object 15 Function Control Register"
   CAN_MOFCR16           "CAN Message Object 16 Function Control Register"
   CAN_MOFCR17           "CAN Message Object 17 Function Control Register"
   CAN_MOFCR18           "CAN Message Object 18 Function Control Register"
   CAN_MOFCR19           "CAN Message Object 19 Function Control Register"
   CAN_MOFCR2            "CAN Message Object 2 Function Control Register"
   CAN_MOFCR20           "CAN Message Object 20 Function Control Register"
   CAN_MOFCR21           "CAN Message Object 21 Function Control Register"
   CAN_MOFCR22           "CAN Message Object 22 Function Control Register"
   CAN_MOFCR23           "CAN Message Object 23 Function Control Register"
   CAN_MOFCR24           "CAN Message Object 24 Function Control Register"
   CAN_MOFCR25           "CAN Message Object 25 Function Control Register"
   CAN_MOFCR26           "CAN Message Object 26 Function Control Register"
   CAN_MOFCR27           "CAN Message Object 27 Function Control Register"
   CAN_MOFCR28           "CAN Message Object 28 Function Control Register"
   CAN_MOFCR29           "CAN Message Object 29 Function Control Register"
   CAN_MOFCR3            "CAN Message Object 3 Function Control Register"
   CAN_MOFCR30           "CAN Message Object 30 Function Control Register"
   CAN_MOFCR31           "CAN Message Object 31 Function Control Register"
   CAN_MOFCR32           "CAN Message Object 32 Function Control Register"
   CAN_MOFCR33           "CAN Message Object 33 Function Control Register"
   CAN_MOFCR34           "CAN Message Object 34 Function Control Register"
   CAN_MOFCR35           "CAN Message Object 35 Function Control Register"
   CAN_MOFCR36           "CAN Message Object 36 Function Control Register"
   CAN_MOFCR37           "CAN Message Object 37 Function Control Register"
   CAN_MOFCR38           "CAN Message Object 38 Function Control Register"
   CAN_MOFCR39           "CAN Message Object 39 Function Control Register"
   CAN_MOFCR4            "CAN Message Object 4 Function Control Register"
   CAN_MOFCR40           "CAN Message Object 40 Function Control Register"
   CAN_MOFCR41           "CAN Message Object 41 Function Control Register"
   CAN_MOFCR42           "CAN Message Object 42 Function Control Register"
   CAN_MOFCR43           "CAN Message Object 43 Function Control Register"
   CAN_MOFCR44           "CAN Message Object 44 Function Control Register"
   CAN_MOFCR45           "CAN Message Object 45 Function Control Register"
   CAN_MOFCR46           "CAN Message Object 46 Function Control Register"
   CAN_MOFCR47           "CAN Message Object 47 Function Control Register"
   CAN_MOFCR48           "CAN Message Object 48 Function Control Register"
   CAN_MOFCR49           "CAN Message Object 49 Function Control Register"
   CAN_MOFCR5            "CAN Message Object 5 Function Control Register"
   CAN_MOFCR50           "CAN Message Object 50 Function Control Register"
   CAN_MOFCR51           "CAN Message Object 51 Function Control Register"
   CAN_MOFCR52           "CAN Message Object 52 Function Control Register"
   CAN_MOFCR53           "CAN Message Object 53 Function Control Register"
   CAN_MOFCR54           "CAN Message Object 54 Function Control Register"
   CAN_MOFCR55           "CAN Message Object 55 Function Control Register"
   CAN_MOFCR56           "CAN Message Object 56 Function Control Register"
   CAN_MOFCR57           "CAN Message Object 57 Function Control Register"
   CAN_MOFCR58           "CAN Message Object 58 Function Control Register"
   CAN_MOFCR59           "CAN Message Object 59 Function Control Register"
   CAN_MOFCR6            "CAN Message Object 6 Function Control Register"
   CAN_MOFCR60           "CAN Message Object 60 Function Control Register"
   CAN_MOFCR61           "CAN Message Object 61 Function Control Register"
   CAN_MOFCR62           "CAN Message Object 62 Function Control Register"
   CAN_MOFCR63           "CAN Message Object 63 Function Control Register"
   CAN_MOFCR7            "CAN Message Object 7 Function Control Register"
   CAN_MOFCR8            "CAN Message Object 8 Function Control Register"
   CAN_MOFCR9            "CAN Message Object 9 Function Control Register"
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
   CAN_MOFGPR0           "CAN Message Object 0 FIFO/Gateway Pointer Register"
   CAN_MOFGPR1           "CAN Message Object 1 FIFO/Gateway Pointer Register"
   CAN_MOFGPR10          "CAN Message Object 10 FIFO/Gateway Pointer Register"
   CAN_MOFGPR11          "CAN Message Object 11 FIFO/Gateway Pointer Register"
   CAN_MOFGPR12          "CAN Message Object 12 FIFO/Gateway Pointer Register"
   CAN_MOFGPR13          "CAN Message Object 13 FIFO/Gateway Pointer Register"
   CAN_MOFGPR14          "CAN Message Object 14 FIFO/Gateway Pointer Register"
   CAN_MOFGPR15          "CAN Message Object 15 FIFO/Gateway Pointer Register"
   CAN_MOFGPR16          "CAN Message Object 16 FIFO/Gateway Pointer Register"
   CAN_MOFGPR17          "CAN Message Object 17 FIFO/Gateway Pointer Register"
   CAN_MOFGPR18          "CAN Message Object 18 FIFO/Gateway Pointer Register"
   CAN_MOFGPR19          "CAN Message Object 19 FIFO/Gateway Pointer Register"
   CAN_MOFGPR2           "CAN Message Object 2 FIFO/Gateway Pointer Register"
   CAN_MOFGPR20          "CAN Message Object 20 FIFO/Gateway Pointer Register"
   CAN_MOFGPR21          "CAN Message Object 21 FIFO/Gateway Pointer Register"
   CAN_MOFGPR22          "CAN Message Object 22 FIFO/Gateway Pointer Register"
   CAN_MOFGPR23          "CAN Message Object 23 FIFO/Gateway Pointer Register"
   CAN_MOFGPR24          "CAN Message Object 24 FIFO/Gateway Pointer Register"
   CAN_MOFGPR25          "CAN Message Object 25 FIFO/Gateway Pointer Register"
   CAN_MOFGPR26          "CAN Message Object 26 FIFO/Gateway Pointer Register"
   CAN_MOFGPR27          "CAN Message Object 27 FIFO/Gateway Pointer Register"
   CAN_MOFGPR28          "CAN Message Object 28 FIFO/Gateway Pointer Register"
   CAN_MOFGPR29          "CAN Message Object 29 FIFO/Gateway Pointer Register"
   CAN_MOFGPR3           "CAN Message Object 3 FIFO/Gateway Pointer Register"
   CAN_MOFGPR30          "CAN Message Object 30 FIFO/Gateway Pointer Register"
   CAN_MOFGPR31          "CAN Message Object 31 FIFO/Gateway Pointer Register"
   CAN_MOFGPR32          "CAN Message Object 32 FIFO/Gateway Pointer Register"
   CAN_MOFGPR33          "CAN Message Object 33 FIFO/Gateway Pointer Register"
   CAN_MOFGPR34          "CAN Message Object 34 FIFO/Gateway Pointer Register"
   CAN_MOFGPR35          "CAN Message Object 35 FIFO/Gateway Pointer Register"
   CAN_MOFGPR36          "CAN Message Object 36 FIFO/Gateway Pointer Register"
   CAN_MOFGPR37          "CAN Message Object 37 FIFO/Gateway Pointer Register"
   CAN_MOFGPR38          "CAN Message Object 38 FIFO/Gateway Pointer Register"
   CAN_MOFGPR39          "CAN Message Object 39 FIFO/Gateway Pointer Register"
   CAN_MOFGPR4           "CAN Message Object 4 FIFO/Gateway Pointer Register"
   CAN_MOFGPR40          "CAN Message Object 40 FIFO/Gateway Pointer Register"
   CAN_MOFGPR41          "CAN Message Object 41 FIFO/Gateway Pointer Register"
   CAN_MOFGPR42          "CAN Message Object 42 FIFO/Gateway Pointer Register"
   CAN_MOFGPR43          "CAN Message Object 43 FIFO/Gateway Pointer Register"
   CAN_MOFGPR44          "CAN Message Object 44 FIFO/Gateway Pointer Register"
   CAN_MOFGPR45          "CAN Message Object 45 FIFO/Gateway Pointer Register"
   CAN_MOFGPR46          "CAN Message Object 46 FIFO/Gateway Pointer Register"
   CAN_MOFGPR47          "CAN Message Object 47 FIFO/Gateway Pointer Register"
   CAN_MOFGPR48          "CAN Message Object 48 FIFO/Gateway Pointer Register"
   CAN_MOFGPR49          "CAN Message Object 49 FIFO/Gateway Pointer Register"
   CAN_MOFGPR5           "CAN Message Object 5 FIFO/Gateway Pointer Register"
   CAN_MOFGPR50          "CAN Message Object 50 FIFO/Gateway Pointer Register"
   CAN_MOFGPR51          "CAN Message Object 51 FIFO/Gateway Pointer Register"
   CAN_MOFGPR52          "CAN Message Object 52 FIFO/Gateway Pointer Register"
   CAN_MOFGPR53          "CAN Message Object 53 FIFO/Gateway Pointer Register"
   CAN_MOFGPR54          "CAN Message Object 54 FIFO/Gateway Pointer Register"
   CAN_MOFGPR55          "CAN Message Object 55 FIFO/Gateway Pointer Register"
   CAN_MOFGPR56          "CAN Message Object 56 FIFO/Gateway Pointer Register"
   CAN_MOFGPR57          "CAN Message Object 57 FIFO/Gateway Pointer Register"
   CAN_MOFGPR58          "CAN Message Object 58 FIFO/Gateway Pointer Register"
   CAN_MOFGPR59          "CAN Message Object 59 FIFO/Gateway Pointer Register"
   CAN_MOFGPR6           "CAN Message Object 6 FIFO/Gateway Pointer Register"
   CAN_MOFGPR60          "CAN Message Object 60 FIFO/Gateway Pointer Register"
   CAN_MOFGPR61          "CAN Message Object 61 FIFO/Gateway Pointer Register"
   CAN_MOFGPR62          "CAN Message Object 62 FIFO/Gateway Pointer Register"
   CAN_MOFGPR63          "CAN Message Object 63 FIFO/Gateway Pointer Register"
   CAN_MOFGPR7           "CAN Message Object 7 FIFO/Gateway Pointer Register"
   CAN_MOFGPR8           "CAN Message Object 8 FIFO/Gateway Pointer Register"
   CAN_MOFGPR9           "CAN Message Object 9 FIFO/Gateway Pointer Register"
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
   CAN_MOIPR0            "CAN Message Object 0 Interrupt Pointer Register"
   CAN_MOIPR1            "CAN Message Object 1 Interrupt Pointer Register"
   CAN_MOIPR10           "CAN Message Object 10 Interrupt Pointer Register"
   CAN_MOIPR11           "CAN Message Object 11 Interrupt Pointer Register"
   CAN_MOIPR12           "CAN Message Object 12 Interrupt Pointer Register"
   CAN_MOIPR13           "CAN Message Object 13 Interrupt Pointer Register"
   CAN_MOIPR14           "CAN Message Object 14 Interrupt Pointer Register"
   CAN_MOIPR15           "CAN Message Object 15 Interrupt Pointer Register"
   CAN_MOIPR16           "CAN Message Object 16 Interrupt Pointer Register"
   CAN_MOIPR17           "CAN Message Object 17 Interrupt Pointer Register"
   CAN_MOIPR18           "CAN Message Object 18 Interrupt Pointer Register"
   CAN_MOIPR19           "CAN Message Object 19 Interrupt Pointer Register"
   CAN_MOIPR2            "CAN Message Object 2 Interrupt Pointer Register"
   CAN_MOIPR20           "CAN Message Object 20 Interrupt Pointer Register"
   CAN_MOIPR21           "CAN Message Object 21 Interrupt Pointer Register"
   CAN_MOIPR22           "CAN Message Object 22 Interrupt Pointer Register"
   CAN_MOIPR23           "CAN Message Object 23 Interrupt Pointer Register"
   CAN_MOIPR24           "CAN Message Object 24 Interrupt Pointer Register"
   CAN_MOIPR25           "CAN Message Object 25 Interrupt Pointer Register"
   CAN_MOIPR26           "CAN Message Object 26 Interrupt Pointer Register"
   CAN_MOIPR27           "CAN Message Object 27 Interrupt Pointer Register"
   CAN_MOIPR28           "CAN Message Object 28 Interrupt Pointer Register"
   CAN_MOIPR29           "CAN Message Object 29 Interrupt Pointer Register"
   CAN_MOIPR3            "CAN Message Object 3 Interrupt Pointer Register"
   CAN_MOIPR30           "CAN Message Object 30 Interrupt Pointer Register"
   CAN_MOIPR31           "CAN Message Object 31 Interrupt Pointer Register"
   CAN_MOIPR32           "CAN Message Object 32 Interrupt Pointer Register"
   CAN_MOIPR33           "CAN Message Object 33 Interrupt Pointer Register"
   CAN_MOIPR34           "CAN Message Object 34 Interrupt Pointer Register"
   CAN_MOIPR35           "CAN Message Object 35 Interrupt Pointer Register"
   CAN_MOIPR36           "CAN Message Object 36 Interrupt Pointer Register"
   CAN_MOIPR37           "CAN Message Object 37 Interrupt Pointer Register"
   CAN_MOIPR38           "CAN Message Object 38 Interrupt Pointer Register"
   CAN_MOIPR39           "CAN Message Object 39 Interrupt Pointer Register"
   CAN_MOIPR4            "CAN Message Object 4 Interrupt Pointer Register"
   CAN_MOIPR40           "CAN Message Object 40 Interrupt Pointer Register"
   CAN_MOIPR41           "CAN Message Object 41 Interrupt Pointer Register"
   CAN_MOIPR42           "CAN Message Object 42 Interrupt Pointer Register"
   CAN_MOIPR43           "CAN Message Object 43 Interrupt Pointer Register"
   CAN_MOIPR44           "CAN Message Object 44 Interrupt Pointer Register"
   CAN_MOIPR45           "CAN Message Object 45 Interrupt Pointer Register"
   CAN_MOIPR46           "CAN Message Object 46 Interrupt Pointer Register"
   CAN_MOIPR47           "CAN Message Object 47 Interrupt Pointer Register"
   CAN_MOIPR48           "CAN Message Object 48 Interrupt Pointer Register"
   CAN_MOIPR49           "CAN Message Object 49 Interrupt Pointer Register"
   CAN_MOIPR5            "CAN Message Object 5 Interrupt Pointer Register"
   CAN_MOIPR50           "CAN Message Object 50 Interrupt Pointer Register"
   CAN_MOIPR51           "CAN Message Object 51 Interrupt Pointer Register"
   CAN_MOIPR52           "CAN Message Object 52 Interrupt Pointer Register"
   CAN_MOIPR53           "CAN Message Object 53 Interrupt Pointer Register"
   CAN_MOIPR54           "CAN Message Object 54 Interrupt Pointer Register"
   CAN_MOIPR55           "CAN Message Object 55 Interrupt Pointer Register"
   CAN_MOIPR56           "CAN Message Object 56 Interrupt Pointer Register"
   CAN_MOIPR57           "CAN Message Object 57 Interrupt Pointer Register"
   CAN_MOIPR58           "CAN Message Object 58 Interrupt Pointer Register"
   CAN_MOIPR59           "CAN Message Object 59 Interrupt Pointer Register"
   CAN_MOIPR6            "CAN Message Object 6 Interrupt Pointer Register"
   CAN_MOIPR60           "CAN Message Object 60 Interrupt Pointer Register"
   CAN_MOIPR61           "CAN Message Object 61 Interrupt Pointer Register"
   CAN_MOIPR62           "CAN Message Object 62 Interrupt Pointer Register"
   CAN_MOIPR63           "CAN Message Object 63 Interrupt Pointer Register"
   CAN_MOIPR7            "CAN Message Object 7 Interrupt Pointer Register"
   CAN_MOIPR8            "CAN Message Object 8 Interrupt Pointer Register"
   CAN_MOIPR9            "CAN Message Object 9 Interrupt Pointer Register"
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

/********************** CAN_MOSTATm_t *************************/
/*
   CAN_MOSTAT0           "CAN Message Object 0"
   CAN_MOSTAT1           "CAN Message Object 1"
   CAN_MOSTAT10          "CAN Message Object 10"
   CAN_MOSTAT11          "CAN Message Object 11"
   CAN_MOSTAT12          "CAN Message Object 12"
   CAN_MOSTAT13          "CAN Message Object 13"
   CAN_MOSTAT14          "CAN Message Object 14"
   CAN_MOSTAT15          "CAN Message Object 15"
   CAN_MOSTAT16          "CAN Message Object 16"
   CAN_MOSTAT17          "CAN Message Object 17"
   CAN_MOSTAT18          "CAN Message Object 18"
   CAN_MOSTAT19          "CAN Message Object 19"
   CAN_MOSTAT2           "CAN Message Object 2"
   CAN_MOSTAT20          "CAN Message Object 20"
   CAN_MOSTAT21          "CAN Message Object 21"
   CAN_MOSTAT22          "CAN Message Object 22"
   CAN_MOSTAT23          "CAN Message Object 23"
   CAN_MOSTAT24          "CAN Message Object 24"
   CAN_MOSTAT25          "CAN Message Object 25"
   CAN_MOSTAT26          "CAN Message Object 26"
   CAN_MOSTAT27          "CAN Message Object 27"
   CAN_MOSTAT28          "CAN Message Object 28"
   CAN_MOSTAT29          "CAN Message Object 29"
   CAN_MOSTAT3           "CAN Message Object 3"
   CAN_MOSTAT30          "CAN Message Object 30"
   CAN_MOSTAT31          "CAN Message Object 31"
   CAN_MOSTAT32          "CAN Message Object 32"
   CAN_MOSTAT33          "CAN Message Object 33"
   CAN_MOSTAT34          "CAN Message Object 34"
   CAN_MOSTAT35          "CAN Message Object 35"
   CAN_MOSTAT36          "CAN Message Object 36"
   CAN_MOSTAT37          "CAN Message Object 37"
   CAN_MOSTAT38          "CAN Message Object 38"
   CAN_MOSTAT39          "CAN Message Object 39"
   CAN_MOSTAT4           "CAN Message Object 4"
   CAN_MOSTAT40          "CAN Message Object 40"
   CAN_MOSTAT41          "CAN Message Object 41"
   CAN_MOSTAT42          "CAN Message Object 42"
   CAN_MOSTAT43          "CAN Message Object 43"
   CAN_MOSTAT44          "CAN Message Object 44"
   CAN_MOSTAT45          "CAN Message Object 45"
   CAN_MOSTAT46          "CAN Message Object 46"
   CAN_MOSTAT47          "CAN Message Object 47"
   CAN_MOSTAT48          "CAN Message Object 48"
   CAN_MOSTAT49          "CAN Message Object 49"
   CAN_MOSTAT5           "CAN Message Object 5"
   CAN_MOSTAT50          "CAN Message Object 50"
   CAN_MOSTAT51          "CAN Message Object 51"
   CAN_MOSTAT52          "CAN Message Object 52"
   CAN_MOSTAT53          "CAN Message Object 53"
   CAN_MOSTAT54          "CAN Message Object 54"
   CAN_MOSTAT55          "CAN Message Object 55"
   CAN_MOSTAT56          "CAN Message Object 56"
   CAN_MOSTAT57          "CAN Message Object 57"
   CAN_MOSTAT58          "CAN Message Object 58"
   CAN_MOSTAT59          "CAN Message Object 59"
   CAN_MOSTAT6           "CAN Message Object 6"
   CAN_MOSTAT60          "CAN Message Object 60"
   CAN_MOSTAT61          "CAN Message Object 61"
   CAN_MOSTAT62          "CAN Message Object 62"
   CAN_MOSTAT63          "CAN Message Object 63"
   CAN_MOSTAT7           "CAN Message Object 7"
   CAN_MOSTAT8           "CAN Message Object 8"
   CAN_MOSTAT9           "CAN Message Object 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct { /* CAN Message Object 0 Control Register */
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
   struct { /* CAN Message Object 0 Status Register */
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
} __attribute__((aligned(4))) CAN_MOSTATm_t_nonv;

typedef volatile CAN_MOSTATm_t_nonv CAN_MOSTATm_t;

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
   CAN_SRC2              "CAN Service Request Control Register 2"
   CAN_SRC3              "CAN Service Request Control Register 3"
   CAN_SRC4              "CAN Service Request Control Register 4"
   CAN_SRC5              "CAN Service Request Control Register 5"
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

