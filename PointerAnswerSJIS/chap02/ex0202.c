/* ���K2-2�̉𓚗� */

#include <stdio.h>

/*--- �v�f��n�̔z��b�̑S�v�f��z��a�ɃR�s�[ ---*/
void ary_cpy(int a[], const int b[], int no)
{
	while (no-- > 0)
		*a++ = *b++;
}

int main(void)
{
	int i, no;
	int x[5], y[5];
	int x_size = sizeof(x) / sizeof(x[0]);

	for (i = 0; i < x_size; i++) {
		printf("x[%d]�F", i);
		scanf("%d", &x[i]);
	}

	ary_cpy(y, x, x_size);

	printf("�z��x�̑S�v�f��z��y�ɃR�s�[���܂����B\n");
	for (i = 0; i < x_size; i++)
		printf("y[%d]��%d\n", i, y[i]);

	return 0;
}
