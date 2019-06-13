#define swap(type, x, y)	do { type t = x; x = y; y = t; } while (0)

/*--- int型配列のクイックソート ---*/
void quick(int v[], int n)
{
	if (n > 0) {
		int pl = 0;					/* 左カーソル */
		int pr = n - 1;				/* 右カーソル */
		int x = v[(pl + pr) / 2];	/* 枢軸は中央の要素 */

		do {
			while (v[pl] < x) pl++;
			while (v[pr] > x) pr--;
			if (pl <= pr) {
				swap(int, v[pl], v[pr]);
				pl++;
				pr--;
			}
		} while (pl <= pr);
		if (0  < pr)    quick(v, pr + 1);		/* 左グループを分割 */
		if (pl < n - 1) quick(v + pl, n - pl);	/* 右グループを分割 */
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

	quick(x, nx);

	puts("昇順にソートしました。");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
