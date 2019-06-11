/*
	単純な制御式をもつif文の利用例
*/

#include <stdio.h>

int main(void)
{
	int nx;

	printf("nxの値を入力せよ：");
	scanf("%d", &nx);

	if (nx == 0)
		puts("それは0です。");
	else
		puts("それは0ではありません。");

	return 0;
}
