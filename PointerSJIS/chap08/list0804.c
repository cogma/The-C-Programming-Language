/* ���̉��Z�Ə�Z */

#include <stdio.h>

/*--- x1��x2�̘a�����߂� ---*/
int sum(int x1, int x2)
{
	return x1 + x2;
}

/*--- x1��x2�̐ς����߂� ---*/
int mul(int x1, int x2)
{
	return x1 * x2;
}

/*--- ���̕\���o�� ---*/
void kuku(int calc(int, int))
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++)
			printf("%3d", calc(i, j));
		putchar('\n');
	}
}

int main(void)
{
	puts("���̉��Z�\");	kuku(sum);	/* ���Z�\ */
	putchar('\n');

	puts("���̏�Z�\");	kuku(mul);	/* ��Z�\ */

	return 0;
}
