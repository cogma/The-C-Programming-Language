/*
	register宣言されたオブジェクトのアドレスは取得できないことを確認
*/

#include <stdio.h>

int main(void)
{
	register int x;

	printf("xのアドレス = %p\n", &x);	/* エラー */

	return 0;
}
