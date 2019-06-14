/* 演習2-2の解答例 */

#include <stdio.h>

/*--- 要素数nの配列bの全要素を配列aにコピー ---*/
void ary_cpy(int a[], const int b[], int no)
{
	while (no-- > 0)
		*a++ = *b++;
}

int main(void)
{
	int i, no;
	int x[5], y[5];
	int x_size = sizeof(x) / sizeof(x[0]);

	for (i = 0; i < x_size; i++) {
		printf("x[%d]：", i);
		scanf("%d", &x[i]);
	}

	ary_cpy(y, x, x_size);

	printf("配列xの全要素を配列yにコピーしました。\n");
	for (i = 0; i < x_size; i++)
		printf("y[%d]＝%d\n", i, y[i]);

	return 0;
}
