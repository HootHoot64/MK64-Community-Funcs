//hamp LibraryVariables / GameOffsets
.definelabel g_CameraPlayer1, 0x801646F0
.definelabel g_CameraPlayer2, 0x801647A8
.definelabel g_CameraPlayer3, 0x80164860
.definelabel g_CameraPlayer4, 0x80164910
.definelabel g_PathPointPlayer1, 0x80164438
.definelabel g_PathPointPlayer2, 0x8016443A
.definelabel g_PathPointPlayer3, 0x8016443C
.definelabel g_PathPointPlayer4, 0x8016443E
.definelabel g_PathPointPlayer5, 0x80164440
.definelabel g_PathPointPlayer6, 0x80164442
.definelabel g_PathPointPlayer7, 0x80164444
.definelabel g_PathPointPlayer8, 0x80164446
//.definelabel g_skyColorBot2, 0x
//.definelabel g_skyColorBot3, 0x

//music
.definelabel g_musicFLag, 0x800DC5A9 //char 00=full, 01=half, 02=off
.definelabel g_musicIDRaceways, 0x8028ECE7 
.definelabel g_musicIDSnowy, 0x8028ED67
.definelabel g_musicIDCountry, 0x8028ED07
.definelabel g_musicIDBattle1, 0x8028ED17
.definelabel g_musicIDBattle2, 0x8028ED97

//menu
.definelabel menuExtra, 0x8018ED12 //0xFF00 on

//title
     //.definelabel titleToggleAll, 0x8018DA83
     //RAM logo 8018D1E0 pointer zu 801CCAA0 pointer back / others?
.definelabel titleBackX, 0x8019BE9C // 8018DA16
.definelabel titleBackY, 0x8019BE9E // 8018DA1A
.definelabel titleBackAnim, 0x8019BE9B
.definelabel titleLogoX, 0x8018D9E0
.definelabel titleLogoY, 0x8018D9F2
.definelabel titleCopyToggle, 0x8018D9EC //F1
.definelabel titleCopyX, 0x8019BEC4
.definelabel titleCopyY, 0x8019BEC6
.definelabel titleCopyChange, 0x8018DA50 //long F0 darker 04 show message
.definelabel titlePushToggle, 0x8018DA64
.definelabel titlePushX, 0x8019BEEC
.definelabel titlePushY, 0x8019BEEE
.definelabel titlePushBlink, 0x8019BED0 // setting != 0 stops blinking almost

//hud
.definelabel g_hudToggle, 0x800DC5B9 
.definelabel g_hudCharpicRankToggle, 0x8018D2BF
.definelabel g_hudCharpicRankA, 0x8018D3E3
.definelabel g_hudCharpicRankX1, 0x8018D027 //float
.definelabel g_hudCharpicRankX2, 0x8018D02B
.definelabel g_hudCharpicRankX3, 0x8018D02F 
.definelabel g_hudCharpicRankX4, 0x8018D033 
.definelabel g_hudCharpicRankY1, 0x8018D050 
.definelabel g_hudCharpicRankY2, 0x8018D054 
.definelabel g_hudCharpicRankY3, 0x8018D058 
.definelabel g_hudCharpicRankY4, 0x8018D05C 
.definelabel g_hudNumberRankToggle, 0x8018CAF1 //char
.definelabel g_hudNumberRankScale, 0x8018CA74 //float 
.definelabel g_hudNumberRankX, 0x8018CAD2 //short
.definelabel g_hudNumberRankY, 0x8018CAD4 
.definelabel g_hudItemboxX, 0x8018CAB2 //short
.definelabel g_hudItemboxY, 0x8018CAB4 
.definelabel g_hudTimeX, 0x8118CABE 
.definelabel g_hudTimeY, 0x8118CAC8 
.definelabel g_hudTimeAnim, 0x8018CAEB //char
.definelabel g_hudLapX, 0x8118CACA 
.definelabel g_hudLapY, 0x8118CAD0 
.definelabel g_hudLapTexture, 0x8018CAE2 //char
.definelabel g_hudLapAnim, 0x8018CAEE //char
.definelabel g_mapPlayers, 0x8018D15B
.definelabel g_mapToggle, 0x8018D2C0

//sky & clouds
.definelabel g_cloudsToggle, 0x801657C8 //00 on 01 off
.definelabel g_skyToggle, 0x800DC5BC //short
.definelabel g_skyboxToggle, 0x800DC5B4 //char
.definelabel g_daytimeToggle, 0x800DC518 //short

//fog
.definelabel g_fogR, 0x801625EF
.definelabel g_fogG, 0x801625F3
.definelabel g_fogB, 0x801625F7

//lightning flags
.definelabel g_lightningFlag, 0x800EA168
.definelabel g_lightningFlagPlayer0, 0x800E9F24
.definelabel g_lightningFlagPlayer1, 0x800E9F25
.definelabel g_lightningFlagPlayer2, 0x800E9F26
.definelabel g_lightningFlagPlayer3, 0x800E9F27
.definelabel g_lightningFlagPlayer4, 0x800E9F28
.definelabel g_lightningFlagPlayer5, 0x800E9F29
.definelabel g_lightningFlagPlayer6, 0x800E9F2A
.definelabel g_lightningFlagPlayer7, 0x800E9F2B

//player shadow flags
.definelabel g_shadowflagPlayer0, 0x800F6B87
.definelabel g_shadowflagPlayer1, 0x800F795F
.definelabel g_shadowflagPlayer2, 0x800F8737
.definelabel g_shadowflagPlayer3, 0x800F950F

//player color timers
.definelabel g_colorPlayer0R, 0x80164B10 //red with kart
.definelabel g_colorPlayer0G, 0x80164B20 //green
.definelabel g_colorPlayer0B, 0x80164B30 //blue
.definelabel g_colorPlayer0D, 0x80164B40 //darkish blue without kart
.definelabel g_colorPlayer0P, 0x80164B50 //pink
.definelabel g_colorPlayer0Y, 0x80164B60 //yellow
.definelabel g_colorPlayer1R, 0x80164B12 //red with kart
.definelabel g_colorPlayer1G, 0x80164B22 //green
.definelabel g_colorPlayer1B, 0x80164B32 //blue
.definelabel g_colorPlayer1D, 0x80164B42 //darkish blue without kart
.definelabel g_colorPlayer1P, 0x80164B52 //pink
.definelabel g_colorPlayer1Y, 0x80164B62 //yellow
.definelabel g_colorPlayer2R, 0x80164B14 //red with kart
.definelabel g_colorPlayer2G, 0x80164B24 //green
.definelabel g_colorPlayer2B, 0x80164B34 //blue
.definelabel g_colorPlayer2D, 0x80164B44 //darkish blue without kart
.definelabel g_colorPlayer2P, 0x80164B54 //pink
.definelabel g_colorPlayer2Y, 0x80164B64 //yellow
.definelabel g_colorPlayer3R, 0x80164B16 //red with kart
.definelabel g_colorPlayer3G, 0x80164B26 //green
.definelabel g_colorPlayer3B, 0x80164B36 //blue
.definelabel g_colorPlayer3D, 0x80164B46 //darkish blue without kart
.definelabel g_colorPlayer3P, 0x80164B56 //pink
.definelabel g_colorPlayer3Y, 0x80164B66 //yellow
.definelabel g_colorPlayer4R, 0x80164B18 //red with kart
.definelabel g_colorPlayer4G, 0x80164B28 //green
.definelabel g_colorPlayer4B, 0x80164B38 //blue
.definelabel g_colorPlayer4D, 0x80164B48 //darkish blue without kart
.definelabel g_colorPlayer4P, 0x80164B58 //pink
.definelabel g_colorPlayer4Y, 0x80164B68 //yellow
.definelabel g_colorPlayer5R, 0x80164B1A //red with kart
.definelabel g_colorPlayer5G, 0x80164B2A //green
.definelabel g_colorPlayer5B, 0x80164B3A //blue
.definelabel g_colorPlayer5D, 0x80164B4A //darkish blue without kart
.definelabel g_colorPlayer5P, 0x80164B5A //pink
.definelabel g_colorPlayer5Y, 0x80164B6A //yellow
.definelabel g_colorPlayer6R, 0x80164B1C //red with kart
.definelabel g_colorPlayer6G, 0x80164B2C //green
.definelabel g_colorPlayer6B, 0x80164B3C //blue
.definelabel g_colorPlayer6D, 0x80164B4C //darkish blue without kart
.definelabel g_colorPlayer6P, 0x80164B5C //pink
.definelabel g_colorPlayer6Y, 0x80164B6C //yellow
.definelabel g_colorPlayer7R, 0x80164B1E //red with kart
.definelabel g_colorPlayer7G, 0x80164B2E //green
.definelabel g_colorPlayer7B, 0x80164B3E //blue
.definelabel g_colorPlayer7D, 0x80164B4E //darkish blue without kart
.definelabel g_colorPlayer7P, 0x80164B5E //pink
.definelabel g_colorPlayer7Y, 0x80164B6E //yellow
