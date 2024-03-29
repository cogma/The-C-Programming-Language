/* 演習2-3の解答例 */

#include <stdio.h>

#define swap(type, x, y)	do { type temp = x; x = y; y = temp; } while (0)

/*--- *x[0]≦*x[1]≦*x[2]となるようにソート ---*/
void sort_ptr3ary(int *x[])
{
	if (*x[0] > *x[1]) swap(int *, x[0], x[1]);
	if (*x[1] > *x[2]) swap(int *, x[1], x[2]);
	if (*x[0] > *x[1]) swap(int *, x[0], x[1]);
}

int main(void)
{
	int n1, n2, n3;
	int *p[3] = {&n1, &n2, &n3};

	printf("整数n1：");   scanf("%d", &n1);
	printf("整数n2：");   scanf("%d", &n2);
	printf("整数n3：");   scanf("%d", &n3);

	sort_ptr3ary(p);

	printf("ソートしました。\n");
	printf("*p[0]の値＝%d\n", *p[0]);		/* *p[0]の値を表示 */
	printf("*p[1]の値＝%d\n", *p[1]);		/* *p[1]の値を表示 */
	printf("*p[2]の値＝%d\n", *p[2]);		/* *p[2]の値を表示 */

	return 0;
}
