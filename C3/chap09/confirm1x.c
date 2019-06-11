/*
	入力の確認を行う（問題あり：getchar関数の呼出しが無視される？）
*/

#include <stdio.h>

int main(void)
{
	int ch;
	char name[20];

	printf("名前を入力してください：");
	scanf("%s", name);

	printf("よろしいですか（Ｙ／Ｎ）：");

	ch = getchar();					/* この関数呼出しが無視される？ */
	printf("ch = %x\n", ch);
	if (ch == 'Y' || ch == 'y') {
		printf("こんにちは%sさん。\n", name);		/* 実行されない */
		/* 【処理】 */								/* 実行されない */
	}

	return 0;
}
