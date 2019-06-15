/* 演習1-6の解答例 */

#include <stdio.h>

/*--- *xと*yの値を交換 ---*/
void swapd(double *x, double *y)
{
	double temp = *x;
	*x = *y;
	*y = temp;
}

/*--- *x1≦*x2≦*x3となるようにソート ---*/
void sort3d(double *x1, double *x2, double *x3)
{
	if (*x1 > *x2) swapd(x1, x2);
	if (*x2 > *x3) swapd(x2, x3);
	if (*x1 > *x2) swapd(x1, x2);
}

int main(void)
{
	double d1, d2, d3;

	printf("実数d1：");   scanf("%lf", &d1);
	printf("実数d2：");   scanf("%lf", &d2);
	printf("実数d3：");   scanf("%lf", &d3);

	sort3d(&d1, &d2, &d3);

	printf("d1≦d2≦d3となるようにソートしました。\n");
	printf("d1の値＝%.3f\n", d1);			/* d1の値を表示 */
	printf("d2の値＝%.3f\n", d2);			/* d2の値を表示 */
	printf("d3の値＝%.3f\n", d3);			/* d3の値を表示 */

	return 0;
}
