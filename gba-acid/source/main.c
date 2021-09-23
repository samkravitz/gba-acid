#include <stdio.h>
#include <tonc.h>
#include "acid.h"
#include "mole.h"
#include "shared.h"

#include <string.h>

// Use this command to convert acid.png into acid.c and acid.h
// bash generate-graphics-data.sh

const u8 PALETTE_MOLE_INDEX = 240;
const u8 ACID_SCREENBLOCK   = 30; // the screenblock where the acid image will be loaded into
const u8 ACID_CHARBLOCK     = 0;  // ditto, but the charblock

const u8 MOSAIC_MOLE_TILE_X = 13; // the tile_x loc of the mosaic mole bug on the screenblock
const u8 MOSAIC_MOLE_TILE_Y = 13;  // the tile_x loc of the mosaic mole bug on the screenblock

u8 num_tiles_loaded = 0;
void load_tiles(const u32 tiles[], u32 len, uint base_tile) 
{
    memcpy(&tile_mem[ACID_CHARBLOCK][base_tile], tiles, len);
}

void load_pal(const u16 pal[], u32 len) 
{
    memcpy(pal_bg_mem, pal, len);
}

void setup_display() 
{
    // load the acid.bmp tilemap
    memcpy(se_mem[ACID_SCREENBLOCK], acidMap, acidMapLen);

    // load the palette / tiles
    load_pal  (sharedPal, sharedPalLen);
    load_tiles(acidTiles, acidTilesLen, 0);
    load_tiles(moleTiles, moleTilesLen, 32);
    
    // set up BG0 for a 4bpp 32x32t map
    REG_BG0CNT = BG_CBB(ACID_CHARBLOCK) | BG_SBB(ACID_SCREENBLOCK) | BG_4BPP | BG_REG_64x64;
    REG_DISPCNT = DCNT_MODE0 | DCNT_BG0;
}

void setup_ppu_tests()
{
    // - MOSAIC testing
    // setup a mole
    // se_mem[ACID_SCREENBLOCK][MOSAIC_MOLE_TILE_X + MOSAIC_MOLE_TILE_Y * 32] = 33;
}

inline void wait_for_hblank() 
{
    while ( (REG_DISPSTAT & DSTAT_IN_HBL));
    while (!(REG_DISPSTAT & DSTAT_IN_HBL));
}

inline void run_hblank_routine() 
{
    // vcount + 1 because any edits during the nth scanline's hblank would modify the (n + 1)th scanline
    int editted_scanline = (REG_VCOUNT >= 160) ? 0 : (REG_VCOUNT + 1);
    
    switch (editted_scanline)
    {
        case 0: 
            REG_BG0VOFS = 50;
            break;
        
        case 1:
            REG_BG0VOFS = 0;
            break;
            
        case 8 ... 16: // idk some dummy test to make sure this is working
            REG_BG0HOFS = 256; // yeet
            break;
        
        default:
            REG_BG0HOFS = 0;
            break;
    }
}
void main_loop() 
{
    while (true) 
    {
        wait_for_hblank();
        run_hblank_routine();
    }
}

int main()
{
    // hi! if you're using this rom to debug, this is the function
    // you want to look at! :)
    setup_display();
    setup_ppu_tests();
    
    main_loop();

    return 0;
}