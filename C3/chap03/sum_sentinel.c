/*
	配列の全要素の値を合計する（要素数をやり取りしない）
*/

#include <stdio.h>

#define INVALID  -1		/* 番兵（無効な値）*/

/*--- 番兵INVALIDより前の要素を合計 ---*/
int sumup(int v[])
{
	int i;
	int sum = 0;

	for (i = 0; v[i] != INVALID; i++)
		sum += v[i];
	return sum;
}

int main(void)
{
	int i;
	int a[128];
	int na = sizeof(a) / sizeof(a[0]);		/* 配列aの要素数 */

	printf("%d個の非負の整数を入力せよ（終了は-1）。\n", na - 1);
	for (i = 0; i < na - 1; i++) {
		printf("a[%d]：", i);
		scanf("%d", &a[i]);
		if (a[i] == INVALID) break;		/* 入力終了 */
	}
	if (i == na - 1)					/* INVALIDが入力されなかったら */
		a[i] = INVALID;					/* 末尾要素の値をINVALIDにする */

	printf("合計＝%d\n", sumup(a));

	return 0;
}
