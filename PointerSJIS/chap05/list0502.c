/* 《２次元配列版》文字列の配列内の個々の文字列を表示 */

#include <stdio.h>

/*--- ２次元配列内の各文字列を１文字ずつ走査して表示 ---*/
void put_string_array(const char s[][5], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		printf("s[%d] = \"", i);
		for (j = 0; s[i][j] != '\0'; j++)
			putchar(s[i][j]);
		printf("\"\n");
	}
}

int main(void)
{
	char a[][5] = {"LISP", "C", "Ada"};
	int na = sizeof(a) / sizeof(a[0]);		/* 要素数 */

	put_string_array(a, na);

	return 0;
}
