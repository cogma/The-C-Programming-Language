/*
	初期化子の与えられていない自動記憶域期間をもつオブジェクトが
	不定値すなわちゴミの値で初期化されることを確認
*/

#include <stdio.h>

int main(void)
{
	int x;						/* 不定値で初期化される */

	printf("x = %d\n", x);

	return 0;
}
