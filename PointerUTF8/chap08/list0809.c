/* bsearch関数による昇順ソートずみ配列からの探索 */

#include <stdio.h>
#include <stdlib.h>

/*--- 整数を比較する関数 ---*/
int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i, no, *p; 
	int x[8];
	int nx = sizeof(x) / sizeof(x[0]);	/* xの要素数 */

	printf("%d個の整数を昇順に入力せよ。\n", nx);
	i = 0;
	printf("x[%d] : ", i);
	scanf("%d", &x[i]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}

	printf("探索する値：");
	scanf("%d", &no);

	p = bsearch(&no, x, nx, sizeof(int),
							(int (*)(const void *, const void *))int_cmp);

	if (p != NULL)
		printf("x[%d]が一致します。\n", (int)(p - x));
	else
		puts("見つかりませんでした。");

	return 0;
}
