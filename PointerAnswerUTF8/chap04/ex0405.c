/* 演習4-5の解答例 */

#include <stdio.h>
#include <string.h>

/*--- 文字列s中に含まれる文字cの個数を調べる ---*/
int str_chnum(const char *s, int c)
{
	int count = 0;

	while (*s)
		if (*s++ == c)
			count++;

	return count;
}

int main(void)
{
	char str[60];		/* この文字列から探索 */
	char tmp[60];
	int  ch;			/* 探す文字 */
	int  n;				/* 文字の個数 */

	printf("文字列を入力してください：");
	scanf("%s", str);

	printf("探す文字は：");
	scanf("%s", tmp);			/* いったん文字列として読み込んで */
	ch = tmp[0];				/* その最初の文字を探索文字とする */

	
	if ((n = str_chnum(str, ch)) == 0)				/* 文字数を調べる */
		printf("文字'%c'は文字列中に存在しません。\n", ch);
	else
		printf("文字'%c'は%d個含まれます。\n", ch, n);

	return 0;
}