/* 配列名が先頭要素へのポインタと解釈されることを確認 */

#include <stdio.h>

int main(void)
{
	int a[5];	/* int型を要素型とする要素数5の配列 */

	printf(" a   の値＝%p\n",  a   );		/* aの値を表示 */
	printf("&a[0]の値＝%p\n", &a[0]);		/* &a[0]の値を表示 */

	if (a == &a[0])
		puts("aと&a[0]は等しい。");			/* 必ず実行される */
	else
		puts("aと&a[0]は等しくない。");		/* 決して実行されない */

	return 0;
}
