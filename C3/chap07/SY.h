/*
	構造体SYの宣言（メンバとして構造体SXそのものをもつ）"SY.h"
*/

#ifndef __SY
#define __SY

#include "SX.h" 				  /* まず"SX.h"をインクルード */

typedef struct __sy {
	int c;
	SX d;
} SY;

#endif
