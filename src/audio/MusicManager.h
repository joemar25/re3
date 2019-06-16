#pragma once

enum eRadioStation {
	HEAD_RADIO,
	DOUBLE_CLEF,
	JAH_RADIO,
	RISE_FM,
	LIPS_106,
	GAME_FM,
	MSX_FM,
	FLASHBACK,
	CHATTERBOX,
	USERTRACK,
	POLICE_RADIO,
	RADIO_OFF,
};

enum eStreamedSounds {
	STREAMED_SOUND_RADIO_HEAD = 0,
	STREAMED_SOUND_RADIO_CLASSIC = 1,
	STREAMED_SOUND_RADIO_KJAH = 2,
	STREAMED_SOUND_RADIO_RISE = 3,
	STREAMED_SOUND_RADIO_LIPS = 4,
	STREAMED_SOUND_RADIO_GAME = 5,
	STREAMED_SOUND_RADIO_MSX = 6,
	STREAMED_SOUND_RADIO_FLASH = 7,
	STREAMED_SOUND_RADIO_CHAT = 8,
	STREAMED_SOUND_RADIO_MP3_PLAYER = 9,
	STREAMED_SOUND_RADIO_POLICE = 10,
	STREAMED_SOUND_CITY_AMBIENT = 11,
	STREAMED_SOUND_WATER_AMBIENT = 12,
	STREAMED_SOUND_ANNOUNCE_COMMERCIAL_OPEN = 13,
	STREAMED_SOUND_ANNOUNCE_SUBURBAN_OPEN = 14,
	STREAMED_SOUND_NEWS_INTRO = 15,
	STREAMED_SOUND_BANK_INTRO = 16,
	STREAMED_SOUND_CUTSCENE_LUIGI1_LG = 17,
	STREAMED_SOUND_CUTSCENE_LUIGI2_DSB = 18,
	STREAMED_SOUND_CUTSCENE_LUIGI3_DM = 19,
	STREAMED_SOUND_CUTSCENE_LUIGI4_PAP = 20,
	STREAMED_SOUND_CUTSCENE_LUIGI5_TFB = 21,
	STREAMED_SOUND_CUTSCENE_JOEY0_DM2 = 22,
	STREAMED_SOUND_CUTSCENE_JOEY1_LFL = 23,
	STREAMED_SOUND_CUTSCENE_JOEY2_KCL = 24,
	STREAMED_SOUND_CUTSCENE_JOEY3_VH = 25,
	STREAMED_SOUND_CUTSCENE_JOEY4_ETH = 26,
	STREAMED_SOUND_CUTSCENE_JOEY5_DST = 27,
	STREAMED_SOUND_CUTSCENE_JOEY6_TBJ = 28,
	STREAMED_SOUND_CUTSCENE_TONI1_TOL = 29,
	STREAMED_SOUND_CUTSCENE_TONI2_TPU = 30,
	STREAMED_SOUND_CUTSCENE_TONI3_MAS = 31,
	STREAMED_SOUND_CUTSCENE_TONI4_TAT = 32,
	STREAMED_SOUND_CUTSCENE_TONI5_BF = 33,
	STREAMED_SOUND_CUTSCENE_SAL0_MAS = 34,
	STREAMED_SOUND_CUTSCENE_SAL1_PF = 35,
	STREAMED_SOUND_CUTSCENE_SAL2_CTG = 36,
	STREAMED_SOUND_CUTSCENE_SAL3_RTC = 37,
	STREAMED_SOUND_CUTSCENE_SAL5_LRQ = 38,
	STREAMED_SOUND_CUTSCENE_SAL4_BDBA = 39,
	STREAMED_SOUND_CUTSCENE_SAL4_BDBB = 40,
	STREAMED_SOUND_CUTSCENE_SAL2_CTG2 = 41,
	STREAMED_SOUND_CUTSCENE_SAL4_BDBD = 42,
	STREAMED_SOUND_CUTSCENE_SAL5_LRQB = 43,
	STREAMED_SOUND_CUTSCENE_SAL5_LRQC = 44,
	STREAMED_SOUND_CUTSCENE_ASUKA_1_SSO = 45,
	STREAMED_SOUND_CUTSCENE_ASUKA_2_PP = 46,
	STREAMED_SOUND_CUTSCENE_ASUKA_3_SS = 47,
	STREAMED_SOUND_CUTSCENE_ASUKA_4_PDR = 48,
	STREAMED_SOUND_CUTSCENE_ASUKA_5_K2FT = 49,
	STREAMED_SOUND_CUTSCENE_KENJI1_KBO = 50,
	STREAMED_SOUND_CUTSCENE_KENJI2_GIS = 51,
	STREAMED_SOUND_CUTSCENE_KENJI3_DS = 52,
	STREAMED_SOUND_CUTSCENE_KENJI4_SHI = 53,
	STREAMED_SOUND_CUTSCENE_KENJI5_SD = 54,
	STREAMED_SOUND_CUTSCENE_RAY0_PDR2 = 55,
	STREAMED_SOUND_CUTSCENE_RAY1_SW = 56,
	STREAMED_SOUND_CUTSCENE_RAY2_AP = 57,
	STREAMED_SOUND_CUTSCENE_RAY3_ED = 58,
	STREAMED_SOUND_CUTSCENE_RAY4_GF = 59,
	STREAMED_SOUND_CUTSCENE_RAY5_PB = 60,
	STREAMED_SOUND_CUTSCENE_RAY6_MM = 61,
	STREAMED_SOUND_CUTSCENE_DONALD1_STOG = 62,
	STREAMED_SOUND_CUTSCENE_DONALD2_KK = 63,
	STREAMED_SOUND_CUTSCENE_DONALD3_ADO = 64,
	STREAMED_SOUND_CUTSCENE_DONALD5_ES = 65,
	STREAMED_SOUND_CUTSCENE_DONALD7_MLD = 66,
	STREAMED_SOUND_CUTSCENE_DONALD4_GTA = 67,
	STREAMED_SOUND_CUTSCENE_DONALD4_GTA2 = 68,
	STREAMED_SOUND_CUTSCENE_DONALD6_STS = 69,
	STREAMED_SOUND_CUTSCENE_ASUKA6_BAIT = 70,
	STREAMED_SOUND_CUTSCENE_ASUKA7_ETG = 71,
	STREAMED_SOUND_CUTSCENE_ASUKA8_PS = 72,
	STREAMED_SOUND_CUTSCENE_ASUKA9_ASD = 73,
	STREAMED_SOUND_CUTSCENE_KENJI4_SHI2 = 74,
	STREAMED_SOUND_CUTSCENE_CATALINA1_TEX = 75,
	STREAMED_SOUND_CUTSCENE_ELBURRO1_PH1 = 76,
	STREAMED_SOUND_CUTSCENE_ELBURRO2_PH2 = 77,
	STREAMED_SOUND_CUTSCENE_ELBURRO3_PH3 = 78,
	STREAMED_SOUND_CUTSCENE_ELBURRO4_PH4 = 79,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH1 = 80,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH2 = 81,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH3 = 82,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH4 = 83,
	STREAMED_SOUND_CUTSCENE_HOODS_PH1 = 84,
	STREAMED_SOUND_CUTSCENE_HOODS_PH2 = 85,
	STREAMED_SOUND_CUTSCENE_HOODS_PH3 = 86,
	STREAMED_SOUND_CUTSCENE_HOODS_PH4 = 87,
	STREAMED_SOUND_CUTSCENE_HOODS_PH5 = 88,
	STREAMED_SOUND_CUTSCENE_MARTY_PH1 = 89,
	STREAMED_SOUND_CUTSCENE_MARTY_PH2 = 90,
	STREAMED_SOUND_CUTSCENE_MARTY_PH3 = 91,
	STREAMED_SOUND_CUTSCENE_MARTY_PH4 = 92,
	STREAMED_SOUND_MISSION_COMPLETED = 93,
	STREAMED_SOUND_GAME_COMPLETED = 94,
	STREAMED_SOUND_MISSION_LIB_A1 = 95,
	STREAMED_SOUND_MISSION_LIB_A2 = 96,
	STREAMED_SOUND_MISSION_LIB_A = 97,
	STREAMED_SOUND_MISSION_LIB_B = 98,
	STREAMED_SOUND_MISSION_LIB_C = 99,
	STREAMED_SOUND_MISSION_LIB_D = 100,
	STREAMED_SOUND_MISSION_L2_A = 101,
	STREAMED_SOUND_MISSION_J4T_1 = 102,
	STREAMED_SOUND_MISSION_J4T_2 = 103,
	STREAMED_SOUND_MISSION_J4T_3 = 104,
	STREAMED_SOUND_MISSION_J4T_4 = 105,
	STREAMED_SOUND_MISSION_J4_A = 106,
	STREAMED_SOUND_MISSION_J4_B = 107,
	STREAMED_SOUND_MISSION_J4_C = 108,
	STREAMED_SOUND_MISSION_J4_D = 109,
	STREAMED_SOUND_MISSION_J4_E = 110,
	STREAMED_SOUND_MISSION_J4_F = 111,
	STREAMED_SOUND_MISSION_J6_1 = 112,
	STREAMED_SOUND_MISSION_J6_A = 113,
	STREAMED_SOUND_MISSION_J6_B = 114,
	STREAMED_SOUND_MISSION_J6_C = 115,
	STREAMED_SOUND_MISSION_J6_D = 116,
	STREAMED_SOUND_MISSION_T4_A = 117,
	STREAMED_SOUND_MISSION_S1_A = 118,
	STREAMED_SOUND_MISSION_S1_A1 = 119,
	STREAMED_SOUND_MISSION_S1_B = 120,
	STREAMED_SOUND_MISSION_S1_C = 121,
	STREAMED_SOUND_MISSION_S1_C1 = 122,
	STREAMED_SOUND_MISSION_S1_D = 123,
	STREAMED_SOUND_MISSION_S1_E = 124,
	STREAMED_SOUND_MISSION_S1_F = 125,
	STREAMED_SOUND_MISSION_S1_G = 126,
	STREAMED_SOUND_MISSION_S1_H = 127,
	STREAMED_SOUND_MISSION_S1_I = 128,
	STREAMED_SOUND_MISSION_S1_J = 129,
	STREAMED_SOUND_MISSION_S1_K = 130,
	STREAMED_SOUND_MISSION_S1_L = 131,
	STREAMED_SOUND_MISSION_S3_A = 132,
	STREAMED_SOUND_MISSION_S3_B = 133,
	STREAMED_SOUND_MISSION_EL3_A = 134,
	STREAMED_SOUND_MISSION_MF1_A = 135,
	STREAMED_SOUND_MISSION_MF2_A = 136,
	STREAMED_SOUND_MISSION_MF3_A = 137,
	STREAMED_SOUND_MISSION_MF3_B = 138,
	STREAMED_SOUND_MISSION_MF3_B1 = 139,
	STREAMED_SOUND_MISSION_MF3_C = 140,
	STREAMED_SOUND_MISSION_MF4_A = 141,
	STREAMED_SOUND_MISSION_MF4_B = 142,
	STREAMED_SOUND_MISSION_MF4_C = 143,
	STREAMED_SOUND_MISSION_A1_A = 144,
	STREAMED_SOUND_MISSION_A3_A = 145,
	STREAMED_SOUND_MISSION_A5_A = 146,
	STREAMED_SOUND_MISSION_A4_A = 147,
	STREAMED_SOUND_MISSION_A4_B = 148,
	STREAMED_SOUND_MISSION_A4_C = 149,
	STREAMED_SOUND_MISSION_A4_D = 150,
	STREAMED_SOUND_MISSION_K1_A = 151,
	STREAMED_SOUND_MISSION_K3_A = 152,
	STREAMED_SOUND_MISSION_R1_A = 153,
	STREAMED_SOUND_MISSION_R2_A = 154,
	STREAMED_SOUND_MISSION_R2_B = 155,
	STREAMED_SOUND_MISSION_R2_C = 156,
	STREAMED_SOUND_MISSION_R2_D = 157,
	STREAMED_SOUND_MISSION_R2_E = 158,
	STREAMED_SOUND_MISSION_R2_F = 159,
	STREAMED_SOUND_MISSION_R2_G = 160,
	STREAMED_SOUND_MISSION_R2_H = 161,
	STREAMED_SOUND_MISSION_R5_A = 162,
	STREAMED_SOUND_MISSION_R6_A = 163,
	STREAMED_SOUND_MISSION_R6_A1 = 164,
	STREAMED_SOUND_MISSION_R6_B = 165,
	STREAMED_SOUND_MISSION_LO2_A = 166,
	STREAMED_SOUND_MISSION_LO6_A = 167,
	STREAMED_SOUND_MISSION_YD2_A = 168,
	STREAMED_SOUND_MISSION_YD2_B = 169,
	STREAMED_SOUND_MISSION_YD2_C = 170,
	STREAMED_SOUND_MISSION_YD2_C1 = 171,
	STREAMED_SOUND_MISSION_YD2_D = 172,
	STREAMED_SOUND_MISSION_YD2_E = 173,
	STREAMED_SOUND_MISSION_YD2_F = 174,
	STREAMED_SOUND_MISSION_YD2_G = 175,
	STREAMED_SOUND_MISSION_YD2_H = 176,
	STREAMED_SOUND_MISSION_YD2_ASS = 177,
	STREAMED_SOUND_MISSION_YD2_OK = 178,
	STREAMED_SOUND_MISSION_H5_A = 179,
	STREAMED_SOUND_MISSION_H5_B = 180,
	STREAMED_SOUND_MISSION_H5_C = 181,
	STREAMED_SOUND_MISSION_AMMU_A = 182,
	STREAMED_SOUND_MISSION_AMMU_B = 183,
	STREAMED_SOUND_MISSION_AMMU_C = 184,
	STREAMED_SOUND_MISSION_DOOR_1 = 185,
	STREAMED_SOUND_MISSION_DOOR_2 = 186,
	STREAMED_SOUND_MISSION_DOOR_3 = 187,
	STREAMED_SOUND_MISSION_DOOR_4 = 188,
	STREAMED_SOUND_MISSION_DOOR_5 = 189,
	STREAMED_SOUND_MISSION_DOOR_6 = 190,
	STREAMED_SOUND_MISSION_T3_A = 191,
	STREAMED_SOUND_MISSION_T3_B = 192,
	STREAMED_SOUND_MISSION_T3_C = 193,
	STREAMED_SOUND_MISSION_K1_B = 194,
	STREAMED_SOUND_MISSION_CAT1 = 195,
	TOTAL_STREAMED_SOUNDS = 196,
	NO_STREAMED_SOUND = 197,
};

class tMP3Sample {
public:
	uint32 m_nLength;
	uint32 m_nPosition;
	uint32 m_nLastPosCheckTimer;
};

class cMusicManager
{
public:
	bool m_bIsInitialised;
	uint8 field_1;
	uint8 m_nMusicMode;
	uint8 m_nCurrentStreamedSound;
	uint8 m_nPreviousStreamedSound;
	uint8 field_5;
	uint8 field_6;
	uint8 field_7;
	bool m_bAnnouncement;
	bool m_bPreviousPlayerInCar;
	bool m_bPlayerInCar;
	bool m_bAnnouncementInProgress;
	tMP3Sample m_asMP3Samples[196];
	uint8 field_2364;
	uint8 field_2365;
	uint8 field_2366;
	uint8 field_2367;
	uint32 field_2368;
	uint32 field_2372;
	uint32 field_2376;
	uint8 field_2380;
	uint8 field_2381;
	uint8 field_2382;
	bool m_bRadioSetByScript;
	uint8 m_nRadioStation;
	uint8 field_2385;
	uint8 field_2386;
	uint8 field_2387;
	uint32 m_nRadioPosition;
	bool m_bRadioInCar;
	uint8 field_2393;
	uint8 field_2394;
	uint8 field_2395;

public:
	bool PlayerInCar();
	void DisplayRadioStationName();
};

static_assert(sizeof(cMusicManager) == 0x95C, "cMusicManager: error");

extern cMusicManager &MusicManager;
