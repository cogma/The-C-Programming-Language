/*
	���l��ǂݍ���ŕ\��
*/

#include <stdio.h>

int main(void)
{
	int num;

	while (1) {
		printf("�����l����͂���F");
 		scanf("%d", &num);
		if (num == 9999) break;

 		printf("���Ȃ���%d�Ɠ��͂��܂����ˁB\n", num);
	}

	return 0;
}
