/*
	入力の確認を行う（修正版？）
*/

#include <stdio.h>

int main(void)
{
	int ch;
	char name[20];

	printf("名前を入力してください：");
	scanf("%s", name);

	printf("よろしいですか（Ｙ／Ｎ）：");

	fflush(stdin);			/* 標準入力ストリームのバッファをフラッシュ */

	ch = getchar();
	if (ch == 'Y' || ch == 'y') {
		printf("こんにちは%sさん。\n", name);
		/* 【処理】 */
	}

	return 0;
}
