/*
	���I�ɐ������������ɒl��ǂݍ��ށi�ԈႢ�j
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x;

	x = calloc(1, sizeof(int));							/* �m�� */

	if (x == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		printf("�����l����͂��Ă��������F");
		scanf("%d", &x);								/* ���������H */
		printf("���Ȃ���%d�Ɠ��͂��܂����ˁB\n", *x);
		free(x);										/* ��� */
	}

	return 0;
}
