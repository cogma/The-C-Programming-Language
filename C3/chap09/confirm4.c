/*
	入力の確認を行う（修正版２）
*/

#include <ctype.h>
#include <stdio.h>

/*--- 非空白類文字を１文字読み込む ---*/
int getnschar(void)
{
	int ch;

	while (isspace(ch = getchar()) && ch != EOF)
		;
	return ch;
}

/*--- 確認（'Y', 'y', 'N', 'n'のみを読み込む）---*/
int kakunin(void)
{
	int ch;

	while ((ch = getnschar()) != EOF) {
		if (ch == 'Y' || ch == 'y') return 1;
		if (ch == 'N' || ch == 'n') return 0;
	}

	return EOF;
}

int main(void)
{
	int ch;
	char name[20];

	printf("名前を入力してください：");
	scanf("%s", name);

	printf("よろしいですか（Ｙ／Ｎ）：");

	ch = kakunin();
	if (ch == 1) {
		printf("こんにちは%sさん。\n", name);
		/* 【処理】 */
	}

	return 0;
}
