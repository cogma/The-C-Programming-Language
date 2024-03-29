/* |C^ÌzñÌónµ */

#include <stdio.h>

/*--- |C^ÌzñÌlð\¦ ---*/
void print(const int *x[], int no)
{
	int i;

	for (i = 0; i < no; i++)
		printf("x[%d]%p  *x[%d]%d\n", i, x[i], i, *x[i]);
}

int main(void)
{
	int a = 5, b = 3, c = 7;
	int *p[3];

	p[0] = &a;			/* p[0]Íaðw· */
	p[1] = &b;			/* p[1]Íbðw· */
	p[2] = &c;			/* p[2]Ícðw· */

	printf("&a%p  a%d\n", &a, a);
	printf("&b%p  b%d\n", &b, b);
	printf("&c%p  c%d\n", &c, c);

	print(p, 3);

	return 0;
}
