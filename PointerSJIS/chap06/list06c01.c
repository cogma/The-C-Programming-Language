/* 配列を構造体で包んで値渡し */

#include <stdio.h>

typedef struct {
	int a[5];
} int5ary;

/*--- 受け取った構造体中の配列の全要素に0を格納 ---*/
void func(int5ary x)
{
	int i;

	for (i = 0; i < 5; i++)			/* 全要素に0を代入 */
		x.a[i] = 0;
}

int main(void)
{
	int     i;
	int5ary c;

	for (i = 0; i < 5; i++)			/* 全要素に添字と同じ値を代入 */
		c.a[i] = i;

	func(c);
	puts("全要素に0を代入しました。");		/* 嘘です */

	for (i = 0; i < 5; i++)
		printf("c.a[%d] = %d\n", i, c.a[i]);

	return 0;
}
