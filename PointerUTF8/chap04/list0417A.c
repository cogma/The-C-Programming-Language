/* 文字列を表示（別解） */

#include <stdio.h>

/*--- 文字列sを表示（別解）---*/
void put_str(const char *s)
{
	while (*s) {
		putchar(*s);
		s++;
	}
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s", str);

	put_str(str);
	putchar('\n');

	return 0;
}
