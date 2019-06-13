/* �ėp�N�C�b�N�\�[�g�iqsort�֐��ɏ������d�l�j*/

#include <stdlib.h>

/*--- x, y�̎w��n�o�C�g�̗̈������ ---*/
static void memswap(void *x, void *y, size_t n)
{
	unsigned char *a = (unsigned char *)x;
	unsigned char *b = (unsigned char *)y;

	for ( ; n--; a++, b++) {
		unsigned char c = *a;
		*a = *b;
		*b = c;
	}
}

/*--- �ėp�N�C�b�N�\�[�g�iqsort�֐��ɏ������d�l�j---*/
void quicksort(void *base, size_t nmemb, size_t size,
			   int (*compar)(const void *, const void *))
{
	if (nmemb > 0) {
		size_t pl = 0;					/* ���J�[�\�� */
		size_t pr = nmemb - 1;			/* �E�J�[�\�� */
		size_t pv = nmemb;				/* ���� */
		size_t pt = (pl + pr) / 2;		/* �����̍X�V�l */
		char *v = (char *)base;			/* �擪�v�f�ւ̃|�C���^ */
		char *x;						/* �����ւ̃|�C���^ */

		do {
			if (pv != pt) x = &v[(pv = pt) * size];
			while (compar((const void *)&v[pl * size], x) < 0) pl++;
			while (compar((const void *)&v[pr * size], x) > 0) pr--;
			if (pl <= pr) {
				pt = (pl == pv) ? pr : (pr == pv) ? pl : pv;
				memswap(&v[pl * size], &v[pr * size], size);
				pl++;
				if (pr == 0)	/* ������������0����̃f�N�������g������� */
					goto QuickRight;
				pr--;
			}
		} while (pl <= pr);

		if (0  < pr)      quicksort(&v[0],         pr + 1,     size, compar);
	QuickRight:
		if (pl < nmemb-1) quicksort(&v[pl * size], nmemb - pl, size, compar);
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

	quicksort(x, nx, sizeof(int), (int (*)(const void *, const void *))int_cmp);

	puts("�����Ƀ\�[�g���܂����B");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
