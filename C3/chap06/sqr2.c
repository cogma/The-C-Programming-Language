/*
	２乗値を求める（関数sqrを末尾側に配置：コンパイルエラー）
*/

#include <stdio.h>

int main(void)
{
	double x;

	printf("実数値を入力せよ：");
	scanf("%lf", &x);

	printf("その数の２乗は%.3fです。\n", sqr(x));		/* 警告 */

	return 0;
}

/*--- ２乗値を求める ---*/
double sqr(double x)									/* エラー */
{
	return x * x;
}
