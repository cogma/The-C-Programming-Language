/*
	３乗値を求める（関数原型宣言）
*/

#include <stdio.h>

double pow(double, double);		/* 関数原型宣言 */

int main(void)
{
	double x;

	printf("実数値を入力せよ：");
	scanf("%lf", &x);

	printf("その数の３乗は%.3fです。\n", pow(x, 3));

	return 0;
}
