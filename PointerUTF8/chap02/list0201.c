/* 配列の全要素に添字と同じ値を代入して表示 */

#include <stdio.h>

int main(void)
{
	int i;
	int a[5];

	for (i = 0; i < 5; i++)
		a[i] = i;

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
