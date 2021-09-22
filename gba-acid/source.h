
//{{BLOCK(acid)

//======================================================================
//
//	acid, 256x160@4, 
//	+ palette 256 entries, not compressed
//	+ 17 tiles (t|f reduced) not compressed
//	+ regular map (flat), not compressed, 32x20 
//	Total size: 512 + 544 + 1280 = 2336
//
//	Time-stamp: 2021-09-22, 10:51:52
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_ACID_H
#define GRIT_ACID_H

#define acidTilesLen 544
extern const unsigned int acidTiles[136];

#define acidMapLen 1280
extern const unsigned short acidMap[640];

#define acidPalLen 512
extern const unsigned short acidPal[256];

#endif // GRIT_ACID_H

//}}BLOCK(acid)
