/*
	�\���̃I�u�W�F�N�g�̏������i�������q�s���̃����o��0�ŏ����������j
*/

#include <stdio.h>

int main(void)
{
	struct xy {
		int    x;
		double y;
	};
	struct xy s = {1};		/* s.x��1  �ŏ���������As.y��  0�ŏ���������� */
	struct xy t = s;		/* t.x��s.x�ŏ���������At.y��s.y�ŏ���������� */

	printf("s.x = %d\n", s.x);		/* �I�u�W�F�N�gs�̃����ox�̒l��\�� */
	printf("s.y = %f\n", s.y);		/* �I�u�W�F�N�gs�̃����oy�̒l��\�� */
	printf("t.x = %d\n", t.x);		/* �I�u�W�F�N�gt�̃����ox�̒l��\�� */
	printf("t.y = %f\n", t.y);		/* �I�u�W�F�N�gt�̃����oy�̒l��\�� */

	return 0;
}
