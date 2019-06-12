/* ポインタ値を交換する関数（誤り）*/

#include <stdio.h>

/*--- 二つのポインタを交換（誤り） ---*/
void swap(char *x, char *y)
{
	char *temp = x;
	x = y;
	y = temp;
}

int main(void)
{
	char *s1 = "ABC";
	char *s2 = "DEF";

	printf("文字列s1は\"%s\"です。\n", s1);
	printf("文字列s2は\"%s\"です。\n", s2);

	swap(s1, s2);

	puts("ポインタs1とs2を交換しました。");

	printf("文字列s1は\"%s\"です。\n", s1);
	printf("文字列s2は\"%s\"です。\n", s2);

	return 0;
}
