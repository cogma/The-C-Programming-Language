/*
	関数呼出しとスタックを理解するためのプログラム例
*/

#include <stdio.h>

void fa(void)
{
	puts("□□□関数fa開始");
	puts("□□□関数fa終了");
}

void fb(void)
{
	puts("□□□関数fb開始");
	puts("□□□関数fb終了");
}

void fc(void)
{
	puts("□□関数fc開始");

	fa();								/* 関数faを呼び出す */

	fb();								/* 関数fbを呼び出す */

	puts("□□関数fc終了");
}

int main(void)
{
	puts("□main関数開始");

	fc();								/* 関数fcを呼び出す */

	puts("□main関数終了");

	return 0;
}
