#define swap(type, x, y)	do { type t = x; x = y; y = t; } while (0)

/*--- int�^�z��̃N�C�b�N�\�[�g ---*/
void quick(int v[], int n)
{
	if (n > 0) {
		int pl = 0;					/* ���J�[�\�� */
		int pr = n - 1;				/* �E�J�[�\�� */
		int x = v[(pl + pr) / 2];	/* �����͒����̗v�f */

		do {
			while (v[pl] < x) pl++;
			while (v[pr] > x) pr--;
			if (pl <= pr) {
				swap(int, v[pl], v[pr]);
				pl++;
				pr--;
			}
		} while (pl <= pr);
		if (0  < pr)    quick(v, pr + 1);		/* ���O���[�v�𕪊� */
		if (pl < n - 1) quick(v + pl, n - pl);	/* �E�O���[�v�𕪊� */
	}
}


#include <stdio.h>

/*--- int�^�̔�r�֐��i�����\�[�g�p�j ---*/
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

	quick(x, nx);

	puts("�����Ƀ\�[�g���܂����B");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
