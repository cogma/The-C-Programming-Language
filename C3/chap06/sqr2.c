/*
	�Q��l�����߂�i�֐�sqr�𖖔����ɔz�u�F�R���p�C���G���[�j
*/

#include <stdio.h>

int main(void)
{
	double x;

	printf("�����l����͂���F");
	scanf("%lf", &x);

	printf("���̐��̂Q���%.3f�ł��B\n", sqr(x));		/* �x�� */

	return 0;
}

/*--- �Q��l�����߂� ---*/
double sqr(double x)									/* �G���[ */
{
	return x * x;
}
