/*
	�R��l�����߂�i�Â��X�^�C���F���҂ǂ���ɓ��삵�Ȃ��j
*/

#include <stdio.h>

extern double pow();

int main(void)
{
	double x;

	printf("�����l����͂���F");
	scanf("%lf", &x);

	printf("���̐��̂R���%.3f�ł��B\n", pow(x, 3));

	return 0;
}
