/*
	不定値である自分自身の値で変数を初期化
*/

#include <stdio.h>

int x = 1;

int main(void)
{
	int x = x;					/* 自分自身の値で初期化 */

	printf("x = %d\n", x);

	return 0;
}
