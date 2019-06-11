/*
	0～9の中の一つを飛ばして配列に代入（その２）
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int x;
	int a[10];
	int n = sizeof(a) / sizeof(a[0]);

	do {
		printf("0～%dの中の一つを飛ばします。何を飛ばしますか：", n - 1);
		scanf("%d", &x);
	} while (x < 0 || x > n - 1);

	for (i = 0, j = 0; i < n; i++)
		if (i != x)
			a[j++] = i;

	for (i = 0; i < n - 1; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
