/* ２次元配列と要素・構成要素の大きさを表示 */

#include <stdio.h>

int main(void)
{
	int a[4][3];

	printf("sizeof(a)       = %u\n", (unsigned)sizeof(a));		 /* 配列 */
	printf("sizeof(a[0])    = %u\n", (unsigned)sizeof(a[0]));	 /* 要素 */
	printf("sizeof(a[0][0]) = %u\n", (unsigned)sizeof(a[0][0])); /* 構成要素 */

	printf("配列aは%d行%d列の２次元配列です。\n",
				(int)(sizeof(a)    / sizeof(a[0])),			/* 行数 */
				(int)(sizeof(a[0]) / sizeof(a[0][0])));		/* 列数 */
	printf("構成要素は%d個です。\n",
				(int)(sizeof(a)    / sizeof(a[0][0])));		/* 構成要素数 */
	return 0;
}
