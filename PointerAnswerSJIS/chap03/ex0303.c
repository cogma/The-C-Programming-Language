/* ���K3-3�̉𓚗� */

#include <stdio.h>

/*--- n�~2�~4�̔z��̑S�\���v�f��v���� ---*/
void fill_avalue(int a[][2][4], int n, int v)
{
	int i, j, k;

	for (i = 0; i < n; i++)
		for (j = 0; j < 2; j++)
			for (k = 0; k < 4; k++)
				a[i][j][k] = v;
}

int main(void)
{
	int i, j, k, no;
	int mx[3][2][4];

	printf("�S�\���v�f�ɑ������l�F");
	scanf("%d", &no);

	fill_avalue(mx, 3, no);		/* mx�̑S�\���v�f��no���� */

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			for (k = 0; k < 4; k++)
				printf("mx[%d][%d][%d] = %3d\n", i, j, k, mx[i][j][k]);

	return 0;
}
