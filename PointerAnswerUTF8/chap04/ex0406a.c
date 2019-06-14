/* 演習4-6の解答例（別解：isdigt関数を利用） */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*--- 文字列s中に含まれる数字文字の個数を調べる ---*/
int str_dignum(const char *s)
{
	int count = 0;

	while (*s) {
		if (isdigit(*s))
			count++;
		*s++;
	}

	return count;
}

int main(void)
{
	char str[60];		/* この文字列から探索 */
	char tmp[60];
	int  n;				/* 文字の個数 */

	printf("文字列を入力してください：");
	scanf("%s", str);

	if ((n = str_dignum(str)) == 0)				/* 文字数を調べる */
		printf("数字文字は文字列中に存在しません。\n");
	else
		printf("数字文字は%d個含まれます。\n", n);

	return 0;
}