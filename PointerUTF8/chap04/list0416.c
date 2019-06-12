/* 文字列の長さを求める（第３版）*/

#include <stdio.h>

/*--- 文字列sの長さを求める（第３版）---*/
int str_length(const char *s)
{
	const char *p = s;

	while (*s)
		s++;
	return s - p;
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
