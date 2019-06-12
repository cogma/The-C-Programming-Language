/* 曜日を表す英単語の表示（２次元配列版）*/

#include <stdio.h>

/*--- 曜日に対応する文字列を返す（２次元配列版）---*/
char *weekstr(int wd)
{
	static char wstr[][10] = {
		"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday"
	};
	return (wd >= 0 && wd < 7) ? wstr[wd] : NULL;
}

int main(void)
{
	int n;
	int retry;

	puts("曜日を表す英単語を表示します。");

	do {
		printf("0-日曜日／1-月曜日／…／6-土曜日：");
		scanf("%d", &n);

		if (n >= 0 && n < 7)
			printf("英語では%sです。\n", weekstr(n));

		printf("もう一度？　0-いいえ／1-はい：");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}
