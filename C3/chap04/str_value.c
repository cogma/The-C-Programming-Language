/*
	文字列リテラルを評価した値を表示
*/

#include <stdio.h>

int main(void)
{
	char *ptr = "ABCD";				/* 先頭文字へのポインタで初期化 */

	printf("ptr  = %s\n", ptr);		/* ptrが先頭文字を指す文字列 */
	printf("ptr  = %p\n", ptr);		/* ptrそのもの（アドレス） */
	printf("*ptr = %c\n", *ptr);	/* ptrが指す文字 */

	return 0;
}
