/*
	オブジェクトの記憶域期間（静的／自動）と初期化
*/

#include <stdio.h>

int ft;					/* 静的記憶域期間 */

void func(void)
{
	int        at = sin(0.9);  /* ＯＫ */
	static int st = sin(0.9);  /* エラー */
}

int main(void)
{
	func();

	return 0;
}
