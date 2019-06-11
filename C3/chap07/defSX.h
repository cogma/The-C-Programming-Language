/*
	構造体SXの宣言（メンバとして構造体SYへのポインタをもつ）"defSX.h"
*/

typedef struct {
	int a;  
	SY  *b;		/* 構造体SYへのポインタ */
} SX;
