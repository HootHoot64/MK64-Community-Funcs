void hudControl(void)
{
    //BUGS: -

    g_blueLineRankToggle = 0;

    if(g_playerCount == 1)
    {
    //1p TT
    if(g_gameMode == 1)
    {
        if(g_hudToggleFlag == 0){g_hudSpeedToggle2 = 1;};
        if(g_hudToggleFlag == 2){g_hudLapToggle = 0;g_hudSpeedToggle2 = 1;g_hudMapToggle2 = 1;};

        if(g_courseID == 0x00){g_mapX = 0x0033; g_mapY = 0x00CA;};
        if(g_courseID == 0x01){g_mapX = 0x0038; g_mapY = 0x00C9;};
        if(g_courseID == 0x02){g_mapX = 0x002F; g_mapY = 0x00CA;};
        if(g_courseID == 0x03){g_mapX = 0x0030; g_mapY = 0x00C8;};
        if(g_courseID == 0x04){g_mapX = 0x0030; g_mapY = 0x00C9;};
        if(g_courseID == 0x05){g_mapX = 0x002F; g_mapY = 0x00C9;};
        if(g_courseID == 0x06){g_mapX = 0x0028; g_mapY = 0x00C6;};
        if(g_courseID == 0x07){g_mapX = 0x002F; g_mapY = 0x00CA;};
        if(g_courseID == 0x08){g_mapX = 0x0027; g_mapY = 0x00C0;};
        if(g_courseID == 0x09){g_mapX = 0x0029; g_mapY = 0x00C8;};
        if(g_courseID == 0x0A){g_mapX = 0x003F; g_mapY = 0x00CA;};
        if(g_courseID == 0x0B){g_mapX = 0x0029; g_mapY = 0x00BF;};
        if(g_courseID == 0x0C){g_mapX = 0x002B; g_mapY = 0x00C8;};
        if(g_courseID == 0x0D){g_mapX = 0x0025; g_mapY = 0x00B7;};
        if(g_courseID == 0x0E){g_mapX = 0x002F; g_mapY = 0x00C8;};
        if(g_courseID == 0x12){g_mapX = 0x0038; g_mapY = 0x00C8;};
    }

    //1P GP
    if(g_gameMode == 0)
    {
        GlobalHud[0]->lapX = 0x00FA;
        GlobalHud[0]->timeX = 0x01E4;
        GlobalHud[0]->timeX2 = 0x01E4;
        g_hudCharpicRankToggle = 0;
        if(g_hudToggleFlag == 2)
        {
            g_hudLapToggle = 0; g_hudMapToggle2 = 1;
        };
    }
    }

    //2P GP&VS
    else if(g_playerCount == 2)
    {
        g_hudMapToggle = 0x0100;
        g_mapY = 0x0077;
        if(g_courseID == 0x00){g_mapY = 0x0114;};
        if(g_courseID == 0x01){g_mapY = 0x0113;g_mapG = 0x00AA; g_mapB = 0x0000;};
        if(g_courseID == 0x02){g_mapY = 0x0119;};
        if(g_courseID == 0x03){g_mapY = 0x0118;};
        if(g_courseID == 0x04){g_mapY = 0x0113;};
        if(g_courseID == 0x05){g_mapY = 0x0115;g_mapR = 0x0041; g_mapG = 0x0075; g_mapB = 0x0031;};
        if(g_courseID == 0x06){g_mapY = 0x011F;};
        if(g_courseID == 0x07){g_mapY = 0x0115;};
        if(g_courseID == 0x08){g_mapY = 0x0125;};
        if(g_courseID == 0x09){g_mapY = 0x011F;};
        if(g_courseID == 0x0A){g_mapY = 0x0108;};
        if(g_courseID == 0x0B){g_mapY = 0x0119;};
        if(g_courseID == 0x0C){g_mapY = 0x0114;};
        if(g_courseID == 0x0D){g_mapY = 0x0114;};
        if(g_courseID == 0x0E){g_mapY = 0x011A;};
        if(g_courseID == 0x12){g_mapY = 0x0112;};
    }
    //3P&4P VS
    else if(g_playerCount > 2)
    {
        GlobalHud[0]->rankSize = 0.28125;
        GlobalHud[1]->rankSize = 0.28125;
        GlobalHud[2]->rankSize = 0.28125;
        GlobalHud[3]->rankSize = 0.28125;
        GlobalHud[0]->itemX = 0xFFBA;
        GlobalHud[0]->itemY = 0x002A;
        GlobalHud[0]->rankX = 0x0016;
        GlobalHud[1]->itemX = 0x0185;
        GlobalHud[1]->itemY = 0x002A;
        GlobalHud[1]->rankX = 0x012A;
        GlobalHud[2]->itemX = 0xFFBA;
        GlobalHud[2]->itemY = 0x0016;
        GlobalHud[2]->lapY = 0x00DA;
        GlobalHud[2]->rankX = 0x0016;
        GlobalHud[2]->rankY = 0x00DC;
        GlobalHud[3]->itemX = 0x0185;
        GlobalHud[3]->itemY = 0x012A;
        GlobalHud[3]->lapY = 0x00DA;
        GlobalHud[3]->rankX = 0x012A;
        GlobalHud[3]->rankY = 0x00DC;
    }
}
