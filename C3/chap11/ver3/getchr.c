/*
	１文字入出力ライブラリ（第３版）"getchr.c"
*/

#include <stdio.h>

#define BUFSIZE  256		/* バッファの大きさ */

char buffer[BUFSIZE];		/* バッファ */
int buf_no = 0;				/* 現在の要素数 */
int front = 0;				/* 先頭要素カーソル */
int rear = 0;				/* 末尾要素カーソル */

/*--- １文字取り出す ---*/
int getchr(void)
{
	if (buf_no <= 0)			/* バッファが空であれば */
		return getchar();		/* キーボードから読み込んで返す */
	else {
		int temp;

		buf_no--;
		temp = buffer[front++];
		if (front == BUFSIZE)
			front = 0;
		return temp;
	}
}
