/* �\���̂̃����o�̃I�t�Z�b�g�l��\�� */

#include <stdio.h>
#include <stddef.h>

int main(void)
{
	struct abc {
		char a;
		int  b;
		long c;
	};

	printf("a�̃I�t�Z�b�g�l��%u\n", (unsigned)offsetof(struct abc, a));
	printf("b�̃I�t�Z�b�g�l��%u\n", (unsigned)offsetof(struct abc, b));
	printf("c�̃I�t�Z�b�g�l��%u\n", (unsigned)offsetof(struct abc, c));

	return 0;
}
