//REARVIEW V1------------------------------------------------------------------------------------
void rearView(void)
{

    //loadFont();
    //printStringNumber(10,10, "view:", GlobalScreen[0]->camera_direction);
    //printStringNumber(10,20, "Camdir:", GlobalCamera[0]->chase_direction);

    static int tempDir[4];
    int i;    
    for(i=0; i<4; i++) 
        {   
            switch(GlobalController[i]->ButtonPressed)
            {
                case (BTN_DDOWN):
                {   
                    //loadFont();
                    //printStringNumber(10,30, "pressed", GlobalScreen[0]->camera_direction);
                    tempDir[i] = GlobalCamera[i]->chase_direction;
                    break;
                }
            }    

            switch(GlobalController[i]->ButtonHeld)
            {
                case (BTN_DDOWN):
                case (BTN_DDOWN+BTN_A):
                case (BTN_DDOWN+BTN_A+BTN_Z):
                {   
                    //loadFont();
                    //printStringNumber(10,40, "held", GlobalScreen[0]->camera_direction);
                    //invert steering?

                    if(tempDir[i] == -32768){GlobalCamera[i]->chase_direction = 0;break;}
                    else if(tempDir[i] >= 0){GlobalCamera[i]->chase_direction = tempDir[i] - 32767;}
                    else{GlobalCamera[i]->chase_direction = tempDir[i] + 32767;};
                    break;
                }
            }   
            
            switch(GlobalController[i]->ButtonReleased)
            {
                case(BTN_DDOWN):{GlobalCamera[i]->chase_direction = tempDir[i];break;}
            }     
            
        }
}
