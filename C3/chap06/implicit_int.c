/*
	Œ^‚ª—^‚¦‚ç‚ê‚¸‚ÉéŒ¾‚³‚ê‚½‚à‚Ì‚ªintŒ^‚É‚È‚é‚±‚Æ‚ğŠm”F
*/

#include <stdio.h>

func(a, b)
{
	struct {
		x;
		y;
	} z;

	z.x = a;
	z.y = b;

	printf("z.x = %d\n", z.x);
	printf("z.y = %d\n", z.y);

	return z.x + z.y;
}

int main(void)
{
	int a = 1;
	int b = 2;

	printf("func(a, b) = %d\n", func(a, b));

	return 0;
}
