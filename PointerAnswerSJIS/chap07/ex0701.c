/* ���K7-1 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = calloc(1, sizeof(int));		/* int�^�����p�̋L����𓮓I�Ɋm�� */

	if (p == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		printf("*p = %d\n", *p);
	}

	return 0;
}
