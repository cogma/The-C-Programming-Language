/*
	�֐��`���}�N��max2�𗘗p����v���O����
*/

#include <stdio.h>
#include "max2X2.h"

int main(void)
{
	int x, y;

	printf("x�̒l�́F");   scanf("%d", &x);
	printf("y�̒l�́F");   scanf("%d", &y);

	printf("max2(x, y) = %d\n", max2(x, y));

	return 0;
}
