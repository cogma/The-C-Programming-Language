/* ������̔z��𓮓I�ɐ��� */

#include <stdio.h>
#include <stdlib.h>

#define LENGTH	10		/* ������̒��� */

int main(void)
{
	int  num;			/* ������̌��͔C�� */
	char (*p)[LENGTH];	/* �������͌Œ�i�萔10�j*/

	printf("������͉��F");
	scanf("%d", &num);

	p = malloc(num * LENGTH);

	if (p == NULL) 
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		int i;

		for (i = 0; i < num; i++) {			/* �������ǂݍ��� */
			printf("p[%d] : ", i);
			scanf("%s", p[i]);
		}

		for (i = 0; i < num; i++)			/* �������\�� */
			printf("p[%d] = %s\n", i, p[i]);

		free(p);							/* �L�������� */
	}

	return 0;
}
