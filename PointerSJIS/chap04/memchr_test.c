/* memchr関数の利用例 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char m[] = "1234567890\0ABCDEFGHIJKLMNOPQRSTUVWXYZ";	/* この領域から探索 */
	char tmp[128];
	int  ch;			/* 探す文字 */
	char *p;

	printf("探す文字は：");
	scanf("%s", tmp);			/* いったん文字列として読み込んで */
	ch = tmp[0];				/* その最初の文字を探索文字とする */

	if ((p = memchr(m, ch, sizeof(m))) == NULL)				/* 先頭の出現を探索 */
		printf("文字'%c'は存在しません。\n", ch);
	else
		printf("文字'%c'は%ld文字目に存在します。\n", ch, (long)(p - m) + 1);

	return 0;
}
