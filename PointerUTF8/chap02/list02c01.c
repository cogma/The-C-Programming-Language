/* オブジェクトの記憶域期間と初期化 */

#include <stdio.h>

int ft = 0;					/* 静的記憶域期間 */

void func(void)
{
	static int st = 0;		/* 静的記憶域期間 */
	int        at = 0;		/* 自動記憶域期間 */

	ft++;
	st++;
	at++;
	printf("ft = %d  st = %d  at = %d\n", ft, st, at);
}

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
		func();

	return 0;
}
