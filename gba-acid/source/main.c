#include <stdio.h>
#include <tonc.h>
#include "acid.h"

#include <string.h>

// Use this command to convert acid.png into acid.c and acid.h
// grit acid.png -gB4 -m -ftc -pu8 -W2

const u8 PALETTE_MOLE_INDEX = 240;

void setup_display() 
{
	// Load palette
    memcpy(pal_bg_mem, acidPal, acidPalLen);
    // Load tiles into CBB 0
    memcpy(&tile_mem[0][0], acidTiles, acidTilesLen);
    // Load map into SBB 30
    memcpy(&se_mem[30][0], acidMap, acidMapLen);

    // set up BG0 for a 4bpp 32x32t map, using
    // using charblock 0 and screenblock 31
    REG_BG0CNT = BG_CBB(0) | BG_SBB(30) | BG_4BPP | BG_REG_32x32;
    REG_DISPCNT = DCNT_MODE0 | DCNT_BG0;

    // setting up the color of a mole
    pal_bg_mem[PALETTE_MOLE_INDEX] = RGB15(0, 0, 31);
}

void setup_ppu_tests()
{
    // - MOSAIC testing
    // setup a mole
    // TODO: should we use constants for these indices into pal mem?
    se_mem[30][32*10+10] = 32 * 10 + 10;
    uint8_t* charblock = (uint8_t*) &tile_mem[10][10];

    for (int x = 0; x < 8; x++)
    for (int y = 0; y < 8; y++)
    {
        // we don't replace the (0, 0) index for charblock.
        // mosaicing should copy this index into all the other
        // indices.
        if (x != 0 && y != 0)
            charblock[x + 8 * y] = 0;
    }
    
}

void main_loop() {
    // let's idle around until vblank starts
    while (REG_DISPSTAT | DSTAT_IN_VBL);

    while (true); // go brr
}

int main()
{
    // hi! if you're using this rom to debug, this is the function
    // you want to look at! :)
    setup_display();
    // setup_ppu_tests();
    
    main_loop();

    return 0;
}