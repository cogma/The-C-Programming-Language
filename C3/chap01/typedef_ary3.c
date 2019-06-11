/*
	typedef名による不完全な配列の初期化を確認（エラー）
*/

#include <stdio.h>

int main(void)
{
	int i;
	typedef int IntAry[];		/* 要素型がintの配列型 */
	IntAry a = {1, 2, 3};			/* 要素数は3 */
	IntAry b = {1, 2, 3, 4, 5};		/* 要素数は5 */
	IntAry c;						/* エラー */

	for (i = 0; i < 3; i++)
		printf("a[%d] = %d\n", i, a[i]);

	for (i = 0; i < 5; i++)
		printf("b[%d] = %d\n", i, b[i]);

	return 0;
}
