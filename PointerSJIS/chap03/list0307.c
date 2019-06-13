/* �P�����z����󂯎��֐��ɂQ�����z���n�� */

#include <stdio.h>

/*--- �v�f��n�̔z��a�̑S�v�f�̒l��\�� ---*/
int print_array(const int a[], int n)
{
	int i;

	printf("{");
	if (n >= 2)
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
	if (n >= 1)
		printf("%d", a[n - 1]);
	printf("}");
}

/*--- �v�f��n�̔z��a�̑S�v�f�̍��v�����߂� ---*/
int sum(const int a[], int n)
{
	int i;
	int sum = 0;	/* ���v */

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int main(void)
{
	int i, j;
	int x[] = {1, 3, 5, 7};				/* �v�f��4�̂P�����z�� */
	int y[][5] = { {1, 2, 3, 4, 5},		/* 3�s5��̂Q�����z�� */
				   {1, 1, 1, 1, 1},
				   {1, 3, 5, 7, 9},
				 };
	int x_size = sizeof(x) / sizeof(x[0]);			/* x�̗v�f�� */
	int y_height = sizeof(y) / sizeof(y[0]);		/* y�̍s�� */
	int y_width  = sizeof(y[0]) / sizeof(y[0][0]);	/* y�̗� */

	printf("�z��x�c");
	print_array(x, x_size);
	printf(" ���v��%d\n", sum(x, x_size));

	for (i = 0; i < y_height; i++) {
		printf("�z��y[%d]�c", i);
		print_array(y[i], y_width);
		printf(" ���v��%d\n", sum(y[i], y_width));
	}

	return 0;
}
