/*
	0.0から1.0まで0.01単位で繰り返す[改]
*/

#include <stdio.h>

int main(void)
{
	float x;

	for (x = 0.0; x != 1.0; x += 0.01)
		printf("x = %f\n", x);

	return 0;
}
