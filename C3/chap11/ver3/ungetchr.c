/*
	１文字入出力ライブラリ（第３版）"ungetchr.c"
*/

#include <stdio.h>

#define BUFSIZE  256			/* バッファの大きさ */

extern char buffer[BUFSIZE];	/* バッファ */
extern int  buf_no;				/* 現在の要素数 */
extern int  front;				/* 先頭要素カーソル */
extern int  rear;				/* 末尾要素カーソル */

/*--- １文字押し戻す ---*/
int ungetchr(int ch)
{
	if (buf_no >= BUFSIZE)		/* バッファが満杯であれば */
		return EOF;				/* これ以上押し戻せない */
	else {
		buf_no++;
		buffer[rear++] = ch;
		if (rear == BUFSIZE)
			rear = 0;
		return ch;
	}
}