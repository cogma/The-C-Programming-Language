/*
	メインプログラム（関数sumを利用）
*/

#define max  10

#include <stdio.h>
#include "sum.h"

int main(void)
{
	int n;

	do {
		printf("1～%dの整数値：", max);
		scanf("%d", &n);
	} while (n < 1 || n > max);

	printf("1～%dの和は%dです。\n",
				n, sum(n));

	return 0;
}
