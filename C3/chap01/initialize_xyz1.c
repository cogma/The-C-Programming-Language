/*
	変数の有効範囲と初期化
*/

#include <stdio.h>

int z = 1;

int main(void)
{
	int x = z;
	int z = 0;
	int y = z;

	return 0;
}
