//hamp LibraryVariables / GameOffsets
extern struct Camera *GlobalCamera[];
extern struct Camera g_CameraPlayer1;
extern struct Camera g_CameraPlayer2;
extern struct Camera g_CameraPlayer3;
extern struct Camera g_CameraPlayer4;
extern struct Path *GlobalPath[];
extern struct Path g_PathPointPlayer1; // 80164438
extern struct Path g_PathPointPlayer2;
extern struct Path g_PathPointPlayer3;
extern struct Path g_PathPointPlayer4;
extern struct Path g_PathPointPlayer5;
extern struct Path g_PathPointPlayer6;
extern struct Path g_PathPointPlayer7;
extern struct Path g_PathPointPlayer8;

//music
extern char g_musicFLag; // 0x800DC5A9 //char 00=full; // 01=half; // 02=off
extern char g_musicIDRaceways; // 0x8028ECE7
extern char g_musicIDSnowy; // 0x8028ED67
extern char g_musicIDCountry; // 0x8028ED07
extern char g_musicIDBattle1; // 0x8028ED17
extern char g_musicIDBattle2; // 0x8028ED97

//menu
extern short menuExtra;

//title
extern short titleBackX;
extern short titleBackY;
extern char titleBackAnim;
extern int titleLogoX; //0x8018D9E0
extern int titleLogoY; //0x8018D9F2
extern int titleCopyToggle; //0x8018D9EC //F1
extern short titleCopyX; 
extern short titleCopyY; 
extern long titleCopyChange; //0x8018DA50 //long F0 darker 04 show message
extern int titlePushToggle; //0x8018DA64
extern short titlePushX; 
extern short titlePushY; 
extern int titlePushBlink; // long/int?

//hud
extern char g_hudToggle; // 0x800DC5B9 
extern char g_hudCharpicRankToggle; // 0x8018D2BF
extern char g_hudCharpicRankA; // 0x8018D3E3
extern float g_hudCharpicRankX1; // 0x8018D027 //float
extern float g_hudCharpicRankX2; // 0x8018D02B
extern float g_hudCharpicRankX3; // 0x8018D02F 
extern float g_hudCharpicRankX4; // 0x8018D033 
extern float g_hudCharpicRankY1; // 0x8018D050 
extern float g_hudCharpicRankY2; // 0x8018D054 
extern char g_hudCharpicRankY3; // 0x8018D058 
extern float g_hudCharpicRankY4; // 0x8018D05C 
extern float g_hudNumberRankToggle; // 0x8018CAF1 //char
extern float g_hudNumberRankScale; // 0x8018CA74 //float 
extern short g_hudNumberRankX; // 0x8018CAD2 //short
extern short g_hudNumberRankY; // 0x8018CAD4 
extern short g_hudItemboxX; // 0x8018CAB2 //short
extern short g_hudItemboxY; // 0x8018CAB4 
extern short g_hudTimeX; // 0x8118CABE 
extern short g_hudTimeY; // 0x8118CAC8 
extern char g_hudTimeAnim; // 0x8018CAEB //char
extern short g_hudLapX; // 0x8118CACA 
extern short g_hudLapY; // 0x8118CAD0 
extern char g_hudLapTexture; // 0x8018CAE2 //char
extern char g_hudLapAnim; // 0x8018CAEE //char
extern char g_mapPlayers; // 0x8018D15B
extern char g_mapToggle; // 0x8018D2C0

//sky & clouds
extern char  g_clouds;

//fog
extern char g_fogR;
extern char g_fogG;
extern char g_fogB;

//lightning flags
extern char g_lightningFlag; // 0x800EA168
extern char g_lightningFlagPlayer0; // 0x800E9F24
extern char g_lightningFlagPlayer1; // 0x800E9F25
extern char g_lightningFlagPlayer2; // 0x800E9F26
extern char g_lightningFlagPlayer3; // 0x800E9F27
extern char g_lightningFlagPlayer4; // 0x800E9F28
extern char g_lightningFlagPlayer5; // 0x800E9F29
extern char g_lightningFlagPlayer6; // 0x800E9F2A
extern char g_lightningFlagPlayer7; // 0x800E9F2B

//player shadow flags
extern char g_ShadowflagPlayer0; //0x800F6B87
extern char g_ShadowflagPlayer1; //0x800F795F
extern char g_ShadowflagPlayer2;
extern char g_ShadowflagPlayer3;

//player color timers
extern short g_colorPlayer0R;
extern short g_colorPlayer0G;
extern short g_colorPlayer0B;
extern short g_colorPlayer0D;
extern short g_colorPlayer0P;
extern short g_colorPlayer0Y;
extern short g_colorPlayer1R;
extern short g_colorPlayer1G;
extern short g_colorPlayer1B;
extern short g_colorPlayer1D;
extern short g_colorPlayer1P;
extern short g_colorPlayer1Y;
extern short g_colorPlayer2R;
extern short g_colorPlayer2G;
extern short g_colorPlayer2B;
extern short g_colorPlayer2D;
extern short g_colorPlayer2P;
extern short g_colorPlayer2Y;
extern short g_colorPlayer3R;
extern short g_colorPlayer3G;
extern short g_colorPlayer3B;
extern short g_colorPlayer3D;
extern short g_colorPlayer3P;
extern short g_colorPlayer3Y;
extern short g_colorPlayer4R;
extern short g_colorPlayer4G;
extern short g_colorPlayer4B;
extern short g_colorPlayer4D;
extern short g_colorPlayer4P;
extern short g_colorPlayer4Y;
extern short g_colorPlayer5R;
extern short g_colorPlayer5G;
extern short g_colorPlayer5B;
extern short g_colorPlayer5D;
extern short g_colorPlayer5P;
extern short g_colorPlayer5Y;
extern short g_colorPlayer6R;
extern short g_colorPlayer6G;
extern short g_colorPlayer6B;
extern short g_colorPlayer6D;
extern short g_colorPlayer6P;
extern short g_colorPlayer6Y;
extern short g_colorPlayer7R;
extern short g_colorPlayer7G;
extern short g_colorPlayer7B;
extern short g_colorPlayer7D;
extern short g_colorPlayer7P;
extern short g_colorPlayer7Y;
