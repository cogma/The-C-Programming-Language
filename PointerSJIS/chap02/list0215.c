/* �z��̑S�v�f��0�����i��Q�Łj*/

#include <stdio.h>

/*--- �z��p�̐擪n�̗v�f��0�����i��Q�Łj---*/
void fill_zero(int *p, int n)
{
	while (n-- > 0) {
		*p = 0;			/* ���ڗv�f��0���� */
		p++;			/* ���̗v�f�ɒ��� */
	}
}

int main(void)
{
	int i;
	int x[5] = {1, 2, 3, 4, 5};
	int x_size = sizeof(x) / sizeof(x[0]);		/* �z��x�̗v�f�� */

	fill_zero(x, x_size);

	for (i = 0; i < x_size; i++)
		printf("x[%d] = %d\n", i, x[i]);		/* x[i]�̒l��\�� */

	return 0;
}