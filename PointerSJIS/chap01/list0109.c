/* �|�C���^�𐮐��l�ɕϊ����ĕ\�� */

#include <stdio.h>

int main(void)
{
	int n;			/* n��int�^ */
	int *p = &n;	/* p��int *�^ */

	/* n�ւ̃|�C���^�𕄍����������l�ɕϊ����ĕ\�� */
	printf("&n�F%lu\n", (unsigned long)&n);
	printf(" p�F%lu\n", (unsigned long)p);

	return 0;
}
