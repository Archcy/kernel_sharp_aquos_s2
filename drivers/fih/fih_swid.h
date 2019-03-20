#ifndef __FIH_SWID_H__
#define __FIH_SWID_H__

/* special for modem to link this file
 * to get the project, phase, and band enum */

enum {
	FIH_SWID_PRJ_S2Plus = 0,
	FIH_SWID_PRJ_S2     = 1,
	FIH_SWID_PRJ_C1N    = 2,
	FIH_SWID_PRJ_PL2    = 3,
	FIH_SWID_PRJ_SD1    = 4,
	FIH_SWID_PRJ_S3_630 = 5,
	FIH_SWID_PRJ_B2N    = 7,
	FIH_SWID_PRJ_HH1    = 8,
    FIH_SWID_PRJ_HH6    = 10,
    FIH_SWID_PRJ_HG1    = 11,
	FIH_SWID_PRJ_CTL    = 12,
	FIH_SWID_PRJ_HC1    = 13,
	FIH_SWID_PRJ_MAX
};

enum {
	FIH_SWID_REV_DEFAULT = 0,

	FIH_SWID_REV_EVB = 1,
	FIH_SWID_REV_EVB2,
	FIH_SWID_REV_EVB3,
	FIH_SWID_REV_EVB4,
	FIH_SWID_REV_EVB5,
	FIH_SWID_REV_PRE_EVT = 10,
	FIH_SWID_REV_PRE_EVT2,
	FIH_SWID_REV_PRE_EVT3,
	FIH_SWID_REV_PRE_EVT4,
	FIH_SWID_REV_PRE_EVT5,
	FIH_SWID_REV_PRE_EVT6,
	FIH_SWID_REV_PRE_EVT7,
	FIH_SWID_REV_PRE_EVT8,
	FIH_SWID_REV_PRE_EVT9,
	FIH_SWID_REV_EVT = 20,
	FIH_SWID_REV_EVT2,
	FIH_SWID_REV_EVT3,
	FIH_SWID_REV_EVT4,
	FIH_SWID_REV_EVT5,
	FIH_SWID_REV_EVT6,
	FIH_SWID_REV_EVT7,
	FIH_SWID_REV_EVT8,
	FIH_SWID_REV_EVT9,
	FIH_SWID_REV_DVT = 30,
	FIH_SWID_REV_DVT2,
	FIH_SWID_REV_DVT3,
	FIH_SWID_REV_DVT4,
	FIH_SWID_REV_DVT5,
	FIH_SWID_REV_DVT6,
	FIH_SWID_REV_DVT7,
	FIH_SWID_REV_DVT8,
	FIH_SWID_REV_DVT9,
	FIH_SWID_REV_PVT = 40,
	FIH_SWID_REV_PVT2,
	FIH_SWID_REV_PVT3,
	FIH_SWID_REV_PVT4,
	FIH_SWID_REV_PVT5,
	FIH_SWID_REV_PVT6,
	FIH_SWID_REV_PVT7,
	FIH_SWID_REV_PVT8,
	FIH_SWID_REV_PVT9,
	FIH_SWID_REV_MP = 50,
	FIH_SWID_REV_MP2,
	FIH_SWID_REV_MP3,
	FIH_SWID_REV_MP4,
	FIH_SWID_REV_MP5,

	FIH_SWID_REV_MAX = 255,
};

enum {
	FIH_SWID_BAND_DEFAULT = 0,

	/* SAT, G_850_900_1800_1900^W_1_2_5_8^C_0^T_34_39^L_1_3_4_5_7_8_12_17_28_34_38_39_40_41 */
	FIH_SWID_BAND_SAT = 1,
	/* C1N APAC, G_850_900_1800_1900^W_1_2_5_8^L_1_3_5_7_8_20_28_38_40_41 */
	FIH_SWID_BAND_C1N_APAC = 2,
	/* C1N LATAM, G_850_900_1800_1900^W_1_2_4_5_8^L_2_3_4_7_12_17_28_38 */
	FIH_SWID_BAND_C1N_LATAM = 4,
	/* C1N CHINA, G_850_900_1800_1900^W_1_2_5_8^C_0^T_34_39^L_1_3_5_7_8_28_38_39_40_41 */
	FIH_SWID_BAND_C1N_CHINA = 6,

	FIH_SWID_BAND_SAT_SKT = 8,

	/* SAT single antenna, G_850_900_1800_1900^W_1_2_5_8^C_0^T_34_39^L_1_3_4_5_7_8_12_17_28_34_38_39_40_41 */
	FIH_SWID_BAND_SAT_C2 = 9,
	/* SAT single antenna with B34 DRX, G_850_900_1800_1900^W_1_2_5_8^C_0^T_34_39^L_1_3_4_5_7_8_12_17_28_34_38_39_40_41 */
	FIH_SWID_BAND_SAT_C2_w_B34_DRX = 10,

    FIH_RF_G_850_900_1800_1900W_1_2_5_8C_0T_34_39L_1_3_4_5_7_8_12_17_26_28_34_38_39_40_41 = 11,//HG1

	/* SD1, G_850_900_1800_1900^W_1_2_5_8^C_0^T_34_39^L_1_3_4_5_7_8_12_17_26_28_34_38_39_40_41 */
	FIH_SWID_BAND_SD1 = 11,
	FIH_SWID_BAND_S3_DOCOMO = 12,
    FIH_RF_G_850_900_1800_1900W_1_2_5L_1_3_5_7_8_17_26 = 13,//HH6

	/*PLE2 all, G_850_900_1800_1900^W_1_2_5_8^C_0^T_34_39^L_1_2_3_4_5_7_8_12_17_20_28_34_38_39_40_41*/
	FIH_SWID_BAND_PLE2 = 21,

	FIH_SWID_BAND_MAX = 255,
};

//bit 1 is define for FIH FREQ Key: VolUP connect to PMIC RESIN, VolDOWN connect to GPIO
//..
enum {
	FIH_BSP_DEFAULT = 0,
	FIH_BSP_FIH_KEY = 1<<0, //Support FIH FREQ KEY Definition,
};

enum {
	FIH_SWID_SKU_DEFAULT = 0,
};

enum {
	FIH_SWID_SIM_DEFAULT = 0,

	FIH_SWID_SIM_SINGLE = 1,
	FIH_SWID_SIM_DUAL   = 2,
};

enum {
	FIH_SWID_PROJECT = 0,
	FIH_SWID_HWREV,
	FIH_SWID_BSP,
	FIH_SWID_RF,
//	FIH_SWID_MODULE, //NOT USED
	FIH_SWID_SIM,
	FIH_SWID_DTM,
	FIH_SWID_DTN,
	FIH_SWID_HWID,
	//
	FIH_SWID_PROJECT_NAME,
	FIH_SWID_FACTORY_NAME,
	FIH_SWID_PHASE_SW,
	FIH_SWID_PHASE_HW,
	FIH_SWID_SKU_NAME,
	FIH_SWID_RF_BAND,
	FIH_SWID_PCBA_DESCRIPTION,
	/* max */
	FIH_SWID_MAX
};

struct st_swid_table{
    char hwid[2];
    char project;
    char hw_rev;
    char rf;
    char bsp;
    char dtm;
    char dtn;
    char sim;
		//reserved
	char RESERVED[23];
		//info
	char	project_name[16];
	char	factory_name[16];
	char	phase_sw[16];
	char	phase_hw[16];
	char	sku_name[16];
	char	rf_band[255];
		//RESERVED2
	char reserved_tag_2[17];
		//BB-PCBA description
	char  pcba_description[640];
};

void fih_swid_setup(void);
void fih_swid_print(struct st_swid_table *tb);
void fih_swid_read(struct st_swid_table *tb);
void* fih_swid_fetch(int idx);

#endif /* __FIH_SWID_H__ */
