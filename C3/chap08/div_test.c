/*
	�����l�ǂ����̏��Ə�]��\��
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numer, denom;
	div_t qr;

	printf("�����鐔�F");  scanf("%d", &numer);
	printf("���鐔�F");      scanf("%d", &denom);

	qr = div(numer, denom);

 	printf("����%d�ŏ�]��%d�ł��B\n", qr.quot, qr.rem);

	return 0;
}