/* 配列とポインタの大きさを表示 */

#include <stdio.h>

/*--- 受け取ったポインタの大きさを表示 ---*/
void func(int p[])
{
	printf("sizeof(p) = %u\n", (unsigned)sizeof(p));	/* ポインタ */
}

int main(void)
{
	int a[5];

	printf("sizeof(a) = %u\n", (unsigned)sizeof(a));	/* 配列 */

	func(a);

	return 0;
}
