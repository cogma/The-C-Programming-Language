/* 構造体のメンバの配置を表示 */

#include <stdio.h>
#include <stddef.h>

int main(void)
{
	struct abc {
		char a;
		int  b;
		long c;
	} x;

	printf("a：%u～%u\n", (unsigned)offsetof(struct abc, a),
						  (unsigned)(offsetof(struct abc, a) + sizeof(x.a) - 1));

	printf("b：%u～%u\n", (unsigned)offsetof(struct abc, b),
						  (unsigned)(offsetof(struct abc, b) + sizeof(x.b) - 1));

	printf("c：%u～%u\n", (unsigned)offsetof(struct abc, c),
						  (unsigned)(offsetof(struct abc, c) + sizeof(x.c) - 1));
	return 0;
}
