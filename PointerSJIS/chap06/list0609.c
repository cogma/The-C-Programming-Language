/* �\���̂̃����o�̔z�u��\�� */

#include <stdio.h>
#include <stddef.h>

int main(void)
{
	struct abc {
		char a;
		int  b;
		long c;
	} x;

	printf("a�F%u�`%u\n", (unsigned)offsetof(struct abc, a),
						  (unsigned)(offsetof(struct abc, a) + sizeof(x.a) - 1));

	printf("b�F%u�`%u\n", (unsigned)offsetof(struct abc, b),
						  (unsigned)(offsetof(struct abc, b) + sizeof(x.b) - 1));

	printf("c�F%u�`%u\n", (unsigned)offsetof(struct abc, c),
						  (unsigned)(offsetof(struct abc, c) + sizeof(x.c) - 1));
	return 0;
}
