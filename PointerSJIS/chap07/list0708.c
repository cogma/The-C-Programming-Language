/* �m�ۂ����̈�̑傫����ύX�i���j*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1;		/* �z��̗v�f�� */
	int *p;

	printf("�m�ۂ���z��̗v�f���F");
	scanf("%d", &n1);

	p = calloc(n1, sizeof(int));	/* int�^����n1�̔z��𓮓I�Ɋm�� */

	if (p == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		int i, n2;
		int no = n1;				/* �z��̗v�f�� */

		for (i = 0; i < n1; i++)	/* �S�v�f�ɓY���Ɠ����l���� */
			p[i] = i;

		printf("�v�f���������ɕύX���܂����F");
		scanf("%d", &n2);

		p = realloc(p, n2 * sizeof(int));	/* �v�f����n2�ɕύX */

		if (p == NULL)
			puts("�̈�̑傫���̕ύX�Ɏ��s���܂����B");
		else {
			for (i = n1; i < n2; i++)	/* �������v�f�ɓY���Ɠ����l���� */
				p[i] = i;
			no = n2;
		}

		for (i = 0; i < no; i++)		/* �S�v�f�̒l��\�� */
			printf("p[%d] = %d\n", i, p[i]);

		free(p);						/* �m�ۂ��Ă����̈����� */
	}
	return 0;
}
