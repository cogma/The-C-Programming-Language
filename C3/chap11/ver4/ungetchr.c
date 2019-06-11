/*
	１文字入出力ライブラリ《実現ファイル》"ungetchr.c"
*/

#include <stdio.h>
#include "_getchr.h"
#include "getchr.h"

/*--- １文字押し戻す ---*/
int ungetchr(int ch)
{
	if (__buf_no >= __BUFSIZE)		/* バッファが満杯であれば */
		return EOF;					/* これ以上押し戻せない */
	else {
		__buf_no++;
		__buffer[__rear++] = ch;
		if (__rear == __BUFSIZE)
			__rear = 0;
		return ch;
	}
}
