/* �z�񖼂��擪�v�f�ւ̃|�C���^�Ɖ��߂���邱�Ƃ��m�F */

#include <stdio.h>

int main(void)
{
	int a[5];	/* int�^��v�f�^�Ƃ���v�f��5�̔z�� */

	printf(" a   �̒l��%p\n",  a   );		/* a�̒l��\�� */
	printf("&a[0]�̒l��%p\n", &a[0]);		/* &a[0]�̒l��\�� */

	if (a == &a[0])
		puts("a��&a[0]�͓������B");			/* �K�����s����� */
	else
		puts("a��&a[0]�͓������Ȃ��B");		/* �����Ď��s����Ȃ� */

	return 0;
}
