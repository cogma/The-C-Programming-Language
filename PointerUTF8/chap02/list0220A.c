/* ポインタの配列の受渡し */

#include <stdio.h>

/*--- ポインタの配列の値を表示 ---*/
void print(const int *x[], int no)
{
	int i;

	for (i = 0; i < no; i++)
		printf("x[%d]＝%p  *x[%d]＝%d\n", i, x[i], i, *x[i]);
}

int main(void)
{
	int a = 5, b = 3, c = 7;
	int *p[3] = {&a, &b, &c};

	printf("&a＝%p  a＝%d\n", &a, a);
	printf("&b＝%p  b＝%d\n", &b, b);
	printf("&c＝%p  c＝%d\n", &c, c);

	print(p, 3);

	return 0;
}
