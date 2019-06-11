/*
	関数形式マクロmax2を利用するプログラム
*/

#include <stdio.h>
#include "max2X2.h"

int main(void)
{
	int x, y;

	printf("xの値は：");   scanf("%d", &x);
	printf("yの値は：");   scanf("%d", &y);

	printf("max2(x, y) = %d\n", max2(x, y));

	return 0;
}
