/*
	���͂̊m�F���s���i�C���ŁH�j
*/

#include <stdio.h>

int main(void)
{
	int ch;
	char name[20];

	printf("���O����͂��Ă��������F");
	scanf("%s", name);

	printf("��낵���ł����i�x�^�m�j�F");

	fflush(stdin);			/* �W�����̓X�g���[���̃o�b�t�@���t���b�V�� */

	ch = getchar();
	if (ch == 'Y' || ch == 'y') {
		printf("����ɂ���%s����B\n", name);
		/* �y�����z */
	}

	return 0;
}
