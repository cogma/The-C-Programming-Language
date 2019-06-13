/* 二つの整数値を昇順にソート */

#include <stdio.h>

/*--- *xと*yの値を交換 ---*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/*--- *n1≦*n2となるようにソート ---*/
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);	/* *n1の値と*n2の値を交換 */
}

int main(void)
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数Ａ：");   scanf("%d", &a);
	printf("整数Ｂ：");   scanf("%d", &b);

	sort2(&a, &b);		/* a≦bとなるようにソート */

	puts("昇順にソートしました。");
	printf("Ａの値は%dです。\n", a);
	printf("Ｂの値は%dです。\n", b);

	return 0;
}
