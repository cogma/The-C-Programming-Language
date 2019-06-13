/* 文字列の代入と連結（間違い）*/

#include <stdio.h>

int main(void)
{
	char s1[256], s2[256];

	s1 = "ABC";					/* エラー：代入はできない */
	s2 = s1 + "DEF";			/* エラー：連結はできない */

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	return 0;
}
