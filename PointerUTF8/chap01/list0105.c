/* register記憶域クラス指定子付きで宣言されたオブジェクトのアドレス */

#include <stdio.h>

int main(void)
{
	register int n;

	printf("&nの値は%pです。\n", &n);		/* エラー */

	return 0;
}
