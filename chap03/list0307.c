/* １次元配列を受け取る関数に２次元配列を渡す */

#include <stdio.h>

/*--- 要素数nの配列aの全要素の値を表示 ---*/
int print_array(const int a[], int n)
{
	int i;

	printf("{");
	if (n >= 2)
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
	if (n >= 1)
		printf("%d", a[n - 1]);
	printf("}");
}

/*--- 要素数nの配列aの全要素の合計を求める ---*/
int sum(const int a[], int n)
{
	int i;
	int sum = 0;	/* 合計 */

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int main(void)
{
	int i, j;
	int x[] = {1, 3, 5, 7};				/* 要素数4の１次元配列 */
	int y[][5] = { {1, 2, 3, 4, 5},		/* 3行5列の２次元配列 */
				   {1, 1, 1, 1, 1},
				   {1, 3, 5, 7, 9},
				 };
	int x_size = sizeof(x) / sizeof(x[0]);			/* xの要素数 */
	int y_height = sizeof(y) / sizeof(y[0]);		/* yの行数 */
	int y_width  = sizeof(y[0]) / sizeof(y[0][0]);	/* yの列数 */

	printf("配列x…");
	print_array(x, x_size);
	printf(" 合計＝%d\n", sum(x, x_size));

	for (i = 0; i < y_height; i++) {
		printf("配列y[%d]…", i);
		print_array(y[i], y_width);
		printf(" 合計＝%d\n", sum(y[i], y_width));
	}

	return 0;
}
