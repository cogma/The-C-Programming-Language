/* 配列の受渡し（その１）*/

#include <stdio.h>

/*--- 配列の先頭3要素に1,2,3を代入 ---*/
void set123(int a[])
{
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
}

int main(void)
{
	int i;
	int x[5] = {0};		/* 全要素を0で初期化 */

	set123(x);

	for (i = 0; i < 5; i++)
		printf("x[%d] = %d\n", i, x[i]);	/* x[i]の値を表示 */

	return 0;
}
