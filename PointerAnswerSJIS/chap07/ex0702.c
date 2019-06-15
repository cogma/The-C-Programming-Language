/* ���K7-2�̉𓚗� */

#include <stdio.h>
#include <stdlib.h>

/*--- ptr�̎w��old_size�o�C�g�̊m�ۍςݗ̈��size�o�C�g�ɕύX
	  �� �V���Ɋm�ۂ����̈�̑S�r�b�g��0�Ŗ��ߐs����--- */
void *recalloc(void *ptr, size_t size, size_t old_size)
{
	void *tmp;

	if (size == 0)
		return NULL;

	tmp = realloc(ptr, size);
	if (tmp != NULL && size > old_size)
		memset((char *)tmp + old_size, 0, size - old_size);

	return tmp;
}

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
		int *temp;

		printf("�v�f���������ɕύX���܂����F");
		scanf("%d", &n2);

		temp = recalloc(p, n2 * sizeof(int), n1 * sizeof(int));	/* �v�f����n2�ɕύX */

		if (temp == NULL)
			puts("�̈�̑傫���̕ύX�Ɏ��s���܂����B");
		else {
			p = temp;
			no = n2;
		}

		for (i = 0; i < no; i++)		/* �S�v�f�̒l��\�� */
			printf("p[%d] = %d\n", i, p[i]);

		free(p);						/* �m�ۂ��Ă����̈����� */
	}
	return 0;
}
