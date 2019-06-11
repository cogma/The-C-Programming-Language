/*
	unsigned charとintの演算
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int x;
	unsigned char ch = UCHAR_MAX;		/* 符号無しcharの最大値 */

	printf("chの値は%dです。\n", ch);

	x = ch + 1;

	printf("\nx = ch + 1;\n");
	printf("xの値は%dです。\n", x);

	x = ++ch;

	printf("\nx = ++ch;\n");
	printf("xの値は%dです。\n", x);

	return 0;
}
