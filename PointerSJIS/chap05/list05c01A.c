/* ³‚µ‚¢‰Šú‰»q */

#include <stdio.h>

int main(void)
{
	int  i;
	char *p[] = {"W140",
				 "S",
				 "500",
				 "V8",
				 };
	int  np = sizeof(p) / sizeof(p[0]);

	for (i = 0; i < np; i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);

	return 0;
}
