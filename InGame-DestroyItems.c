void destroyItems(int playerID, int itemID) // !!! both ints !!!
{
/*
VARS:
.definelabel simpleItem, 0x8015F9B8 
extern int simpleItem; //0x8015F9B8  
*/

/*
item IDs: (2nd byte of int itemID)
0x06 single banana
0x07 single green shell
0x08 single red shell
0x0C item box
0x0D fake item box
0x0E bunch of bananas // !!! also needs single bananas killed !!!
0x15 triple green shell?
0x16 triple red shell
0x2A single blue shell
0x2B item box under balloon in Luigi Raceway

other stuff:
0x02 trees in Mario Raceway (27x)
0x03 trees in Yoshi Valley (13x)
0x04 trees in Royal Raceway (24x)
0x05 Choco Mountain (x3) falling rocks?
0x09 Yoshi's Valley egg
0x0A piranha plant
0x0F something in Kalimari Desert 2x(1x) engine?
0x10 something in Kalimari Desert 2x(1x) caboose?
0x11 something in Kalimari Desert 2x(5x) train cars?
0x13 trees in Moo Moo Farm (21x)
0x17 Mario Raceway spinning signs
0x19 trees in Koopa Troopa Beach (12x)
0x1A trees in Luigi Raceway ( TODO: couldn't find it used
0x1C trees by castle in Royal Raceway? (8x)
0x1D trees in Frappe Snowland ( cacti in Kalimari Desert (44x of 30, 31, 32)
0x1F cacti in Kalimari Desert
0x20 cacti in Kalimari Desert
0x21 shrubs in Bowser's Castle (27x)
0x23 Wario Stadium (3x) spinning sign
0x26 paddle wheel on boat in DK's
0x27 something in Kalimari Desert (x4) railroad crossing?
0x2D kiwano fruit in DK

source: https://gitlab.hive.thyth.com/VisKart/docs/blob/5bb023619356b87f7475e86cd93862fd2e5fa25b/reverse-engineering/mk64-notes.md
    */
    
    
    int i;
    static int *objectAddress = &simpleItem, *objectAddressB4 = &simpleItem -4,
               *objectAddressPlayer = &simpleItem + 5;

    //destroy active items
    for(i=0; i<685; i++) //685 RAM lines in simple object array
    {
        if((*objectAddress & itemID) && (*objectAddressB4 == 0x00000000))
        {
            if(*objectAddressPlayer & playerID)
            {
                *objectAddress = 0x00000000;
            }
        }
        
        objectAddress += 4;
        objectAddressB4 += 4;
        objectAddressPlayer += 4;
    }

}
