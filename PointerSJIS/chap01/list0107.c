/* int�^��int *�^�̑傫����\�� */

#include <stdio.h>

int main(void)
{
	int n;		/* int�^ */
	int *p;		/* int *�^ */

	printf("int  �^��%u�o�C�g�ł��B\n", (unsigned)sizeof(int));
	printf("int *�^��%u�o�C�g�ł��B\n", (unsigned)sizeof(int *));

	printf(" n��%u�o�C�g�ł��B\n", (unsigned)sizeof(n));
	printf("*p��%u�o�C�g�ł��B\n", (unsigned)sizeof(*p));
	printf(" p��%u�o�C�g�ł��B\n", (unsigned)sizeof(p));
	printf("&n��%u�o�C�g�ł��B\n", (unsigned)sizeof(&n));

	return 0;
}
