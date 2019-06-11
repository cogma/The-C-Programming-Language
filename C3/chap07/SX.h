/*
	構造体SXの宣言（メンバとして構造体SYへのポインタをもつ）"SX.h"
*/

#ifndef __SX
#define __SX

typedef struct __sy SY; 		  /* 単なる宣言：その定義は"SY.h" */

typedef struct {
	int a;
	SY *b;
} SX;

#endif
