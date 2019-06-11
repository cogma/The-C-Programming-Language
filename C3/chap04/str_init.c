/*
	文字列の初期化と表示（文字列は最初のナル文字までであることを確認）
*/

#include <stdio.h>

int main(void)
{
	char a[4] = {'S', 'X', '\0', '2'};		/* 'S', 'X', '\0', '2' */
	char b[4] = "ABC";						/* 'A', 'B', 'C', '\0' */

	printf("a = %s\n", a);
	printf("b = %s\n", b);

	return 0;
}
