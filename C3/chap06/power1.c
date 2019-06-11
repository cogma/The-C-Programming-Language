/*
	pow関数を呼び出して３乗値を求める（正しい結果は得られない）
*/

#include <stdio.h>

int main(void)
{
	double x;

	printf("実数値を入力せよ：");
	scanf("%lf", &x);

	printf("その数の３乗は%.3fです。\n", pow(x, 3.0));

	return 0;
}
