/* �����̔z��ɕ�������i�[���ĕ\���i���̂P�j*/

#include <stdio.h>

int main(void)
{
	char str[4];

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = '\0';		/* ������̏I�[��\�����߂̃i������ */

	printf("�z��str�ɕ�����\"%s\"���i�[����Ă��܂��B\n", str);

	return 0;
}
