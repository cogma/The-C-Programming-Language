/* 実数値のペアを昇順に読み込む */

#include <stdio.h>

/*--- *n1≦*n2となるように実数値を読み込む ---*/
void scan2double(double *x1, double *x2)
{
	printf("１番目：");
	scanf("%lf", x1);

	do {
		printf("２番目：");
		scanf("%lf", x2);
	} while (*x2 < *x1);
}

int main(void)
{
	double a, b, c, d;

	puts("ＡとＢを昇順に入力せよ。");
	scan2double(&a, &b);		/* a≦bとなるように読み込む */

	puts("ＣとＤを昇順に入力せよ。");
	scan2double(&c, &d);		/* c≦dとなるように読み込む */

	printf("ＡとＢの差は%fです。\n", b - a);
	printf("ＣとＤの差は%fです。\n", d - c);

	return 0;
}
