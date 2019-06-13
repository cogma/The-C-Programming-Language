/* �ėp���`�T���֐� */

#include <stdlib.h>

/*--- base���w���v�f�̑傫����size�ŗv�f����nmemb�̔z�񂩂�key�ƈ�v����v�f��
	  ��r�֐�compar��p���Đ��`�T�� ---*/
void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size,
				int (*compar)(const void *, const void *))
{
	size_t i;
	char   *x = (char *)base;

	for (i = 0; i < nmemb; i++)
		if (!compar(key, (const void *)&x[i * size]))
			return &x[i * size];		/* �T������ */
	return NULL;						/* �T�����s */
}

#include <stdio.h>

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

	printf("%d�̐�������͂���B\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("�T������l�F");
	scanf("%d", &no);

	p = seqsearch(&no, x, nx, sizeof(int), (int (*)(const void *, const void*))int_cmp);

	if (p != NULL)
		printf("x[%d]����v���܂��B\n", (int)(p - x));
	else
		puts("������܂���ł����B");

	return 0;
}