/* ���K1-5�̉𓚗� */

#include <stdio.h>

/*--- x��y�̘a��*wa�ɍ���*sa�Ɋi�[ ---*/
void sum_diff(int x, int y, int *wa, int *sa)
{
	*wa = x + y;						/* �a */
	*sa = (x > y) ? x - y : y - x;		/* �� */
}

int main(void)
{
	int n1, n2;
	int sum, diff;		/* �a�ƍ� */ 

	printf("����n1�F");   scanf("%d", &n1);
	printf("����n2�F");   scanf("%d", &n2);

	sum_diff(n1, n2, &sum, &diff);

	printf("n1��n2�̘a��%d\n", sum);		/* sum�̒l��\�� */
	printf("n1��n2�̍���%d\n", diff);		/* diff�̒l��\�� */

	return 0;
}
