/* 構造体のメンバのオフセット値を表示 */

#include <stdio.h>
#include <stddef.h>

int main(void)
{
	struct abc {
		char a;
		int  b;
		long c;
	};

	printf("aのオフセット値＝%u\n", (unsigned)offsetof(struct abc, a));
	printf("bのオフセット値＝%u\n", (unsigned)offsetof(struct abc, b));
	printf("cのオフセット値＝%u\n", (unsigned)offsetof(struct abc, c));

	return 0;
}
