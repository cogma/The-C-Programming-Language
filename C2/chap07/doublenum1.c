/* ダブルナンバーサーチ・トレーニング（その１）*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE	10					/* 挑戦回数 */
#define swap(type, x, y)	do { type t = x; x = y; y = t; } while (0)

int main(void)
{
	int i, j, stage;
	int dgt[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a[10];
	double jikan;						/* 時間 */
	clock_t start, end;					/* 開始時刻・終了時刻 */

	srand(time(NULL));					/* 乱数の種を設定 */

	printf("ダブっている数字を入力してください。\n");

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++) {
		int x = rand() % 9;		/* 0〜8の乱数を生成 */
		int no;					/* 読み込んだ値 */

		i = j = 0;
		while (i < 9) {				/* dgt[x]をダブらせてコピー */
			a[j++] = dgt[i];
			if (i == x)
				a[j++] = dgt[i];
			i++;
		}

		for (i = 9; i > 0; i--) {	/* 配列aをシャッフル */
			int j = rand() % (i + 1);
			if (i != j)
				swap(int, a[i], a[j]);
		}

		for (i = 0; i < 10; i++)	/* 全要素を表示 */
			printf("%d ", a[i]);
		printf("：");

		do {
			scanf("%d", &no);
		} while (no != dgt[x]);		/* 正解が入力されるまで繰り返す */
	}
	end = clock();

	jikan = (double)(end - start) / CLOCKS_PER_SEC;

	printf("%.1f秒かかりました。\n", jikan);

	if (jikan > 25.0)
		printf("鈍すぎます。\n");
	else if (jikan > 20.0)
		printf("少し鈍いですね。\n");
	else if (jikan > 17.0)
		printf("まあまあですね。\n");
	else
		printf("素早いですね。\n");

	return 0;
}
