/*
	オブジェクトの記憶域期間（静的／自動）と初期化
*/

#include <stdio.h>

int ft;					/* 静的記憶域期間 */

void func(void)
{
	int        at = 0;	/* 自動記憶域期間 */
	static int st;		/* 静的記憶域期間 */

	ft++;
	at++;
	st++;
	printf("ft = %d  at = %d  st = %d\n", ft, at, st);
}

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
		func();

	return 0;
}
