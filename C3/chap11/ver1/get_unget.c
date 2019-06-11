/*
	１文字入出力ライブラリ（第１版）
*/

#include <stdio.h>

#define BUFSIZE  256		/* バッファの大きさ */

char buffer[BUFSIZE];		/* バッファ */
int buf_no = 0;				/* 現在の要素数 */
int front = 0;				/* 先頭要素カーソル */
int rear  = 0;				/* 末尾要素カーソル */

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
