/* �z����\���̂ŕ��Œl�n�� */

#include <stdio.h>

typedef struct {
	int a[5];
} int5ary;

/*--- �󂯎�����\���̒��̔z��̑S�v�f��0���i�[ ---*/
void func(int5ary x)
{
	int i;

	for (i = 0; i < 5; i++)			/* �S�v�f��0���� */
		x.a[i] = 0;
}

int main(void)
{
	int     i;
	int5ary c;

	for (i = 0; i < 5; i++)			/* �S�v�f�ɓY���Ɠ����l���� */
		c.a[i] = i;

	func(c);
	puts("�S�v�f��0�������܂����B");		/* �R�ł� */

	for (i = 0; i < 5; i++)
		printf("c.a[%d] = %d\n", i, c.a[i]);

	return 0;
}
