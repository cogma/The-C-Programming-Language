/* ���K1-3�̉𓚗� */

#include <stdio.h>

int main(void)
{
	int x = 123,  y = 456;
	int *p1 = &x;
	int *p2 = &y;
	int *temp;

	temp = p1;
	p1 = p2;
	p2 = temp;

	printf("*p1�̒l��%d\n", *p1);		/* p1���w��y�̒l��\�� */
	printf("*p2�̒l��%d\n", *p2);		/* p2���w��x�̒l��\�� */

	return 0;
}
