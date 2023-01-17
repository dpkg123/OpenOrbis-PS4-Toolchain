#pragma once

#define ORBIS_SYSTEM_SERVICE_PARAM_ID_LANG				1		//Language settings
#define ORBIS_SYSTEM_SERVICE_PARAM_ID_DATE_FORMAT		2		//Date display format
#define ORBIS_SYSTEM_SERVICE_PARAM_ID_TIME_FORMAT		3		//Time display format
#define ORBIS_SYSTEM_SERVICE_PARAM_ID_TIME_ZONE			4		//Time zone offset
#define ORBIS_SYSTEM_SERVICE_PARAM_ID_SUMMERTIME		5		//Daylight savings time
#define ORBIS_SYSTEM_SERVICE_PARAM_ID_SYSTEM_NAME		6		//System name
#define ORBIS_SYSTEM_SERVICE_PARAM_ID_GAME_PARENTAL_LEVEL	7		//Viewer age restriction level of the game
#define ORBIS_SYSTEM_SERVICE_PARAM_ID_ENTER_BUTTON_ASSIGN	1000	//Enter button assignment on the system software

#define ORBIS_SYSTEM_SERVICE_MAX_SYSTEM_NAME_LENGTH		65		//Maximum system name length

#define ORBIS_SYSTEM_PARAM_DATE_FORMAT_YYYYMMDD			0
#define ORBIS_SYSTEM_PARAM_DATE_FORMAT_DDMMYYYY			1
#define ORBIS_SYSTEM_PARAM_DATE_FORMAT_MMDDYYYY			2

#define ORBIS_SYSTEM_PARAM_TIME_FORMAT_12HOUR			0
#define ORBIS_SYSTEM_PARAM_TIME_FORMAT_24HOUR			1

#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_OFF			0
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL01		1
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL02		2
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL03		3
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL04		4
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL05		5
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL06		6
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL07		7
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL08		8
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL09		9
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL10		10
#define ORBIS_SYSTEM_PARAM_GAME_PARENTAL_LEVEL11		11

#define ORBIS_SYSTEM_PARAM_ENTER_BUTTON_ASSIGN_CIRCLE	0		//Circle button is the enter button
#define ORBIS_SYSTEM_PARAM_ENTER_BUTTON_ASSIGN_CROSS	1		//Cross button is the enter button

#define ORBIS_SYSTEM_PARAM_LANG_JAPANESE				0		//Japanese
#define ORBIS_SYSTEM_PARAM_LANG_ENGLISH_US				1		//English (United States)
#define ORBIS_SYSTEM_PARAM_LANG_FRENCH					2		//French (France)
#define ORBIS_SYSTEM_PARAM_LANG_SPANISH					3		//Spanish (Spain)
#define ORBIS_SYSTEM_PARAM_LANG_GERMAN					4		//German
#define ORBIS_SYSTEM_PARAM_LANG_ITALIAN					5		//Italian
#define ORBIS_SYSTEM_PARAM_LANG_DUTCH					6		//Dutch
#define ORBIS_SYSTEM_PARAM_LANG_PORTUGUESE_PT			7		//Portuguese (Portugal)
#define ORBIS_SYSTEM_PARAM_LANG_RUSSIAN					8		//Russian
#define ORBIS_SYSTEM_PARAM_LANG_KOREAN					9		//Korean
#define ORBIS_SYSTEM_PARAM_LANG_CHINESE_T				10		//Chinese (traditional)
#define ORBIS_SYSTEM_PARAM_LANG_CHINESE_S				11		//Chinese (simplified)
#define ORBIS_SYSTEM_PARAM_LANG_FINNISH					12		//Finnish
#define ORBIS_SYSTEM_PARAM_LANG_SWEDISH					13		//Swedish
#define ORBIS_SYSTEM_PARAM_LANG_DANISH					14		//Danish
#define ORBIS_SYSTEM_PARAM_LANG_NORWEGIAN				15		//Norwegian
#define ORBIS_SYSTEM_PARAM_LANG_POLISH					16		//Polish
#define ORBIS_SYSTEM_PARAM_LANG_PORTUGUESE_BR			17		//Portuguese (Brazil)
#define ORBIS_SYSTEM_PARAM_LANG_ENGLISH_GB				18		//English (United Kingdom)
#define ORBIS_SYSTEM_PARAM_LANG_TURKISH					19		//Turkish
#define ORBIS_SYSTEM_PARAM_LANG_SPANISH_LA				20		//Spanish (Latin America)
#define ORBIS_SYSTEM_PARAM_LANG_ARABIC					21		//Arabic
#define ORBIS_SYSTEM_PARAM_LANG_FRENCH_CA				22		//French (Canada)
#define ORBIS_SYSTEM_PARAM_LANG_CZECH					23		//Czech
#define ORBIS_SYSTEM_PARAM_LANG_HUNGARIAN				24		//Hungarian
#define ORBIS_SYSTEM_PARAM_LANG_GREEK					25		//Greek
#define ORBIS_SYSTEM_PARAM_LANG_ROMANIAN				26		//Romanian
#define ORBIS_SYSTEM_PARAM_LANG_THAI					27		//Thai
#define ORBIS_SYSTEM_PARAM_LANG_VIETNAMESE				28		//Vietnamese
#define ORBIS_SYSTEM_PARAM_LANG_INDONESIAN				29		//Indonesian

// Credit: LightningMods
enum LaunchApp_Flag
{
    LaunchApp_None = 0,
    LaunchApp_SkipLaunch = 1,
    LaunchApp_SkipResume = 1,
    LaunchApp_SkipSystemUpdate = 2,
    LaunchApp_RebootPatchInstall = 4,
    LaunchApp_VRMode = 8,
    LaunchApp_NonVRMode = 16
};

typedef struct _LncAppParam
{
    uint32_t size;
    uint32_t user_id;
    uint32_t app_opt;
    uint64_t crash_report;
    enum LaunchApp_Flag LaunchAppCheck_flag;
}
LncAppParam;
