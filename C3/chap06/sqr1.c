/*
	�Q��l�����߂�i�֐�sqr��擪���ɔz�u�j
*/

#include <stdio.h>

/*--- �Q��l�����߂� ---*/
double sqr(double x)
{
	return x * x;
}

int main(void)
{
	double x;

	printf("�����l����͂���F");
	scanf("%lf", &x);

	printf("���̐��̂Q���%.3f�ł��B\n", sqr(x));

	return 0;
}
