/* 汎用クイックソート（qsort関数に準じた仕様）*/

#include <stdlib.h>

/*--- x, yの指すnバイトの領域を交換 ---*/
static void memswap(void *x, void *y, size_t n)
{
	unsigned char *a = (unsigned char *)x;
	unsigned char *b = (unsigned char *)y;

	for ( ; n--; a++, b++) {
		unsigned char c = *a;
		*a = *b;
		*b = c;
	}
}

/*--- 汎用クイックソート（qsort関数に準じた仕様）---*/
void quicksort(void *base, size_t nmemb, size_t size,
			   int (*compar)(const void *, const void *))
{
	if (nmemb > 0) {
		size_t pl = 0;					/* 左カーソル */
		size_t pr = nmemb - 1;			/* 右カーソル */
		size_t pv = nmemb;				/* 枢軸 */
		size_t pt = (pl + pr) / 2;		/* 枢軸の更新値 */
		char *v = (char *)base;			/* 先頭要素へのポインタ */
		char *x;						/* 枢軸へのポインタ */

		do {
			if (pv != pt) x = &v[(pv = pt) * size];
			while (compar((const void *)&v[pl * size], x) < 0) pl++;
			while (compar((const void *)&v[pr * size], x) > 0) pr--;
			if (pl <= pr) {
				pt = (pl == pv) ? pr : (pr == pv) ? pl : pv;
				memswap(&v[pl * size], &v[pr * size], size);
				pl++;
				if (pr == 0)	/* 符号無し整数0からのデクリメントを避ける */
					goto QuickRight;
				pr--;
			}
		} while (pl <= pr);

		if (0  < pr)      quicksort(&v[0],         pr + 1,     size, compar);
	QuickRight:
		if (pl < nmemb-1) quicksort(&v[pl * size], nmemb - pl, size, compar);
	}
}

#include <stdio.h>

/*--- int型の比較関数（昇順ソート用） ---*/
int int_cmp(const int *a, const int *b)
{
	return *a < *b ? -1 : *a > *b ? 1 : 0;
}

int main(void)
{
	int i;
	int x[8];
	int nx = sizeof(x) / sizeof(x[0]);

	printf("%d個の整数を入力せよ。\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	quicksort(x, nx, sizeof(int), (int (*)(const void *, const void *))int_cmp);

	puts("昇順にソートしました。");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
