/*
	３乗値を求める（標準ヘッダをインクルード）
*/

#include <math.h>
#include <stdio.h>

int main(void)
{
	double x;

	printf("実数値を入力せよ：");
	scanf("%lf", &x);

	printf("その数の３乗は%.3fです。\n", pow(x, 3));

	return 0;
}
