//GLOBAL VARS //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char HighestLap;

//FUNC /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void lapControl(void)   //BUGS: NONE
{   
    int i, j;
    
    /*
    //DEBUG
    loadFont();
	  printStringNumber(5,15, "Highest Lap b4:", HighestLap);
    */

    //set custom starting laps & highest lap counter start value
    if(g_startingIndicator == 1)
    {
        //mario:
        //if(g_courseID == 0x00){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //choco:
        //if(g_courseID == 0x01){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //bowser:
        //if(g_courseID == 0x02){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //banshee:
        //if(g_courseID == 0x03){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //yoshi:
        //if(g_courseID == 0x04){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //frappe:
        //if(g_courseID == 0x05){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //koopa:
        //if(g_courseID == 0x06){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //royal:
        //if(g_courseID == 0x07){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //luigi:
        //if(g_courseID == 0x08){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //moo:
        //if(g_courseID == 0x09){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //toad:
        //if(g_courseID == 0x0A){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //kalimari:
        //if(g_courseID == 0x0B){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //sherbet:
        //if(g_courseID == 0x0C){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //rainbow:
        //if(g_courseID == 0x0D){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //wario:
        //if(g_courseID == 0x0E){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        //dk:
        //if(g_courseID == 0x12){for (i=0; i<8; i++){*GlobalLap[i] = 1;}};
        HighestLap = *GlobalLap[0];
    }
    else
    {
        //get highest lap
        long lapArray2[4] = {*GlobalLap[0],*GlobalLap[1],-50,-50};  //set -50 dummies for loop
        long lapArray3[4] = {*GlobalLap[0],*GlobalLap[1],*GlobalLap[2],-20};
        long lapArray4[4] = {*GlobalLap[0],*GlobalLap[1],*GlobalLap[2],*GlobalLap[3]};

        for (int j = 0; j < 4; ++j) 
        {
            if (lapArray2[0] < lapArray2[j]) {lapArray2[0] = lapArray2[j];};
            if (lapArray3[0] < lapArray3[j]) {lapArray3[0] = lapArray3[j];};
            if (lapArray4[0] < lapArray4[j]) {lapArray4[0] = lapArray4[j];};
        }

        //update highest lap counter
        if(g_playerCount == 1){if(*GlobalLap[0] > HighestLap){HighestLap = *GlobalLap[0];};}
        else if(g_playerCount == 2){if(lapArray2[0] > HighestLap){HighestLap = lapArray2[0];};}
        else if(g_playerCount == 3){if(lapArray3[0] > HighestLap){HighestLap = lapArray3[0];};}
        else if(g_playerCount == 4){if(lapArray4[0] > HighestLap){HighestLap = lapArray4[0];};}
    }
}
