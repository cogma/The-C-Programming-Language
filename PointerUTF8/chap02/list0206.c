/* ポインタの比較（等価演算子と関係演算子）と減算（２項-演算子）*/

#include <stdio.h>

int main(void)
{
	int x[5];
	int *p1 = x;		/* p1はx[0]を指す */
	int *p2 = &x[2];	/* p2はx[2]を指す */

	printf("p1    ==  x    : %d\n", p1    ==  x   );
	printf("p2    == &x[1] : %d\n", p2    == &x[1]);
	printf("&x[2] != &x[3] : %d\n", &x[2] != &x[3]);
	printf("&x[1] <  &x[2] : %d\n", &x[1] <  &x[2]);
	printf("&x[2] <= &x[1] : %d\n", &x[2] <= &x[1]);

	printf(" x    -  &x[1] : %d\n", (int)( x    - &x[1]));
	printf("&x[2] -  &x[0] : %d\n", (int)(&x[2] - &x[0]));
	printf("&x[4] -  p2    : %d\n", (int)(&x[4] - p2));

	return 0;
}
