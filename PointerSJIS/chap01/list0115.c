/* �����l�̃y�A�������ɓǂݍ��� */

#include <stdio.h>

/*--- *n1��*n2�ƂȂ�悤�Ɏ����l��ǂݍ��� ---*/
void scan2double(double *x1, double *x2)
{
	printf("�P�ԖځF");
	scanf("%lf", x1);

	do {
		printf("�Q�ԖځF");
		scanf("%lf", x2);
	} while (*x2 < *x1);
}

int main(void)
{
	double a, b, c, d;

	puts("�`�Ƃa�������ɓ��͂���B");
	scan2double(&a, &b);		/* a��b�ƂȂ�悤�ɓǂݍ��� */

	puts("�b�Ƃc�������ɓ��͂���B");
	scan2double(&c, &d);		/* c��d�ƂȂ�悤�ɓǂݍ��� */

	printf("�`�Ƃa�̍���%f�ł��B\n", b - a);
	printf("�b�Ƃc�̍���%f�ł��B\n", d - c);

	return 0;
}
