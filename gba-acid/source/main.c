#include <stdio.h>
#include <tonc.h>
#include "acid.h"

// Use this command to convert acid.png into acid.c and acid.h
// grit acid.png -gB4 -m -ftc -pu8 -W2

int main()
{
	// Load palette
    memcpy(pal_bg_mem, acidPal, acidPalLen);
    // Load tiles into CBB 0
    memcpy(&tile_mem[0][0], acidTiles, acidTilesLen);
    // Load map into SBB 30
    memcpy(&se_mem[30][0], acidMap, acidMapLen);

    // set up BG0 for a 4bpp 32x32t map, using
    // using charblock 0 and screenblock 31
    REG_BG0CNT= BG_CBB(0) | BG_SBB(30) | BG_4BPP | BG_REG_32x32;
    REG_DISPCNT= DCNT_MODE0 | DCNT_BG0;

    while(1)
        VBlankIntrWait();

    return 0;
}
