/*
	入力の確認を行う（修正版１）
*/

#include <ctype.h>
#include <stdio.h>

/*--- 確認用関数 ---*/
int kakunin(void)
{
	int ch;

	while (isspace(ch = getchar()) && ch != EOF)
		;
	return ch;
}

int main(void)
{
	int ch;
	char name[20];

	printf("名前を入力してください：");
	scanf("%s", name);

	printf("よろしいですか（Ｙ／Ｎ）：");

	ch = kakunin();
 	if (ch == 'Y' || ch == 'y') {
		printf("こんにちは%sさん。\n", name);
		/* 【処理】 */
	}

	return 0;
}
