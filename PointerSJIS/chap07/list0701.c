/* int^®pÌL¯æð®IÉmÛ */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = calloc(1, sizeof(int));		/* int^®pÌL¯æð®IÉmÛ */

	if (p == NULL)
		puts("L¯æÌmÛÉ¸sµÜµ½B");
	else {
		*p = 15;
		printf("*p = %d\n", *p);
	}

	return 0;
}
