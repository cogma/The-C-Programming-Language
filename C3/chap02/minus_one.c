/*
	-1��unsigned int�^�ɕϊ��������ʂ�UINT_MAX�ɂȂ邱�Ƃ��m�F
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("(unsinged)-1 = %u\n", (unsigned)-1);
	printf("UINT_MAX     = %u\n", UINT_MAX);

	return 0;
}
