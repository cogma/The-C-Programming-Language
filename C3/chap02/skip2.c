/*
	0�`9�̒��̈���΂��Ĕz��ɑ���i���̂Q�j
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int x;
	int a[10];
	int n = sizeof(a) / sizeof(a[0]);

	do {
		printf("0�`%d�̒��̈���΂��܂��B�����΂��܂����F", n - 1);
		scanf("%d", &x);
	} while (x < 0 || x > n - 1);

	for (i = 0, j = 0; i < n; i++)
		if (i != x)
			a[j++] = i;

	for (i = 0; i < n - 1; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
