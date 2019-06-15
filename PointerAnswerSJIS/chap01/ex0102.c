/* ââèK1-2ÇÃâìöó· */

#include <stdio.h>

int main(void)
{
	int n;
	int *p;

	printf("sizeof*p           = %u\n", (unsigned)sizeof*p);
	printf("sizeof&n           = %u\n", (unsigned)sizeof&n);
	printf("sizeof-1           = %u\n", (unsigned)sizeof-1);
	printf("sizeof(unsigned)-1 = %u\n", (unsigned)sizeof(unsigned)-1);
	printf("sizeof(double)-1   = %u\n", (unsigned)sizeof(double)-1);
	printf("sizeof((double)-1) = %u\n", (unsigned)sizeof((double)-1));
	printf("sizeof n+2         = %u\n", (unsigned)sizeof n+2);
	printf("sizeof(n+2)        = %u\n", (unsigned)sizeof(n+2));
	printf("sizeof(n+2.0)      = %u\n", (unsigned)sizeof(n+2.0));

	return 0;
}
