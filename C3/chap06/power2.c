/*
	�R��l�����߂�i�Â��X�^�C���j
*/

#include <stdio.h>

extern double pow();

int main(void)
{
	double x;

	printf("�����l����͂���F");
	scanf("%lf", &x);

	printf("���̐��̂R���%.3f�ł��B\n", pow(x, 3.0));

	return 0;
}