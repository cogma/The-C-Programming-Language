/*
	数値を文字列として読み込んで表示（改良版）
*/

#include <ctype.h>
#include <stdio.h>

/*--- 文字列をint型の値に変換 ---*/
int strtoi(const char *str, int *err)
{
	int no = 0;
	int sign = 1;				/* 符号 */

	while (isspace(*str))		/* 空白類文字を読み飛ばす */
		str++;

	switch (*str) {
	 case '+' : str++;              break;		/* 正符号 */
	 case '-' : str++;  sign = -1;  break;		/* 負符号 */
	}

	for ( ; isdigit(*str); str++)
		no = no * 10 + (*str - '0');
	no *= sign;

	*err = *str ? 1 : 0;

	return no;
}

int main(void)
{
	int  num, err;
	char buffer[100];

	while (1) {
		printf("整数値を入力せよ：");
		scanf("%s", buffer);

		num = strtoi(buffer, &err);
		if (err)
			puts("\a整数値に変換できませんでした。");
		else {
			if (num == 9999)
				break;
		 	printf("あなたは%dと入力しましたね。\n", num);
		}
	}

	return 0;
}