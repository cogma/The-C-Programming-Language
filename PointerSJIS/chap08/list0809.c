/* bsearch�֐��ɂ�鏸���\�[�g���ݔz�񂩂�̒T�� */

#include <stdio.h>
#include <stdlib.h>

/*--- �������r����֐� ---*/
int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i, no, *p; 
	int x[8];
	int nx = sizeof(x) / sizeof(x[0]);	/* x�̗v�f�� */

	printf("%d�̐����������ɓ��͂���B\n", nx);
	i = 0;
	printf("x[%d] : ", i);
	scanf("%d", &x[i]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}

	printf("�T������l�F");
	scanf("%d", &no);

	p = bsearch(&no, x, nx, sizeof(int),
							(int (*)(const void *, const void *))int_cmp);

	if (p != NULL)
		printf("x[%d]����v���܂��B\n", (int)(p - x));
	else
		puts("������܂���ł����B");

	return 0;
}
