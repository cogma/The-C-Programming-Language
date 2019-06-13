/* qsort関数を利用して実数配列の要素を値の降順にソート */

#include <stdio.h>
#include <stdlib.h>

/*--- double型の比較関数（降順ソート用） ---*/
int double_cmpr(const double *a, const double *b)
{
	return *a < *b ? 1 : *a > *b ? -1 : 0;
}

int main(void)
{
	int i;
	double x[8];
	int nx = sizeof(x) / sizeof(x[0]);

	printf("%d個の実数を入力せよ。\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%lf", &x[i]);
	}

	qsort(x, nx, sizeof(double), (int (*)(const void *, const void *))double_cmpr);

	puts("降順にソートしました。");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %.3f\n", i, x[i]);

	return 0;
}
