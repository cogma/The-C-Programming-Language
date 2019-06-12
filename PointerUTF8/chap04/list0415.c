/* 文字列の長さを求める（第２版）*/

#include <stdio.h>

/*--- 文字列sの長さを求める（第２版）---*/
int str_length(const char *s)
{
	int len = 0;	/* 長さ */

	for ( ; *s != '\0'; s++)
		len++;
	return len;
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	printf("文字列\"%s\"の長さは%dです。\n",
					 str, str_length(str));

	return 0;
}
