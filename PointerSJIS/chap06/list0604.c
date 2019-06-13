/* 構造体のメンバに値を読み込む（その１）*/

#include <stdio.h>

typedef struct {
	int    x;
	long   y;
	double z;
} XYZ;

int main(void)
{
	XYZ a;

	printf("a.x : ");   scanf("%d",  &a.x);
	printf("a.y : ");   scanf("%ld", &a.y);
	printf("a.z : ");   scanf("%lf", &a.z);

	printf("a.x = %d\n",   a.x);
	printf("a.y = %ld\n",  a.y);
	printf("a.z = %.2f\n", a.z);

	return 0;
}
