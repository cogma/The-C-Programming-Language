/* 特定条件の成立の可否によって配列要素の値を識別表示 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--- 成績は良[Ｂ：70～79点]か？ ---*/
int fit(int x)
{
	return x >= 70 && x <= 79;
}

/*--- 関数fit(x)の返却値が真（非0）である配列aの要素を識別表示 ---*/
void put_list(const int a[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		if (fit(a[i]))
			printf("★");
		else
			printf("  ");
		printf("a[%d] = %d\n", i, a[i]);
	}
}

int main()
{
	int i;
	int a[10];							/* 点数 */
	int n = sizeof(a) / sizeof(a[0]);	/* 要素数 */

	srand(time(NULL));			/* 乱数の種を初期化 */

	for (i = 0; i < n; i++)
		a[i] = rand() % 101;	/* 0～100の乱数を代入 */

	put_list(a, n);				/* 一覧表示 */

	return 0;
}
