/*
	�����z��𓮓I�ɐ���
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x;
	int i, nx;

	printf("��������z��̗v�f���F");
	scanf("%d", &nx);

	x = calloc(nx, sizeof(int));					/* �m�� */

	if (x == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		for (i = 0; i < nx; i++)					/* �l���� */
			x[i] = i;

		for (i = 0; i < nx; i++)					/* �l��\�� */
			printf("x[%d] = %d\n", i, x[i]);

		free(x);									/* ��� */
	}

	return 0;
}
