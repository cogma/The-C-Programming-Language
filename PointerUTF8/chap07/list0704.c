/* 動的に確保した領域に値を読み込む */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = calloc(1, sizeof(int));				/* int型整数を動的に確保 */

	if (p == NULL)
		puts("記憶域の確保に失敗しました。");
	else {
		printf("整数を入力してください：");
		scanf("%d", p);						/* 値を読み込む */
		printf("*pの値は%dです。\n", *p);
		free(p);							/* 確保していた領域を解放 */
	}

	return 0;
}
