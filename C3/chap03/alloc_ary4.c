/*
	�S�����z��𓮓I�ɐ���
*/

#include <stdio.h>
#include  <stdlib.h>

int main(void)
{
	int (*x)[5][4][3];
	int n;				/* �ł����������̗v�f�� */

	puts("n�~5�~4�~3�̔z����m�ۂ��܂��B");
	printf("n�̒l�́F");
	scanf("%d", &n);

	x = calloc(n * 5 * 4 * 3, sizeof(int));		/* �m�� */

	if (x == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		int i, j, k, m;

		for (i = 0; i < n; i++)
			for (j = 0; j < 5; j++)
				for (k = 0; k < 4; k++)
					for (m = 0; m < 3; m++)
						printf("x[%d][%d][%d][%d] = %d\n", i, j, k, m, x[i][j][k][m]);
		free(x);							/* ��� */
	}

	return 0;
}
