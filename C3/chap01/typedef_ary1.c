/*
	typedef名による配列の初期化を確認
*/

#include <stdio.h>

int main(void)
{
	int i;
	typedef int Int5ary[5];		/* 要素型がintで要素数が5の配列型（int[5]型）*/
	Int5ary x = {1, 2, 3};

	for (i = 0; i < 5; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
