/* �Q�����z��̑S�\���v�f�ɔC�ӂ̓���l���� */

#include <stdio.h>

/*--- n1�sn2��̂Q�����z��a�̑S�\���v�f��v���� ---*/
void fill(int *a, int n1, int n2, int v)
{
	int i, j;

	for (i = 0; i < n1; i++)
		for (j = 0; j < n2; j++)
			a[i * n2 + j] = v;
}

int main(void)
{
	int i, j, no;
	int x[3][2];	/* 3�s2�� */
	int y[4][3];	/* 4�s3�� */

	printf("�S�\���v�f�ɑ������l�F");
	scanf("%d", &no);

	fill(&x[0][0], 3, 2, no);	/* 3�s2��̔z��x�̑S�\���v�f��no���� */
	fill(&y[0][0], 4, 3, no);	/* 4�s3��̔z��y�̑S�\���v�f��no���� */

	puts("--- x ---");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
			printf("%3d", x[i][j]);
		putchar('\n');
	}

	puts("--- y ---");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%3d", y[i][j]);
		putchar('\n');
	}

	return 0;
}
