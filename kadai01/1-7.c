#include <stdio.h>

int main(void)
{
	int x, s;

	scanf("%d", &x);

	do {
		s = x % 10;
		x = x / 10;
	} while (s == 0);

	x = 10 * x;

	while (x > 0) {
		printf("%d", s);
		x = x / 10;
		s = x % 10;
	}

	printf("\n");

	return 0;
}