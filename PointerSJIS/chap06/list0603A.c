/* �\���̂̃����o�ւ̃|�C���^��void *�ɃL���X�g������Ŕ�r */

#include <stdio.h>

int main(void)
{
	struct ab {
		struct xy {
			int    x;
			double y;
		} a;
		int b;
	} z;

	printf("&z.a   <= &z.b   = %d\n", (void *)&z.a   <= (void *)&z.b);
	printf("&z.a.x <= &z.a.y = %d\n", (void *)&z.a.x <= (void *)&z.a.y);

	return 0;
}
