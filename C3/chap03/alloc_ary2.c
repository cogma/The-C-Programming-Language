/*
	�Q�����z��𓮓I�ɐ���
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int (*x)[3];
	int n;			/* �v�f�� */

	puts("n�~3�̂Q�����z����m�ۂ��܂��B");
	printf("n�̒l�́F");
	scanf("%d", &n);

	x = calloc(n * 3, sizeof(int));			/* �m�� */

	if (x == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		int i, j;

		for (i = 0; i < n; i++)
			for (j = 0; j < 3; j++)
				printf("x[%d][%d] = %d\n", i, j, x[i][j]);
		free(x);							/* ��� */
	}

	return 0;
}
