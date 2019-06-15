/* ��������̐����̉ۂɂ���Ĕz��v�f�̒l�����ʕ\�� */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--- ���т͗�[�a�F70�`79�_]���H ---*/
int fit(int x)
{
	return x >= 70 && x <= 79;
}

/*--- �֐�fit(x)�̕ԋp�l���^�i��0�j�ł���z��a�̗v�f�����ʕ\�� ---*/
void put_list(const int a[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		if (fit(a[i]))
			printf("��");
		else
			printf("  ");
		printf("a[%d] = %d\n", i, a[i]);
	}
}

int main()
{
	int i;
	int a[10];							/* �_�� */
	int n = sizeof(a) / sizeof(a[0]);	/* �v�f�� */

	srand(time(NULL));			/* �����̎�������� */

	for (i = 0; i < n; i++)
		a[i] = rand() % 101;	/* 0�`100�̗������� */

	put_list(a, n);				/* �ꗗ�\�� */

	return 0;
}
