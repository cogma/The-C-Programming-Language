/*
	•Ï”‚Ì—LŒø”ÍˆÍ‚Æ‰Šú‰»
*/

#include <stdio.h>

int z = 1;

int main(void)
{
	int x = z;
	int z = 0;
	int y = z;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}
