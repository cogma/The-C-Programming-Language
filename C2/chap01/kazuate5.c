/* 数当てゲーム（その５：入力履歴を表示）*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE	10		/* 最大入力回数 */

int main(void)
{
	int i;
	int stage;				/* 入力した回数 */
	int no;					/* 読み込んだ値 */
	int ans;				/* 当てさせる数 */
	int num[MAX_STAGE];		/* 読み込んだ値の履歴 */

	srand(time(NULL));		/* 乱数の種を設定 */
	ans = rand() % 1000;	/* 0〜999の乱数を生成 */

	printf("0〜999の整数を当ててください。\n\n");

	stage = 0;
	do {
		printf("残り%d回。いくつかな：", MAX_STAGE - stage);
		scanf("%d", &no);
		num[stage++] = no;			/* 読み込んだ値を配列に格納 */

		if (no > ans)
			printf("\aもっと小さいよ。\n");
		else if (no < ans)
			printf("\aもっと大きいよ。\n");
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans)
		printf("\a残念。正解は%dでした｡\n", ans);
	else {
		printf("正解です。\n");
		printf("%d回で当たりましたね｡\n", stage);
	}

	puts("\n--- 入力履歴 ---");
	for (i = 0; i < stage; i++)
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);

	return 0;
}
