/* �ėp�Q���T���֐��ibsearch�֐����g���j*/

#include <stdlib.h>

/*--- base���w���v�f�̑傫����size�ŗv�f����nmemb�̔z�񂩂�key�ƈ�v����v�f��
	  ��r�֐�compar��p���ĂQ���T��
	  �� key�Ɠ������v�f���������݂���ꍇ�͍ł��擪�̗v�f��T�� ---*/
void *binsearchx(const void *key, const void *base, size_t nmemb, size_t size,
				 int (*compar)(const void *, const void *))
{
	if (nmemb > 0) {
		size_t pl = 0;							/* �T���͈͐擪�̓Y�� */
		size_t pr = nmemb - 1;					/* �T���͈͖����̓Y�� */
		size_t pc;								/* �T���͈͒����̓Y�� */
		char   *x = (char *)base;

		while (1) {
			int comp = compar(key, (const void *)&x[(pc = (pl+pr)/2) * size]);

			if (comp == 0) { 				/* �T������ */
				for ( ; pc > pl; pc--)		/* key�Ɠ������擪�̗v�f��T�� */
					if (compar((const void *)&x[(pc - 1) * size], key))
						break;
				return &x[pc * size];
			} else if (pl == pr)				/* �T���͈͂��Ȃ��Ȃ��� */
				break;			
			else if (comp > 0)
				pl = pc + 1;					/* �T���͈͂��㔼�ɍi�荞�� */
			else
				pr = pc - 1;					/* �T���͈͂�O���ɍi�荞�� */
		}
	}
	return NULL;								/* �T�����s */
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

	p = binsearchx(&no, x, nx, sizeof(int),
							(int (*)(const void *, const void *))int_cmp);

	if (p != NULL)
		printf("x[%d]����v���܂��B\n", (int)(p - x));
	else
		puts("������܂���ł����B");

	return 0;
}
