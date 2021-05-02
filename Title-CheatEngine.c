/*INFOS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LIMITATIONS: NO A-/START BUTTON USAGE,
             NO CONSECUTIVE ANALOG DIRECTION INPUT, 
             (flags used since no libs) */

//GLOBAL VARS /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char Cheat[10]; //max number of cheats
char CheatsOn;

//TITLE SCREEN FUNC ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void cheatEngine(void)
{       
    static int buttonCount = 0, cheatCount, cheatWrong;
    static int flag[8], safetyFlag = 0;
    unsigned int *analog = {0x800F6910};

    /*
    //DEBUG
    loadFont();
    printStringNumber(0,0, "", flag[0]);
    printStringNumber(0,10, "", flag[1]);
    printStringNumber(0,20, "", flag[2]);
    printStringNumber(0,30, "", flag[3]);
    printStringNumber(0,40, "", flag[4]);
    printStringNumber(0,50, "", flag[5]);
    printStringNumber(0,60, "", flag[6]);
    printStringNumber(0,70, "", flag[7]);
    printStringNumber(0,80, "", *analog);
    */

    //PRINT
    loadFont();
    if(buttonCount != 0){printStringNumber(130,203, "", buttonCount);};
    if(cheatWrong == 1){GraphPtr = drawBox(GraphPtr, 0, 140, 320, 155, 0, 0,0, 175);loadFont();printString(0,125, "  Too stupid to put cheats! Hehehe");};
    if((cheatCount == 1) && (cheatWrong != 1)){GraphPtr = drawBox(GraphPtr, 0, 140, 320, 155, 0, 0,0, 175);loadFont();printString(0,125, "     Cheaters disgust us, bah!");};
    if((cheatCount == 2) && (cheatWrong != 1)){GraphPtr = drawBox(GraphPtr, 0, 140, 320, 155, 0, 0,0, 175);loadFont();printString(0,125, "WTF how many more do U wanna enter?");};
    if((cheatCount > 2) && (cheatWrong != 1)){GraphPtr = drawBox(GraphPtr, 0, 140, 320, 155, 0, 0,0, 175);loadFont();printString(0,125, "Impressive, you must be really bad!");};

    //WATCH INPUTS
            switch(GlobalController[0]->ButtonPressed)
            {
                case (BTN_DUP): //1
                {
                    flag[buttonCount] = 1;
                    buttonCount++;
                    break;
                }
                case (BTN_DDOWN): //2
                {
                    flag[buttonCount] = 2;
                    buttonCount++;
                    break;
                }
                case (BTN_DLEFT): //3
                {
                    flag[buttonCount] = 3;
                    buttonCount++;
                    break;
                }
                case (BTN_DRIGHT): //4
                {
                    flag[buttonCount] = 4;
                    buttonCount++;
                    break;
                }
               case (BTN_CUP): //5
                {
                    flag[buttonCount] = 5;
                    buttonCount++;
                    break;
                }
                case (BTN_CDOWN): //6
                {
                    flag[buttonCount] = 6;
                    buttonCount++;
                    break;
                }
               case (BTN_CLEFT): //7
                {
                    flag[buttonCount] = 7;
                    buttonCount++;
                    break;
                }
                case (BTN_CRIGHT): //8
                {
                    flag[buttonCount] = 8;
                    buttonCount++;
                    break;
                }
                case (BTN_B): //9
                {
                    flag[buttonCount] = 9;
                    buttonCount++;
                    break;
                }
                case (BTN_Z): //10
                {   
                    flag[buttonCount] = 10;
                    buttonCount++;
                    break;
                }
               case (BTN_L): //11
                {   
                    flag[buttonCount] = 11;
                    buttonCount++;
                    break;
                }
               case (BTN_R): //12
                {   
                    flag[buttonCount] = 12;
                    buttonCount++;
                    break;
                }
            }

            switch(*analog)
            {
                case (0x00000053): //13 up
                {   
                    if(safetyFlag != 13){flag[buttonCount] = 13;buttonCount++;};
                    safetyFlag = 13;
                    break;
                }
                case (0x0000FFAD): //14 down
                {   
                    if(safetyFlag != 14){flag[buttonCount] = 14;buttonCount++;};
                    safetyFlag = 14;
                    break;
                }
                case (0x00530000): //15 right
                {   
                    if(safetyFlag != 15){flag[buttonCount] = 15;buttonCount++;};
                    safetyFlag = 15;
                    break;
                }
                case (0xFFAD0000): //16 left
                {   
                    if(safetyFlag != 16){flag[buttonCount] = 16;buttonCount++;};
                    safetyFlag = 16;
                    break;
                }
                case (0x003B003B): //17 right up
                {   
                    if(safetyFlag != 17){flag[buttonCount] = 17;buttonCount++;};
                    safetyFlag = 17;
                    break;
                }
                case (0x003BFFC5): //18 right down
                {   
                    if(safetyFlag != 18){flag[buttonCount] = 18;buttonCount++;};
                    safetyFlag = 18;
                    break;
                }
                case (0xFFC5003B): //19 left up
                {   
                    if(safetyFlag != 19){flag[buttonCount] = 19;buttonCount++;};
                    safetyFlag = 19;
                    break;
                }
                case (0xFFC5FFC5): //20 left down
                {   
                    if(safetyFlag != 20){flag[buttonCount] = 20;buttonCount++;};
                    safetyFlag = 20;
                    break;
                }

            }   

    //CHECK INPUTS
    if(buttonCount == 8)
    {   
        cheatWrong = 0;
        
        if((flag[0] == 9) && (flag[1] == 9) && (flag[2] == 9) && (flag[3] == 9) && (flag[4] == 9) && (flag[5] == 9) && (flag[6] == 9) && (flag[7] == 9))
        {
            Cheat[0] = 1;
        }

        else if((flag[0] == 9) && (flag[1] == 10) && (flag[2] == 9) && (flag[3] == 10) && (flag[4] == 9) && (flag[5] == 10) && (flag[6] == 9) && (flag[7] == 10))
        {
            Cheat[1] = 1;
        }
        else if((flag[0] == 10) && (flag[1] == 10) && (flag[2] == 10) && (flag[3] == 10) && (flag[4] == 10) && (flag[5] == 10) && (flag[6] == 10) && (flag[7] == 10))
        {
            Cheat[2] = 1;
        }

        //place to put more cheat conditions

        else{cheatWrong = 1;playSound(0x29008056);};


        //RESET WATCH
        if(cheatWrong == 0)
        {
            CheatsOn = 1;
            cheatCount++;
            if(cheatCount == 1){playSound(0x29008057);}
            else if(cheatCount == 2){playSound(0x29008053);}
            else if(cheatCount > 2){playSound(0x29008054);};
        }
        buttonCount = 0;
    }
}


//IN-GAME FUNC /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//if(CheatsOn = 1){activeCheats();};

void activeCheats(void)
{
    if(Cheat[0] == 1){;}; //put cheat actions here
    if(Cheat[1] == 1){;};
    if(Cheat[1] == 1){;};
    //...
}
