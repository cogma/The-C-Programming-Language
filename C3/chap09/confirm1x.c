/*
	���͂̊m�F���s���i��肠��Fgetchar�֐��̌ďo�������������H�j
*/

#include <stdio.h>

int main(void)
{
	int ch;
	char name[20];

	printf("���O����͂��Ă��������F");
	scanf("%s", name);

	printf("��낵���ł����i�x�^�m�j�F");

	ch = getchar();					/* ���̊֐��ďo�������������H */
	printf("ch = %x\n", ch);
	if (ch == 'Y' || ch == 'y') {
		printf("����ɂ���%s����B\n", name);		/* ���s����Ȃ� */
		/* �y�����z */								/* ���s����Ȃ� */
	}

	return 0;
}
