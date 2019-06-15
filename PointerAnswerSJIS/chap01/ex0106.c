/* ���K1-6�̉𓚗� */

#include <stdio.h>

/*--- *x��*y�̒l������ ---*/
void swapd(double *x, double *y)
{
	double temp = *x;
	*x = *y;
	*y = temp;
}

/*--- *x1��*x2��*x3�ƂȂ�悤�Ƀ\�[�g ---*/
void sort3d(double *x1, double *x2, double *x3)
{
	if (*x1 > *x2) swapd(x1, x2);
	if (*x2 > *x3) swapd(x2, x3);
	if (*x1 > *x2) swapd(x1, x2);
}

int main(void)
{
	double d1, d2, d3;

	printf("����d1�F");   scanf("%lf", &d1);
	printf("����d2�F");   scanf("%lf", &d2);
	printf("����d3�F");   scanf("%lf", &d3);

	sort3d(&d1, &d2, &d3);

	printf("d1��d2��d3�ƂȂ�悤�Ƀ\�[�g���܂����B\n");
	printf("d1�̒l��%.3f\n", d1);			/* d1�̒l��\�� */
	printf("d2�̒l��%.3f\n", d2);			/* d2�̒l��\�� */
	printf("d3�̒l��%.3f\n", d3);			/* d3�̒l��\�� */

	return 0;
}
