/* qsort�֐��𗘗p���Ď����z��̗v�f��l�̍~���Ƀ\�[�g */

#include <stdio.h>
#include <stdlib.h>

/*--- double�^�̔�r�֐��i�~���\�[�g�p�j ---*/
int double_cmpr(const double *a, const double *b)
{
	return *a < *b ? 1 : *a > *b ? -1 : 0;
}

int main(void)
{
	int i;
	double x[8];
	int nx = sizeof(x) / sizeof(x[0]);

	printf("%d�̎�������͂���B\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%lf", &x[i]);
	}

	qsort(x, nx, sizeof(double), (int (*)(const void *, const void *))double_cmpr);

	puts("�~���Ƀ\�[�g���܂����B");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %.3f\n", i, x[i]);

	return 0;
}
