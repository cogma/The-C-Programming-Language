/*
	������̏������ƕ\���i������͍ŏ��̃i�������܂łł��邱�Ƃ��m�F�j
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
