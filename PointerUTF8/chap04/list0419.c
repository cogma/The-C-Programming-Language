/* 文字列をコピー（第２版）*/

#include <stdio.h>

/*--- 文字列sをdにコピー（第２版）---*/
char *str_copy(char *d, const char *s)
{
	char *p = d;

	while (*d++ = *s++)
		;
	return p;
}

int main(void)
{
	char tmp[16];
	char s1[16] = "ABC", s2[16], s3[16];

	printf("文字列を入力してください：");
	scanf("%s", tmp);

	/* s2にコピーした文字列をs1にもコピー */
	str_copy(s1, str_copy(s2, tmp));

	printf("文字列s1は\"%s\"です。\n", s1);
	printf("文字列s2は\"%s\"です。\n", s2);
	printf("文字列s3は\"%s\"です。\n", str_copy(s3, tmp));

	return 0;
}
