/*
	#if指令によるプログラムのコメントアウト
*/

#include <stdio.h>

#define DEBUG  0

int main(void)
{
	int a = 5;
	int x = 1;

#if DEBUG == 1
	a = x;				/* aにxを代入 */
#endif

	printf("aの値は%dです。\n", a);

	return 0;
}
