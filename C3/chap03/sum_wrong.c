/*
	配列の全要素の値を合計する（間違い）
*/

#include <stdio.h>

/*--- 配列vの全要素の合計値を返す（間違い）---*/
int sumup(int v[n])
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += v[i];
	return sum;
}

int main(void)
{
	int i;
	int a[5];
	int na = sizeof(a) / sizeof(a[0]);		/* 配列aの要素数 */

	printf("%d個の整数を入力せよ。", na);
	for (i = 0; i < na; i++) {
		printf("a[%d]：", i);
		scanf("%d", &a[i]);
	}
	printf("合計＝%d\n", sumup(a));

	return 0;
}
