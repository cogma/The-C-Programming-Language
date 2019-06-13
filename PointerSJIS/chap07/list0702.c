/* 整数１個分の記憶域を動的に確保（malloc関数を利用）*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = malloc(sizeof(int));			/* int型整数を動的に確保 */

	if (p == NULL)
		puts("記憶域の確保に失敗しました。");
	else
		printf("*pの値は%dです。\n", *p);

	return 0;
}
