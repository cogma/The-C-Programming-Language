/* �|�C���^�̔�r�i�������Z�q�Ɗ֌W���Z�q�j�ƌ��Z�i�Q��-���Z�q�j*/

#include <stdio.h>

int main(void)
{
	int x[5];
	int *p1 = x;		/* p1��x[0]���w�� */
	int *p2 = &x[2];	/* p2��x[2]���w�� */

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
