/* K1-1Μπα */

#include <stdio.h>

int main(void)
{
	int n  = 100;
	int *p = &n;

	printf("@nΜl%d\n", n);		/* @nΝint^ */
	printf("*&nΜl%d\n", *&n);	/* *&nΝint^ */
	printf("@pΜl%p\n", p);		/* @pΝint *^ */
	printf("&*pΜl%p\n", &*p);	/* &*pΝint *^ */

	printf("sizeof(n)@%u\n", (unsigned)sizeof(n));
	printf("sizeof(*&n)%u\n", (unsigned)sizeof(*&n));
	printf("sizeof(p)@%u\n", (unsigned)sizeof(p));
	printf("sizeof(&*p)%u\n", (unsigned)sizeof(&*p));

	return 0;
}
