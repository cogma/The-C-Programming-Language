/* K7-1 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = calloc(1, sizeof(int));		/* int^®pÌL¯æð®IÉmÛ */

	if (p == NULL)
		puts("L¯æÌmÛÉ¸sµÜµ½B");
	else {
		printf("*p = %d\n", *p);
	}

	return 0;
}
