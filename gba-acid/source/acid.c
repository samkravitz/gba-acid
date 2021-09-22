
//{{BLOCK(acid)

//======================================================================
//
//	acid, 256x160@4, 
//	+ palette 16 entries, not compressed
//	+ 17 tiles (t|f reduced) not compressed
//	+ regular map (flat), not compressed, 32x20 
//	Total size: 32 + 544 + 1280 = 1856
//
//	Time-stamp: 2021-09-22, 11:21:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned int acidTiles[136] __attribute__((aligned(4))) __attribute__((visibility("hidden")))=
{
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,
	0x66666666,0x66666666,0x66662222,0x66662222,0x66662222,0x66662222,0x66662222,0x66662222,
	0x66666666,0x66666666,0x22222222,0x22222222,0x22222222,0x22222222,0x66666666,0x66666666,
	0x66666666,0x66666666,0x66662222,0x66662222,0x66662222,0x66662222,0x66666666,0x66666666,
	0x66666666,0x66666666,0x22226666,0x22226666,0x22226666,0x22226666,0x66662222,0x66662222,
	0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x22226666,0x22226666,
	0x66666666,0x66666666,0x22222222,0x22222222,0x22222222,0x22222222,0x66662222,0x66662222,

	0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,
	0x66662222,0x66662222,0x22222222,0x22222222,0x22222222,0x22222222,0x66662222,0x66662222,
	0x22226666,0x22226666,0x22226666,0x22226666,0x22226666,0x22226666,0x22226666,0x22226666,
	0x22226666,0x22226666,0x22226666,0x22226666,0x22226666,0x22226666,0x22222222,0x22222222,
	0x22226666,0x22226666,0x66662222,0x66662222,0x66662222,0x66662222,0x66662222,0x66662222,
	0x22222222,0x22222222,0x22226666,0x22226666,0x22226666,0x22226666,0x66666666,0x66666666,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,
	0x00055555,0x66600555,0x44466055,0x44444605,0x44444605,0x44444460,0x44444460,0x44444460,

	0x55555555,0x55555555,0x55555555,0x55555555,0x33333333,0x33333333,0x33333333,0x33333333,
};

const unsigned short acidMap[640] __attribute__((aligned(4))) __attribute__((visibility("hidden")))=
{
	0x0001,0x0001,0x0002,0x0402,0x0402,0x0003,0x0004,0x0002,
	0x0001,0x0402,0x0001,0x0001,0x0005,0x0405,0x0001,0x0402,
	0x0001,0x0402,0x0006,0x0003,0x0406,0x0007,0x0405,0x0402,
	0x0001,0x0001,0x0007,0x0405,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0009,0x0409,0x000A,0x0003,0x0001,0x040A,
	0x0001,0x000A,0x0001,0x0001,0x040A,0x000A,0x0001,0x000A,
	0x0005,0x000B,0x000A,0x0001,0x040A,0x0009,0x000C,0x000A,
	0x0001,0x0001,0x040A,0x000A,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0802,0x0C02,0x0C02,0x0003,0x0004,0x0807,
	0x0003,0x0C02,0x0003,0x0004,0x0805,0x0C05,0x0001,0x0C02,
	0x0C06,0x000D,0x0806,0x0003,0x0C06,0x0802,0x0805,0x0C02,
	0x0003,0x0004,0x0807,0x0C05,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0000,0x0000,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x0000,0x0000,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0000,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x0000,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0000,0x000E,0x000E,0x000F,0x040F,0x000E,0x000E,0x000E,
	0x000E,0x000F,0x040F,0x000E,0x000E,0x0000,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0000,0x000E,0x000E,0x080F,0x0C0F,0x000E,0x000E,0x000E,
	0x000E,0x080F,0x0C0F,0x000E,0x000E,0x0000,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0000,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x0000,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0000,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x0000,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0000,
	0x000E,0x000E,0x000E,0x0010,0x000E,0x000E,0x0000,0x0000,
	0x000E,0x000E,0x0010,0x000E,0x000E,0x000E,0x0000,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0000,
	0x000E,0x000E,0x000E,0x0C10,0x000E,0x000E,0x0000,0x0000,
	0x000E,0x000E,0x0C10,0x000E,0x000E,0x000E,0x0000,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0000,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x0000,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0000,
	0x000E,0x000E,0x0000,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x0000,0x000E,0x000E,0x0000,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0000,0x000E,0x000E,0x0000,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x0000,0x000E,0x000E,0x0000,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0000,0x000E,0x000E,0x000E,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x000E,0x000E,0x000E,0x0000,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0000,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x000E,0x000E,0x0000,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0000,0x0000,0x000E,0x000E,0x000E,0x000E,
	0x000E,0x000E,0x0000,0x0000,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0008,0x0008,
};

const unsigned short acidPal[16] __attribute__((aligned(4))) __attribute__((visibility("hidden")))=
{
	0x0000,0x001F,0x5947,0x4CBF,0x13E0,0x1FBF,0x7FFF,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(acid)
