/*
	�R��l�����߂�i�֐����^�錾�j
*/

#include <stdio.h>

double pow(double, double);		/* �֐����^�錾 */

int main(void)
{
	double x;

	printf("�����l����͂���F");
	scanf("%lf", &x);

	printf("���̐��̂R���%.3f�ł��B\n", pow(x, 3));

	return 0;
}
