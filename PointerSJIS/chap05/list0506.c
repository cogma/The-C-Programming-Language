/*《ポインタの配列版》文字列の配列内の個々の文字列を表示 */

#include <stdio.h>

/*--- ポインタによる文字列s[n]を表示 ---*/
void put_string_array(const char *s[], int n)
{
	printf("s[%d] = \"%s\"\n", n, s[n]);
}

int main(void)
{
	int  i;
	char *p[] = {"PAUL", "X", "MAC"};
	int  np = sizeof(p) / sizeof(p[0]);		/* pの要素数 */

	for (i = 0; i < np; i++)
		put_string_array(p, i);

	return 0;
}
