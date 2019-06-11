/*
	動的に生成した整数に値を読み込む
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x;

	x = calloc(1, sizeof(int));							/* 確保 */

	if (x == NULL)
		puts("記憶域の確保に失敗しました。");
	else {
		printf("整数値を入力してください：");
		scanf("%d", x);									/* 正しい方法 */
		printf("あなたは%dと入力しましたね。\n", *x);
		free(x);										/* 解放 */
	}

	return 0;
}
