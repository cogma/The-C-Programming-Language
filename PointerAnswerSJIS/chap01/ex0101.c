/* ���K1-1�̉𓚗� */

#include <stdio.h>

int main(void)
{
	int n  = 100;
	int *p = &n;

	printf("�@n�̒l��%d\n", n);		/* �@n��int�^ */
	printf("*&n�̒l��%d\n", *&n);	/* *&n��int�^ */
	printf("�@p�̒l��%p\n", p);		/* �@p��int *�^ */
	printf("&*p�̒l��%p\n", &*p);	/* &*p��int *�^ */

	printf("sizeof(n)�@��%u\n", (unsigned)sizeof(n));
	printf("sizeof(*&n)��%u\n", (unsigned)sizeof(*&n));
	printf("sizeof(p)�@��%u\n", (unsigned)sizeof(p));
	printf("sizeof(&*p)��%u\n", (unsigned)sizeof(&*p));

	return 0;
}
