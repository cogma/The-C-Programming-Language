/*
	関数形式マクロmax2を利用するプログラム（見えにくいエラーが潜む）
*/

#include <stdio.h>
#include "max2X1.h"

int main(void)
{
　　int x, y;

	printf("xの値は：");   scanf("%d", &x);
	printf("yの値は：");   scanf("%d", &y);

	printf("max2(x, y) = %d\n", max2(x, y));

	return 0;
}
