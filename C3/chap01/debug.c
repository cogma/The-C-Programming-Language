/*
	#if�w�߂ɂ��v���O�����̃R�����g�A�E�g
*/

#include <stdio.h>

#define DEBUG  0

int main(void)
{
	int a = 5;
	int x = 1;

#if DEBUG == 1
	a = x;				/* a��x���� */
#endif

	printf("a�̒l��%d�ł��B\n", a);

	return 0;
}
