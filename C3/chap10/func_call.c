/*
	�֐��ďo���ƃX�^�b�N�𗝉����邽�߂̃v���O������
*/

#include <stdio.h>

void fa(void)
{
	puts("�������֐�fa�J�n");
	puts("�������֐�fa�I��");
}

void fb(void)
{
	puts("�������֐�fb�J�n");
	puts("�������֐�fb�I��");
}

void fc(void)
{
	puts("�����֐�fc�J�n");

	fa();								/* �֐�fa���Ăяo�� */

	fb();								/* �֐�fb���Ăяo�� */

	puts("�����֐�fc�I��");
}

int main(void)
{
	puts("��main�֐��J�n");

	fc();								/* �֐�fc���Ăяo�� */

	puts("��main�֐��I��");

	return 0;
}
