/*
	スタックオーバフローについて考察するためのプログラム例
*/

int z[8000];			/* 静的記憶域期間 */

void func(void)
{
	int x[8000];		/* 自動記憶域期間 */
}

int main(void)
{
	int a[8000];		/* 自動記憶域期間 */

	func();

	return 0;
}
