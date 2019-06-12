/* 配列の全要素に0を代入（第２版）*/

#include <stdio.h>

/*--- 配列pの先頭n個の要素に0を代入（第２版）---*/
void fill_zero(int *p, int n)
{
	while (n-- > 0) {
		*p = 0;			/* 着目要素に0を代入 */
		p++;			/* 次の要素に着目 */
	}
}

int main(void)
{
	int i;
	int x[5] = {1, 2, 3, 4, 5};
	int x_size = sizeof(x) / sizeof(x[0]);		/* 配列xの要素数 */

	fill_zero(x, x_size);

	for (i = 0; i < x_size; i++)
		printf("x[%d] = %d\n", i, x[i]);		/* x[i]の値を表示 */

	return 0;
}