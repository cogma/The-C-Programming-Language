/* 同じ綴りの文字列リテラル */

#include <stdio.h>

int main(void)
{
	char *s1 = "ABC";			/* s1は"ABC"の先頭文字'A'を指す */
	char *s2 = "ABC";			/* s2は"ABC"の先頭文字'A'を指す */	

	*s1 = 'Z';					/* s1の指す文字を書きかえる */

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	return 0;
}
