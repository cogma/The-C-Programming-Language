/*
	�z��̑S�v�f�̒l�����v����i�v�f��������肵�Ȃ��j
*/

#include <stdio.h>

#define INVALID  -1		/* �ԕ��i�����Ȓl�j*/

/*--- �ԕ�INVALID���O�̗v�f�����v ---*/
int sumup(int v[])
{
	int i;
	int sum = 0;

	for (i = 0; v[i] != INVALID; i++)
		sum += v[i];
	return sum;
}

int main(void)
{
	int i;
	int a[128];
	int na = sizeof(a) / sizeof(a[0]);		/* �z��a�̗v�f�� */

	printf("%d�̔񕉂̐�������͂���i�I����-1�j�B\n", na - 1);
	for (i = 0; i < na - 1; i++) {
		printf("a[%d]�F", i);
		scanf("%d", &a[i]);
		if (a[i] == INVALID) break;		/* ���͏I�� */
	}
	if (i == na - 1)					/* INVALID�����͂���Ȃ������� */
		a[i] = INVALID;					/* �����v�f�̒l��INVALID�ɂ��� */

	printf("���v��%d\n", sumup(a));

	return 0;
}
