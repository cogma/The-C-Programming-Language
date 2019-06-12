/* 文字列をコピー（第１版）*/

#include <stdio.h>

/*--- 文字列sをdにコピー（第１版）---*/
void str_copy(char d[], const char s[])
{
	int i = 0;

	while ((d[i] = s[i]) != '\0')
		i++;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("文字列strは\"%s\"です。\n", str);
	printf("コピーする文字列は：");
	scanf("%s", tmp);

	/* 文字列tmpをstrにコピー */
	str_copy(str, tmp);

	printf("文字列strは\"%s\"です。\n", str);

	return 0;
}
