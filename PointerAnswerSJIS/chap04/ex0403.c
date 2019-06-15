/* 演習4-3 */

#include <stdio.h>

int main(void)
{
	char *p = "ABCD";
	char *q;
	q = p;

	printf("ポインタpが指す文字列\"%s\"のアドレスは%pです。\n", p, p);
	printf("ポインタpが指す文字列\"%s\"のアドレスは%pです。\n", q, q);

	return 0;
}
