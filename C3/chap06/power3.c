/*
	３乗値を求める（古いスタイル：期待どおりに動作しない）
*/

#include <stdio.h>

extern double pow();

int main(void)
{
	double x;

	printf("実数値を入力せよ：");
	scanf("%lf", &x);

	printf("その数の３乗は%.3fです。\n", pow(x, 3));

	return 0;
}
