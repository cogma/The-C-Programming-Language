/* |C^Ìzñ */

#include <stdio.h>

int main(void)
{
	int i, a = 5, b = 3, c = 7;
	int *p[3];

	p[0] = &a;			/* p[0]Íaðw· */
	p[1] = &b;			/* p[1]Íbðw· */
	p[2] = &c;			/* p[2]Ícðw· */

	printf("&a%p  a%d\n", &a, a);
	printf("&b%p  b%d\n", &b, b);
	printf("&c%p  c%d\n", &c, c);

	for (i = 0; i < 3; i++)
		printf("p[%d]%p  *p[%d]%d\n", i, p[i], i, *p[i]);

	return 0;
}
