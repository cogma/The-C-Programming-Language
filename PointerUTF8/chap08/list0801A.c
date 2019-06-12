/* 特定条件の成立の可否によって配列要素の値を識別表示（その２） */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--- 成績は良[Ｂ：70～79点]か？ ---*/
int isB(int x)
{
	return x >= 70 && x <= 79;
}

/*--- 成績は優[Ａ：80～100]または可[Ｃ：60～69]か？ ---*/
int isAorC(int x)
{
	return (x >= 80 && x <= 100) || (x >= 60 && x <= 69);
}

/*--- 関数isB, isAorCの返却値が真（非0）である配列aの要素を識別表示 ---*/
void put_list(const int a[], int n, int sw)
{
	int i;

	for (i = 0; i < n; i++) {
		int flag;
		switch (sw) {
		 case 0: flag = isB(a[i]);		break;	/* 良[Ｂ]か？ */
		 case 1: flag = isAorC(a[i]);	break;	/* 優[Ａ]または可[Ｃ]か？ */
		}
		if (flag)
			printf("★ ");
		else
			printf("   ");
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

	puts("良----------");
	put_list(a, n, 0);			/* 良[Ｂ]に★を付けて一覧表示 */

	puts("\n優または可--");
	put_list(a, n, 1);			/* 優[Ａ]または可[Ｃ]の点数に★を付けて一覧表示 */

	return 0;
}
