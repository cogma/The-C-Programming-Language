/*
	数値を読み込んで表示
*/

#include <stdio.h>

int main(void)
{
	int num;

	while (1) {
		printf("整数値を入力せよ：");
 		scanf("%d", &num);
		if (num == 9999) break;

 		printf("あなたは%dと入力しましたね。\n", num);
	}

	return 0;
}
