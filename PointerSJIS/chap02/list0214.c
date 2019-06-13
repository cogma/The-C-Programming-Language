/* register付きで宣言された配列の先頭要素の値を表示（動作しない） */

#include <stdio.h>

int main(void)
{
	register int a[5];

	printf("a[0]の値は%dです。\n", a[0]);	/* コンパイルエラー */

	return 0;
}
