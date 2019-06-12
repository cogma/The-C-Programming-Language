/* 文字列の比較（間違い）*/

#include <stdio.h>

int main(void)
{
	char s[10];

	printf("文字列を入力してください：");
	scanf("%s", s);

	if (s == "ABC")
		puts("あなたは\"ABC\"と入力しましたね。");		  /* 実行されない */
	else
		puts("あなたは\"ABC\"と入力しませんでしたね。");  /* 実行される */

	return 0;
}
