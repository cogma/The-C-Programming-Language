/* qsort�֐��𗘗p���Đ����z��̗v�f��l�̏����Ƀ\�[�g */

#include <stdio.h>
#include <stdlib.h>

/*--- int�^�̔�r�֐��i�����\�[�g�p�j---*/
int int_cmp(const int *a, const int *b)
{
	return *a < *b ? -1 : *a > *b ? 1 : 0;
}

int main(void)
{
	int i;
	int x[8];
	int nx = sizeof(x) / sizeof(x[0]);

	printf("%d�̐�������͂���B\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	qsort(x, nx, sizeof(int), (int (*)(const void *, const void *))int_cmp);

	puts("�����Ƀ\�[�g���܂����B");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
