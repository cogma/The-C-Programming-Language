/*
	構造体SXおよびSYの宣言
*/

typedef struct __sy	 SY;	/* SYの名前だけをとりあえず宣言 */

typedef struct {
	int a;
	SY *b;					/* SYの存在を知っているので安心して宣言 */
} SX;

typedef struct __sy {
	int c;
	SX  d;					/* SXの内容を知っているので安心して宣言 */
} SY;
