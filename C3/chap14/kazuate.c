/*
	数当てゲーム
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "display.h"

int main(void)
{
	int no;						/* 読み込んだ値 */
	int ans;					/* 当てさせる数 */
	const int max_stage = 10;	/* 最大入力回数 */
	int remain = max_stage;		/* 残り何回入力できるか？ */

	srand(time(NULL));			/* 乱数の種を設定 */
	ans = rand() % 1000;		/* 0～999の乱数を生成 */

	printf("0～999の整数を当ててください。\n\n");

	do {
		color(BRIGHT_WHITE);
		printf("残り%d回。いくつかな：", remain);
		scanf("%d", &no);
		remain--;			/* 残り回数をデクリメント */

		if (no > ans) {
			color(BRIGHT_CYAN);
			printf("\aもっと小さいよ。\n");
		} else if (no < ans) {
			color(BRIGHT_GREEN);
			printf("\aもっと大きいよ。\n");
		}
	} while (no != ans && remain > 0);

	if (no != ans) {
		color(BRIGHT_RED);
		printf("\a残念。正解は%dでした｡\n", ans);
	} else {
		color(BRIGHT_CYAN);
		printf("正解です。\n");
		printf("%d回で当たりましたね｡\n", max_stage - remain);
	}

	color(WHITE);

	return 0;
}
