/*
	�Q�����z��̊e�s�̍��v�����߂ĕ\��
*/

#include <stdio.h>

/*--- �Q�����z��v�̊e�s�̍��v�����߂ĕ\�� ---*/
void sum(int v[][3], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		int sum = 0;

		for (j = 0; j < 3; j++)
			sum += v[i][j];
		printf("%d�s�̍��v��%d\n", i, sum);
	}
}

int main(void)
{
	int goukei;							/* ���v */
	int a[][3] = {{11, 12, 13},
				  {14, 15, 16},
				  {17, 18, 19},
				  {20, 21, 22},
				 };

	int na = sizeof(a) / sizeof(a[0]);	/* �z��a�̗v�f���i�s���j*/

	sum(a, na);

	return 0;
}
