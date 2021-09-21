
//{{BLOCK(acid)

//======================================================================
//
//	acid, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 117 tiles (t|f reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 3744 + 2048 = 6304
//
//	Time-stamp: 2021-09-21, 19:19:20
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_ACID_H
#define GRIT_ACID_H

#define acidTilesLen 3744
extern const unsigned int acidTiles[936];

#define acidMapLen 2048
extern const unsigned short acidMap[1024];

#define acidPalLen 512
extern const unsigned char acidPal[512];

#endif // GRIT_ACID_H

//}}BLOCK(acid)
