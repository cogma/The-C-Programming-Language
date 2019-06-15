/* ���K6-2�̉𓚗� */

#include <stdio.h>

struct xyz{
	int    x;
	long   y;
	double z;
};

/*--- �����ox�̏����ƂȂ�悤��a,b����ׂ����� ---*/
void sortXYZ(struct xyz *a, struct xyz *b)
{
	if (a->x > b->x) {
		struct xyz temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main(void)
{
	struct xyz a, b;

	printf("a.x : ");   scanf("%d",  &a.x);
	printf("a.y : ");   scanf("%ld", &a.y);
	printf("a.z : ");   scanf("%lf", &a.z);

	printf("b.x : ");   scanf("%d",  &b.x);
	printf("b.y : ");   scanf("%ld", &b.y);
	printf("b.z : ");   scanf("%lf", &b.z);

	sortXYZ(&a, &b);

	printf("a.x��b.x�ƂȂ�悤��a��b���\�[�g���܂����B\n");

	printf("a.x = %d\n",   a.x);
	printf("a.y = %ld\n",  a.y);
	printf("a.z = %.2f\n", a.z);

	printf("b.x = %d\n",   b.x);
	printf("b.y = %ld\n",  b.y);
	printf("b.z = %.2f\n", b.z);

	return 0;
}
