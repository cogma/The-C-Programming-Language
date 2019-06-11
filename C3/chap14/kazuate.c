/*
	�����ăQ�[��
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "display.h"

int main(void)
{
	int no;						/* �ǂݍ��񂾒l */
	int ans;					/* ���Ă����鐔 */
	const int max_stage = 10;	/* �ő���͉� */
	int remain = max_stage;		/* �c�艽����͂ł��邩�H */

	srand(time(NULL));			/* �����̎��ݒ� */
	ans = rand() % 1000;		/* 0�`999�̗����𐶐� */

	printf("0�`999�̐����𓖂ĂĂ��������B\n\n");

	do {
		color(BRIGHT_WHITE);
		printf("�c��%d��B�������ȁF", remain);
		scanf("%d", &no);
		remain--;			/* �c��񐔂��f�N�������g */

		if (no > ans) {
			color(BRIGHT_CYAN);
			printf("\a�����Ə�������B\n");
		} else if (no < ans) {
			color(BRIGHT_GREEN);
			printf("\a�����Ƒ傫����B\n");
		}
	} while (no != ans && remain > 0);

	if (no != ans) {
		color(BRIGHT_RED);
		printf("\a�c�O�B������%d�ł����\n", ans);
	} else {
		color(BRIGHT_CYAN);
		printf("�����ł��B\n");
		printf("%d��œ�����܂����ˡ\n", max_stage - remain);
	}

	color(WHITE);

	return 0;
}
