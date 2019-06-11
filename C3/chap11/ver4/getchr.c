/*
	１文字入出力ライブラリ《実現ファイル》"getchr.c"
*/

#include <stdio.h>
#include "_getchr.h"
#include "getchr.h"

char __buffer[__BUFSIZE];		/* バッファ */
int __buf_no = 0;				/* 現在の要素数 */
int __front = 0;				/* 先頭要素カーソル */
int __rear = 0;					/* 末尾要素カーソル */

/*--- １文字取り出す ---*/
int getchr(void)
{
	if (__buf_no <= 0)			/* バッファが空であれば */
		return getchar();		/* キーボードから読み込んで返す */
	else {
		int temp;

		__buf_no--;
		temp = __buffer[__front++];
		if (__front == __BUFSIZE)
			__front = 0;
		return temp;
	}
}
