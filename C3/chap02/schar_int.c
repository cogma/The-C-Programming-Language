/*
	signed char��int�̉��Z
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int x;
	signed char ch = CHAR_MAX;			/* �����t��char�̍ő�l */

	printf("ch�̒l��%d�ł��B\n", ch);

	x = ch + 1;

	printf("\nx = ch + 1;\n");
	printf("x�̒l��%d�ł��B\n", x);

	x = ++ch;

	printf("\nx = ++ch;\n");
	printf("x�̒l��%d�ł��B\n", x);

	return 0;
}
